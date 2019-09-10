#include "payer_salarier.h"
#include "ui_payer_salarier.h"
#include "QSqlQueryModel"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include"menu_finance.h"
payer_salarier::payer_salarier(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::payer_salarier)
{
    ui->setupUi(this);
    QSqlQueryModel * model= new QSqlQueryModel();
      model->setQuery("select * from Empolyees");
      ui->tableView->setModel(model);
}

payer_salarier::~payer_salarier()
{
    delete ui;
}

void payer_salarier::on_pushButton_3_clicked()
{
    menu_finance* trf_ret = new menu_finance();
        trf_ret->show();
        this->hide();
}

void payer_salarier::on_pushButton_clicked()
{

        QString id,salaire;
        id=ui->id_emp->text();
        salaire=ui->salaire->text();
        QSqlQuery req;

         req.prepare("update  Empolyees set solde = ?  where  CIN_Employee = ?");


        req.addBindValue(salaire);
        req.addBindValue(id);

        req.exec();
        if (req.exec())
        {
            qDebug("requete reussi");


            QMessageBox::information(0, qApp->tr("modif"),
                qApp->tr("salaire versé"), QMessageBox::Ok);
        }
        else
            QMessageBox::critical(0, qApp->tr("modif"),
                qApp->tr("Probléme de versement"), QMessageBox::Cancel);


    }


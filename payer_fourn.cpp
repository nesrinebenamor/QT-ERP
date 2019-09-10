#include "payer_fourn.h"
#include "ui_payer_fourn.h"
#include "QSqlQueryModel"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include "menu_finance.h"

payer_fourn::payer_fourn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::payer_fourn)
{
    ui->setupUi(this);
    QSqlQueryModel * model= new QSqlQueryModel();
      model->setQuery("select * from Fournisseurs ");
      ui->tableView->setModel(model);
}

payer_fourn::~payer_fourn()
{
    delete ui;
}

void payer_fourn::on_pushButton_clicked()
{
    QString id,somme;
    id=ui->id_four->text();
    somme=ui->somme->text();
    QSqlQuery req;

     req.prepare("update Fournisseurs set solde = ?  where  CIN_Four = ?");


    req.addBindValue(somme);
    req.addBindValue(id);

    req.exec();
    if (req.exec())
    {
        qDebug("requete reussi");


        QMessageBox::information(0, qApp->tr("modif"),
            qApp->tr("somme versé"), QMessageBox::Ok);
    }
    else
        QMessageBox::critical(0, qApp->tr("modif"),
            qApp->tr("Probléme de versement"), QMessageBox::Cancel);


}

void payer_fourn::on_pushButton_2_clicked()
{
    menu_finance* trf_ret = new menu_finance();
        trf_ret->show();
        this->hide();

}

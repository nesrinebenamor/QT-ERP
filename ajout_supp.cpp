#include "ajout_supp.h"
#include "ui_ajout_supp.h"
#include"QString"
#include <QStandardItemModel>
#include <QtSql>
#include "QTableView"
#include "QDebug"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include"ajout_facture.h"


ajout_supp::ajout_supp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ajout_supp)
{
    ui->setupUi(this);
}

ajout_supp::~ajout_supp()
{
    delete ui;
}

void ajout_supp::on_pushButton_clicked()
{QString id;
    id=ui->id_rech->text();
     ui->tableView_2->setModel(f.rechercherFacture(id));
}

void ajout_supp::on_suppr_clicked()
{
    QString supp=ui->id_supp->text();
    QSqlQueryModel *model =f.rechercherFacture(supp);
    QString factSupp = model->data(model->index(0, 0)).toString();
    if(factSupp==supp)

    {
        QString str = " Vous voulez vraiment supprimer \n la facture ayant id_facture :"+supp;
        int ret = QMessageBox::question(this, tr(" X "),str,QMessageBox::Ok|QMessageBox::Cancel);

        switch (ret) {
          case QMessageBox::Ok:
              if (f.supprimerfacture(supp))
                  QMessageBox ::information(0, qApp->tr("Suppression"),
                      qApp->tr("La facture a été supprimé"), QMessageBox::Ok);

              break;
          case QMessageBox::Cancel:

              break;
          default:
              // should never be reached
              break;
        }



    }
     else
    {

        QMessageBox::critical(0, qApp->tr("Suppression"),
            qApp->tr("facture non trouvé"), QMessageBox::Cancel);

    }


}


void ajout_supp::on_suppr_2_clicked()
{

    ajout_facture* trf_ret = new ajout_facture();
        trf_ret->show();
        this->hide();
}

void ajout_supp::on_suppr_3_clicked()
{
    ajout_facture* trf_ret = new ajout_facture();
        trf_ret->show();
        this->hide();
}

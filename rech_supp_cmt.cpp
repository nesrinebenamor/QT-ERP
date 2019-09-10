#include "rech_supp_cmt.h"
#include "ui_rech_supp_cmt.h"
#include"QString"
#include <QStandardItemModel>
#include <QtSql>
#include "QTableView"
#include "QDebug"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include"ajout_compte.h"

rech_supp_cmt::rech_supp_cmt(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rech_supp_cmt)
{
    ui->setupUi(this);
}

rech_supp_cmt::~rech_supp_cmt()
{
    delete ui;
}

void rech_supp_cmt::on_suppr_clicked()
{
    QString supp=ui->id_supp->text();
    QSqlQueryModel *model =c.rechercherCompte(supp);
    QString CompteSupp = model->data(model->index(0, 0)).toString();
    if(CompteSupp==supp)

    {
        QString str = " Vous voulez vraiment supprimer \n le compte ayant id_facture :"+supp;
        int ret = QMessageBox::question(this, tr(" X "),str,QMessageBox::Ok|QMessageBox::Cancel);

        switch (ret) {
          case QMessageBox::Ok:
              if (c.supprimerCompte(supp))
                  QMessageBox ::information(0, qApp->tr("Suppression"),
                      qApp->tr("Le compte a été supprimé"), QMessageBox::Ok);

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
            qApp->tr("compte non trouvé"), QMessageBox::Cancel);

    }


}


void rech_supp_cmt::on_pushButton_clicked()
{
    QString id;
        id=ui->id_rech->text();
         ui->tableView_2->setModel(c.rechercherCompte(id));
}

void rech_supp_cmt::on_suppr_2_clicked()
{

    ajout_compte* trf_ret = new ajout_compte();
        trf_ret->show();
        this->hide();

}

void rech_supp_cmt::on_suppr_3_clicked()
{

    ajout_compte* trf_ret = new ajout_compte();
        trf_ret->show();
        this->hide();
}

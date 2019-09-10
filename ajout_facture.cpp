#include "ajout_facture.h"
#include "ui_ajout_facture.h"
#include"factures.h"
//#include"connection.h"
#include "QSqlQueryModel"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include"menu_finance.h"
#include"ajout_supp.h"
ajout_facture::ajout_facture(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ajout_facture)
{
    ui->setupUi(this);
    ui->tableView->setModel(f.afficherfactures());

}

ajout_facture::~ajout_facture()
{
    delete ui;
}

void ajout_facture::on_ajouter_facture_clicked()
{
    QString id_facture ;
       QString totale_facture ;
       QString nom_client ;
       QString remarques ;
       QString date_facture ;
       QString produit ;
        id_facture=ui->id_facture->toPlainText() ;
      totale_facture=ui->tot->toPlainText();
       nom_client=ui->nom_client->toPlainText();
       remarques=ui->remarques->toPlainText();
       date_facture=ui->date_facture->text() ;
       produit=ui->produit->toPlainText();

              factures*m = new factures(id_facture ,
                       totale_facture ,
                       nom_client ,
                       remarques ,
                       date_facture,
                       produit );
         if (m->ajoutfacture(m))
             QMessageBox::information(0, qApp->tr("Ajout"),
                 qApp->tr("Une nouvelle facture a été ajouté"), QMessageBox::Ok);
         else
             QMessageBox::critical(0, qApp->tr("Ajout"),
                 qApp->tr("Probléme d'ajout "), QMessageBox::Cancel);

         ui->id_facture->clear() ;
       ui->tot->clear();
        ui->nom_client->clear();
       ui->remarques->clear();
       ui->date_facture->clear() ;
       ui->produit->clear();

}

void ajout_facture::on_ajouter_facture_2_clicked()
{
    menu_finance* trf_ret = new menu_finance();
        trf_ret->show();
        this->hide();
}

void ajout_facture::on_pushButton_clicked()
{ajout_supp* trf_ret = new ajout_supp();
    trf_ret->show();
    this->hide();

}

void ajout_facture::on_pushButton_2_clicked()
{menu_finance* trf_ret = new menu_finance();
    trf_ret->show();
    this->hide();


}

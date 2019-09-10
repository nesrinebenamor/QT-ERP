#include "supprimerpp.h"
#include "ui_supprimerpp.h"
#include "QSqlQuery"
#include "QMessageBox"
#include "QDebug"
#include "menu.h"
#include "pp.h"
supprimerPP::supprimerPP(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::supprimerPP)
{
    ui->setupUi(this);
}

supprimerPP::~supprimerPP()
{
    delete ui;
}

void supprimerPP::on_supprimerPB_clicked()
{
       QSqlQuery qry;
       QString reference = ui->refLE1->text();
       qry.prepare("delete from Produit_Panne where id_Prod_Pan='"+reference+"' ");


       if (qry.exec())
       {
           qDebug("requete reussi");

           QMessageBox MessageBox;
           MessageBox.setText("Le produit en panne a été supprimé avec succès !");
           MessageBox.exec();

       }

       else qDebug() << "requete failed";

       this->close();

   }



void supprimerPP::on_retourPB_clicked()
{
   this->hide();
    PP m;
    m.setModal(true);
    m.exec();

}

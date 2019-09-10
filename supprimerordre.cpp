#include "supprimerordre.h"
#include "ui_supprimerordre.h"
#include "QMessageBox"
#include "QSqlQuery"
#include "menu.h"
#include "QDebug"
#include "pp.h"
supprimerOrdre::supprimerOrdre(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::supprimerOrdre)
{
    ui->setupUi(this);
}

supprimerOrdre::~supprimerOrdre()
{
    delete ui;
}

void supprimerOrdre::on_supprimerPB_clicked()
{
      QSqlQuery qry;
      QString reference = ui->refLE1->text();
      qry.prepare("delete from Ordre where ref_prod='"+reference+"' ");


      if (qry.exec())
      {
          qDebug("requete reussi");

          QMessageBox MessageBox;
          MessageBox.setText("L'Ordre a été supprimé avec succès !");
          MessageBox.exec();

      }

      else qDebug() << "requete failed";

  }

void supprimerOrdre::on_retour_clicked()
{
    this->hide();
     PP m;
     m.setModal(true);
     m.exec();

}

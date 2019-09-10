#include "listemat.h"
#include "ui_listemat.h"
#include "article.h"
#include "dialog.h"
#include "produit.h"
#include"gestion_stock.h"

ListeMat::ListeMat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ListeMat)
{
    ui->setupUi(this);
    ui->ArtView->setModel(prod.afficherProduitInd());
}

ListeMat::~ListeMat()
{
    delete ui;
}



void ListeMat::on_AjouterpB_clicked()
{
    article w;
    w.exec();
}


void ListeMat::on_fermerpB_clicked()
{
    this->hide();
}

void ListeMat::on_SuppB_clicked()
{

    QString refsupp = ui->ArtView->model()->data(ui->ArtView->model()->index(ui->ArtView->currentIndex().row(),0)).toString();

    int x=0;

        QString str = " Vous voulez vraiment supprimer \n le produit ayant le Ref :"+refsupp;
        int ret = QMessageBox::question(this, tr("Confirmation"),str,QMessageBox::Ok|QMessageBox::Cancel);

        switch (ret)
        {
          case QMessageBox::Ok:
              if (prod.supprimerProduit(refsupp))
               {
                  QMessageBox ::information(0, qApp->tr("Suppression"),
                      qApp->tr("Le produit a été supprimé"), QMessageBox::Ok);
                 ui->ArtView->setModel(prod.afficherProduit());
                 x=1;
              }
              break;
          case QMessageBox::Cancel:
              {x=-1;}
               break;
          default:
              // should never be reached
              break;
          }
        if(x==0)
            QMessageBox ::information(0, qApp->tr("Suppression"),
                qApp->tr("Echec"), QMessageBox::Ok);



}


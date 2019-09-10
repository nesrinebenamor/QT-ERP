
#include "ui_lignecommandeclient.h"
#include "lignecommandeclient.h"
#include "affichagecommande.h"

ligneCommandeClient::ligneCommandeClient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ligneCommandeClient)
{
    ui->setupUi(this);
}

ligneCommandeClient::~ligneCommandeClient()
{
    delete ui;
}

void ligneCommandeClient::on_ajouterPB_clicked()
{
    int num = ui->num_comdLE->text().toInt();
    QString cin_cli = ui->cin_ClientLE->text();
    QString id_pro= ui->produitLE->text();
    int qt=ui->qteSB->value();

    clas_ligneComdCli * licc= new clas_ligneComdCli(cin_cli,id_pro, num, qt);

  if(cmd.rechercher(cin_cli,num)==1 && pr.rechercher(id_pro)==1)
   {
    if(licc->ajoutLigneCommandeCli(licc))
      {
        QMessageBox::information(0, qApp->tr("Ajout"),
            qApp->tr("Une nouvelle Ligne commande a été ajouté"), QMessageBox::Ok);

        affichageCommande *wr=new affichageCommande();
         wr->show();
      }
    else
        QMessageBox::critical(0, qApp->tr("Ajout"),
            qApp->tr("Probléme d'ajout"), QMessageBox::Cancel);
   }
   else
        QMessageBox::critical(0, qApp->tr("Ajout"),
                              qApp->tr("Ce produit ou cette commande n'existe pas"), QMessageBox::Cancel);


  ui->num_comdLE->clear();
  ui->cin_ClientLE->clear();
  ui->produitLE->clear();
  ui->qteSB->clear();

}



void ligneCommandeClient::on_retourPB_clicked()
{
    this->close();
}

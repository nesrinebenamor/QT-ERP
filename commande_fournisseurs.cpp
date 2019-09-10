#include "commande_fournisseurs.h"
#include "ui_commande_fournisseurs.h"

commande_fournisseurs::commande_fournisseurs(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::commande_fournisseurs)
{
    ui->setupUi(this);
    ui->ComView->setModel(com.afficherCommande());
}

commande_fournisseurs::~commande_fournisseurs()
{
    delete ui;
}

void commande_fournisseurs::on_AnnPB_clicked()
{
    this->close();
}

void commande_fournisseurs::on_AjouterPB_clicked()
{
     QString cin=ui->cinFouLE->text();
     int num=ui->ncLE->text().toInt();

     commande_four * com= new commande_four(num,cin);

    if(f.rechercher(cin)== 1)
     {
     if (com->ajoutCommande(com))
        { QMessageBox::information(0, qApp->tr("Ajout"),
             qApp->tr("Une nouvelle commande a été ajouté"), QMessageBox::Ok);
        ui->ComView->setModel(com->afficherCommande());
        }
     else
         QMessageBox::critical(0, qApp->tr("Ajout"),
             qApp->tr("Probléme d'ajout"), QMessageBox::Cancel);

      }
     else
         QMessageBox::critical(0, qApp->tr("Ajout"),
             qApp->tr("Cette Fournisseur n'existe pas"), QMessageBox::Cancel);
  }

#include "interface_fournisseur.h"
#include "ui_interface_fournisseur.h"

interface_fournisseur::interface_fournisseur(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::interface_fournisseur)
{
    ui->setupUi(this);
}

interface_fournisseur::~interface_fournisseur()
{
    delete ui;
}

void interface_fournisseur::on_RetPB_clicked()
{
    this->hide();
}

void interface_fournisseur::on_AjoutPB_clicked()
{
    QString cin =ui->cinLE->text();
    QString nom= ui->NomLE->text();
    QString prenom= ui->PrenomLE->text();
    QString tel= ui->teLE->text();
    QString adr=ui->AdrLE->text();
    QString fax=ui->faxLE->text();

    class_four * four=new class_four(cin,fax);
    personne * pers=new personne( nom, prenom,cin,adr,tel);

    if(four->rechercher(cin)==1)
        QMessageBox::critical(0, qApp->tr("Ajout"),
            qApp->tr("Cette Fournisseur existe deja "), QMessageBox::Cancel);
    else
       {
    if(pers->rechercher(cin)==1)
    {
    if (four->ajoutFour(four))
        QMessageBox::information(0, qApp->tr("Ajout"),
            qApp->tr("Un nouveau FOurnisseur a été ajouté"), QMessageBox::Ok);
    else
        QMessageBox::critical(0, qApp->tr("Ajout"),
            qApp->tr("Probléme d'ajout"), QMessageBox::Cancel);
   }
   else
     {
        if (pers->ajouter_personne(pers))
          {
            four->ajoutFour(four);
            QMessageBox::information(0, qApp->tr("Ajout"),
                qApp->tr("Un nouveau Fournisseur a été ajouté"), QMessageBox::Ok);

          }
         else
            QMessageBox::critical(0, qApp->tr("Ajout"),
                qApp->tr("Probléme d'ajout"), QMessageBox::Cancel);
     }
   }

    ui->cinLE->clear();
    ui->NomLE->clear();
    ui->PrenomLE->clear();
    ui->teLE->clear();
    ui->AdrLE->clear();
    ui->faxLE->clear();
}

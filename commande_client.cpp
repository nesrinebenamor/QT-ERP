#include "commande_client.h"
#include "ui_commande_client.h"
#include "Commande_Cli.h"
#include "lignecommandeclient.h"
#include"gestion_vente.h"

Commande_Client::Commande_Client(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Commande_Client)
{
    ui->setupUi(this);
}

Commande_Client::~Commande_Client()
{
    delete ui;
}

void Commande_Client::on_AjouterPB_clicked()
{
    QString cin=ui->cinCliLE->text();
    int num=ui->numcmdLE->text().toInt();

    commande_cli * com= new commande_cli(num,cin);

    if (com->ajoutCommande(com))
       { QMessageBox::information(0, qApp->tr("Ajout"),
            qApp->tr("Une nouvelle commande a été ajouté"), QMessageBox::Ok);
       ui->ComView->setModel(com->afficherCommande());
       }
    else
        QMessageBox::critical(0, qApp->tr("Ajout"),
            qApp->tr("Cette personnes existe déja"), QMessageBox::Cancel);

    ui->cinCliLE->clear();
    ui->numcmdLE->clear();
}

void Commande_Client::on_suivantPB_clicked()
{
    ligneCommandeClient *wr=new ligneCommandeClient();
    wr->show();
}

void Commande_Client::on_pushButton_clicked()
{
    gestion_vente * gestion = new gestion_vente;
    gestion->show();
    this->close();
}

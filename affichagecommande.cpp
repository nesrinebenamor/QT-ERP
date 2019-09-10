#include "affichagecommande.h"
#include "ui_affichagecommande.h"

affichageCommande::affichageCommande(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::affichageCommande)
{
    ui->setupUi(this);
    ui->CommandeView->setModel(lcomc.afficherLigneCommCli());
}

affichageCommande::~affichageCommande()
{
    delete ui;
}

void affichageCommande::on_pushButton_clicked()
{
    this->close();
}

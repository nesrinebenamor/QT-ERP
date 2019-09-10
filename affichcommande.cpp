#include "affichcommande.h"
#include "ui_affichcommande.h"

affichCommande::affichCommande(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::affichCommande)
{
    ui->setupUi(this);
    ui->LgComView->setModel(lgcf.afficherLigneCommFou());
}

affichCommande::~affichCommande()
{
    delete ui;
}

void affichCommande::on_RetPB_clicked()
{
    this->close();
}

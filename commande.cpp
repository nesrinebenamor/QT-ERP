#include "commande.h"
#include "ui_commande.h"

Commande::Commande(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Commande)
{
    ui->setupUi(this);
}

Commande::~Commande()
{
    delete ui;
}

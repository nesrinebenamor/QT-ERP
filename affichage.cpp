#include "affichage.h"
#include "ui_affichage.h"

#include "mainwindow.h"
#include "gestion_vente.h"

affichage::affichage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::affichage)
{
    ui->setupUi(this);
    ui->comView->setModel(tm.afficherClient());

}

affichage::~affichage()
{
    delete ui;
}


void affichage::on_retourPB_clicked()
{
    gestion_vente * gestion = new gestion_vente;
    gestion->show();
    this->close();
}

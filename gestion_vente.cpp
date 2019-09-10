#include "gestion_vente.h"
#include "ui_gestion_vente.h"
#include "mainwindow.h"
#include "recherche_client.h"
#include "affichage.h"
#include "supprimer.h"
#include "commande_client.h"

gestion_vente::gestion_vente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestion_vente)
{
    ui->setupUi(this);
}

gestion_vente::~gestion_vente()
{
    delete ui;
}

void gestion_vente::on_ajoutPB_clicked()
{
    MainWindow *wr=new MainWindow();
    wr->show();
    this->close();
}

void gestion_vente::on_rechPB_clicked()
{
    recherche_client *w = new recherche_client;
    w->show();
    this->close();
}

void gestion_vente::on_consulterPB_clicked()
{
    affichage *w = new affichage;
    w->show();
    this->close();
}

void gestion_vente::on_suppPB_clicked()
{
    supprimer *w= new supprimer;
    w->show();
    this->close();
}

void gestion_vente::on_VentePB_clicked()
{
    Commande_Client *wr=new Commande_Client();
    wr->show();
    this->close();
}

void gestion_vente::on_quitePB_clicked()
{
    exit(1);
}

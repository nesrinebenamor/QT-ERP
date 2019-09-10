#include "menu.h"
#include "ui_menu.h"
#include "rapport.h"
#include "ordre.h"
#include "cout.h"
#include "panne.h"
#include "afficherpp.h"
#include "modifierpp.h"
#include "supprimerpp.h"
#include "pp.h"
#include "modiferordre.h"
#include "supprimerordre.h"

menu::menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
}

menu::~menu()
{
    delete ui;
}


void menu::on_rapportdetatPB_clicked()
{
    rapport *r = new rapport();
    r->show();

}

void menu::on_ordredemaintenecePB_clicked()
{
    ordre * a = new ordre();
    a->exec();

}

void menu::on_coutdemaintenecePB_clicked()
{
    cout * j =new cout();
    j->exec();

}

void menu::on_dexonnectionPB_clicked()
{
    exit(1);
}



void menu::on_produitpanne_clicked()
{
    PP *l = new PP();
    l->show();
    this->close();
}

void menu::on_modifierodremaintePB_clicked()
{
    modiferOrdre * s = new modiferOrdre();
    s->show();
    this->close();
}

void menu::on_supprimerOPB_clicked()
{
    supprimerOrdre  * n = new supprimerOrdre();
    n->show();
    this->close();
}

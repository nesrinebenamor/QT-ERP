#include "pp.h"
#include "ui_pp.h"
#include "QSqlQueryModel"
#include "QTableView"
#include <QStandardItemModel>
#include "QSqlQuery"
#include "afficherpp.h"
#include "panne.h"
#include "modifierpp.h"
#include "supprimerpp.h"
#include"menu.h"
PP::PP(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PP)
{
    ui->setupUi(this);
}

PP::~PP()
{
    delete ui;
}



void PP::on_afficherproduitenpannePB_clicked()
{

    afficherPP * k = new afficherPP();

    k->show();
    this->close();

}



void PP::on_ajoutproduitenpannPB_clicked()
{
    panne *h = new panne();

    h->show();

   this->close();
}

void PP::on_modifierPB_clicked()
{
    modifierPP * s = new modifierPP();
    s->show();
    this->close();
}

void PP::on_supprimerPB_clicked()
{
    supprimerPP * i= new supprimerPP();
    i->show();
    this->close();

}

void PP::on_pushButton_clicked()
{
    menu * int_menu = new menu ;
    int_menu->show();
    this->close();
}

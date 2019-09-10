#include "menuforma.h"
#include "ui_menuforma.h"
#include "ajout_forma.h"
#include "affiche_forma.h"
#include "supprimerforma.h"
#include "modif_forma.h"
#include"menu_grh.h"

menuforma::menuforma(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menuforma)
{
    ui->setupUi(this);
}

menuforma::~menuforma()
{
    delete ui;
}


void menuforma::on_ajouterPB_clicked()
{
    ajout_forma  *w1=new ajout_forma ;
     w1->exec();

}

void menuforma::on_consulterPB_clicked()
{
     affiche_forma *w6=new affiche_forma;
     w6->exec();
}

void menuforma::on_supprimerPB_clicked()
{
    supprimerforma *w7=new supprimerforma;
     w7->exec();
}

void menuforma::on_modifierPB_clicked()
{
    modif_forma *w8=new modif_forma;
    w8->exec();
}

void menuforma::on_retourPB_clicked()
{
    Menu_GRH * w = new Menu_GRH();
    this->close();
    w->show();

}

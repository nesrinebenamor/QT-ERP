#include "menu_absence.h"
#include "ui_menu_absence.h"
#include "fiche_absence.h"

menu_absence::menu_absence(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu_absence)
{
    ui->setupUi(this);
}

menu_absence::~menu_absence()
{
    delete ui;
}

void menu_absence::on_ajouterPBA_clicked()
{
    fiche_absence  *a1=new fiche_absence ;
     a1->show();
}



void menu_absence::on_retourPB_clicked()
{
    this->hide();
}

void menu_absence::on_consulterPBA_clicked()
{
    fiche_absence *a2=new fiche_absence ;
     a2->show();
}




void menu_absence::on_supprimerPBA_clicked()
{
    fiche_absence *a3=new fiche_absence;
    a3->show();
}

void menu_absence::on_modifierPBA_clicked()
{
    fiche_absence *a4=new fiche_absence;
    a4->show();
}

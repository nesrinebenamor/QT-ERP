#include "menu_grh.h"
#include "ui_menu_grh.h"
#include"fiche_absence.h"
#include"utilisateurs.h"
#include"ges_emp.h"
#include"menu_conges.h"

Menu_GRH::Menu_GRH(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Menu_GRH)
{
    ui->setupUi(this);
}

Menu_GRH::~Menu_GRH()
{
    delete ui;
}

void Menu_GRH::on_gestion_forma_clicked()
{
    menuforma *m1=new menuforma;
    this->close();
    m1->exec();

}

void Menu_GRH::on_gestion_absence_clicked()
{
    fiche_absence * m2 = new fiche_absence();
    this->close();
    m2->exec();

}

void Menu_GRH::on_pushButton_clicked()
{
    utilisateurs * w = new utilisateurs();
    this->close();
    w->exec();

}

void Menu_GRH::on_GEM_clicked()
{
    ges_emp *w = new ges_emp();
    this->close();
    w->exec();
}

void Menu_GRH::on_pushButton_2_clicked()
{
    menu_conges * w =new menu_conges();
    this->close();
    w->exec();
}

void Menu_GRH::on_pushButton_3_clicked()
{
    exit(1);
}

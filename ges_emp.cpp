#include "ges_emp.h"
#include "ui_ges_emp.h"
#include"menu_grh.h"
#include"consulter_liste_employee.h"
#include"ajouter_pers.h"
#include"supprimer_pers.h"

ges_emp::ges_emp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ges_emp)
{
    ui->setupUi(this);
}

ges_emp::~ges_emp()
{
    delete ui;
}

void ges_emp::on_pushButton_5_clicked()
{
    Menu_GRH * w = new Menu_GRH();
    this->close();
    w->show();
}

void ges_emp::on_pushButton_4_clicked()
{
    consulter_liste_employee * w = new consulter_liste_employee();
    w->exec();
}


void ges_emp::on_pushButton_clicked()
{
    ajouter_pers * w = new ajouter_pers();
    w->exec();
}

void ges_emp::on_pushButton_2_clicked()
{
    supprimer_pers * w =  new supprimer_pers();
    w->exec();
}

void ges_emp::on_pushButton_3_clicked()
{
    QString id;
        id=ui->id->text();
         ui->tableView->setModel(e.rechercherCIN(id));
}

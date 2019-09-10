#include "menu_conges.h"
#include "ui_menu_conges.h"
#include "conges.h"
#include "consulter_cong.h"
#include"menu_grh.h"

menu_conges::menu_conges(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu_conges)
{
    ui->setupUi(this);
}

menu_conges::~menu_conges()
{
    delete ui;
}

void menu_conges::on_ajouterPB_clicked()
{
    conges*w=new conges();
         w->exec();
}

void menu_conges::on_consulterPB_clicked()
{
    consulter_cong *w=new consulter_cong();
    w->exec();
}

void menu_conges::on_pushButton_clicked()
{
    Menu_GRH * w = new Menu_GRH();
    this->close();
    w->show();
}

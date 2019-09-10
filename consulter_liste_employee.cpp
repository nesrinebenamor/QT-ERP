#include "consulter_liste_employee.h"
#include "ui_consulter_liste_employee.h"
#include"employes.h"

consulter_liste_employee::consulter_liste_employee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::consulter_liste_employee)
{
    ui->setupUi(this);
    ui->tableView->setModel(tmm.afficheremployes());

}

consulter_liste_employee::~consulter_liste_employee()
{
    delete ui;
}


void consulter_liste_employee::on_quitter_clicked()
{
    this->close();
}

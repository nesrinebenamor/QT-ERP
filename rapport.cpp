#include "rapport.h"
#include "ui_rapport.h"
#include "QSqlQueryModel"
#include "QMessageBox"
#include "QString"
#include "QString.h"
#include "QSqlQuery"


rapport::rapport(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::rapport)
{
    ui->setupUi(this);
}

rapport::~rapport()
{
    delete ui;
}

void rapport::on_rechercherPB_clicked()
{
    QString str1 = ui->refLE->text();
    QSqlQueryModel * model= new QSqlQueryModel();
    ui->tableView->show();
    model->setQuery("select * from produit_Panne p inner join Ordre o on (p.Id_Prod_Pan=o.ref_prod)");
    ui->tableView->setModel(model);

}

void rapport::on_retourrPB_clicked()
{
this->close();
}

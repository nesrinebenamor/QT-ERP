#include "affiche_forma.h"
#include "formation.h"
#include "ui_affiche_forma.h"
#include "QTableView"
#include <QStandardItemModel>
#include <QtSql>

affiche_forma::affiche_forma(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::affiche_forma)
{
    ui->setupUi(this);
}

affiche_forma::~affiche_forma()
{
    delete ui;
}


void affiche_forma::on_afficheformaPB_clicked()
{
    QString str1 = ui->id_formationLE->text();
    ui->tableView->show();
        this->model = new QSqlQueryModel();
        model->setQuery("select * from formation where Id_Formation= "+ui->id_formationLE->text()+" ");

        ui->tableView->setModel(model);

}

void affiche_forma::on_pushButton_clicked()
{
    this->close();
}

#include "document_bancaire.h"
#include "ui_document_bancaire.h"
#include"ajout_compte.h"
#include"factures.h"
//#include"connection.h"
#include"QSqlQueryModel"
#include<QStandardItemModel>
#include<QtSql>
#include"QTableView"
#include"QDebug"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include"menu_finance.h"

document_bancaire::document_bancaire(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::document_bancaire)
{
    ui->setupUi(this);
    ui->tableView->setModel(c.affichercompte());

}

document_bancaire::~document_bancaire()
{
    delete ui;
}

void document_bancaire::on_pushButton_clicked()
{
    ajout_compte* trf_ret = new ajout_compte();
        trf_ret->show();
        this->hide();
}

void document_bancaire::on_pushButton_2_clicked()
{menu_finance* trf_ret = new menu_finance();
    trf_ret->show();
    this->hide();

}

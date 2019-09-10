#include "menu_finance.h"
#include "ui_menu_finance.h"
#include"payer_salarier.h"
#include"payer_fourn.h"
#include"ajout_facture.h"
#include"document_bancaire.h"

menu_finance::menu_finance(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu_finance)
{
    ui->setupUi(this);
}

menu_finance::~menu_finance()
{
    delete ui;
}

void menu_finance::on_pushButton_clicked()
{
    payer_salarier* trf_ret = new payer_salarier();
        trf_ret->show();
        this->hide();

}

void menu_finance::on_pushButton_5_clicked()
{
    payer_fourn* trf_ret = new payer_fourn();
        trf_ret->show();
        this->hide();
}

void menu_finance::on_pushButton_4_clicked()
{
    ajout_facture* trf_ret = new ajout_facture();
        trf_ret->show();
        this->hide();
}

void menu_finance::on_pushButton_3_clicked()
{
    document_bancaire* trf_ret = new document_bancaire();
        trf_ret->show();
        this->hide();
}

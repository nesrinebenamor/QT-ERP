#include "stock.h"
#include "ui_stock.h"

Stock::Stock(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Stock)
{
    ui->setupUi(this);
    ui->StockView->setModel(prod.afficherProduit());
}

Stock::~Stock()
{
    delete ui;
}

void Stock::on_retPB_clicked()
{
    this->close();
}

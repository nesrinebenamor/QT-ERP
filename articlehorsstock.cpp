#include "articlehorsstock.h"
#include "ui_articlehorsstock.h"

ArticleHorsStock::ArticleHorsStock(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ArticleHorsStock)
{
    ui->setupUi(this);
    ui->ArtHorsStockView->setModel(pro.afficherProduitInd());
}

ArticleHorsStock::~ArticleHorsStock()
{
    delete ui;
}

void ArticleHorsStock::on_retPB_clicked()
{
    this->close();
}

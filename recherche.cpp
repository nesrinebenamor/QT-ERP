#include "recherche.h"
#include "ui_recherche.h"

recherche::recherche(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::recherche)
{
    ui->setupUi(this);
}

recherche::~recherche()
{
    delete ui;
}

void recherche::on_OKpB_clicked()
{
    QString ref =ui->ReflE->text();
    QSqlQueryModel *model =prod.rechercherProduit(ref);
    QString refRech = model->data(model->index(0,0)).toString();
    if(ref == refRech)
    {
        ui->RechView->show();
        ui->RechView->setModel(model);
    }
     else
    {
        ui->RechView->hide();
        QMessageBox::critical(0, qApp->tr("Recherche"),
            qApp->tr("Produit non trouvé"), QMessageBox::Ok);

    }

}

void recherche::on_AnnulerpB_clicked()
{
    this->close();

}


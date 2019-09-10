#include "recherche_client.h"
#include "ui_recherche_client.h"
#include"gestion_vente.h"

recherche_client::recherche_client(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::recherche_client)
{
    ui->setupUi(this);
}

recherche_client::~recherche_client()
{
    delete ui;
}

void recherche_client::on_recherchePB_clicked()
{
    QString c =ui->comRechLE->text();
    QSqlQueryModel *model =tmp.rechercherClient(c);
    QString cinRech = model->data(model->index(0,0)).toString();

    if(c == cinRech)
    {
        ui->rechercheView->setModel(model);
        ui->rechercheView->show();

    }
     else
    {
        ui->rechercheView->hide();
        QMessageBox::critical(0, qApp->tr("Recherche"),
            qApp->tr("Produit non trouvé"), QMessageBox::Ok);

    }
}

void recherche_client::on_retourPB_clicked()
{
    gestion_vente * gestion = new gestion_vente;
    gestion->show();
    this->close();
}

#include "afficherpp.h"
#include "ui_afficherpp.h"
#include "produit_pane.h"
#include "QSqlQueryModel"
#include "QTableView"
#include <QStandardItemModel>
#include "menu.h"
#include "pp.h"

afficherPP::afficherPP(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::afficherPP)
{
    ui->setupUi(this);
}

afficherPP::~afficherPP()
{
    delete ui;
}

void afficherPP::on_groupBox_clicked()
{
    QString reference = ui->refLE1->text();

    QSqlQuery qry;
    QSqlQueryModel *model = new QSqlQueryModel();
    qry.prepare("Select * from Produit_Panne where id_Prod_Pan = "+reference+" ");
    qry.exec();
    model->setQuery(qry);
     ui->tableView->setModel(model);
     qDebug()<<(model->rowCount());
}

void afficherPP::on_okPB_clicked()

{
    QString reference = ui->refLE1->text();
    ui->tableView->setModel(p.RechercheProduitPane(reference));
}

void afficherPP::on_retourPB_clicked()
{
    this->hide();
     PP m;
     m.setModal(true);
     m.exec();
}

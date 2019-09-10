#include "conges.h"
#include "ui_conges.h"
#include"QString"
#include "qDebug"
#include"QMessageBox"

conges::conges(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::conges)
{
    ui->setupUi(this);
}

conges::~conges()
{
    delete ui;
}

void conges::on_AnuPB_clicked()
{
    this->close();
}


void conges::on_confirmer_clicked()
{
    QString CIN_Employee;

    CIN_Employee=ui->CINLE->text();

        QString date_debut=ui->auLE->date().toString("ddMMyyyy");

        QString date_fin=ui->duDL->date().toString("ddMMyyyy");
            qDebug() <<date_fin;

    claaseconge *c = new claaseconge(CIN_Employee,date_debut,date_fin);
    if (c->ajouter_claaseconge(c))
    QMessageBox::information(0, qApp->tr("Ajout"),
        qApp->tr("Un nouveau congé a été ajouté"), QMessageBox::Ok);
    else
    QMessageBox::critical(0, qApp->tr("Ajout"),
        qApp->tr("Probléme d'ajout"), QMessageBox::Cancel);
}

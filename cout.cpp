#include "cout.h"
#include "ui_cout.h"
#include "produit_pane.h"
#include "QSqlQueryModel"
#include "QTableView"
#include <QStandardItemModel>
#include "QString"
#include "QSqlquery"
#include <QMessageBox>
#include "QDebug"


cout::cout(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cout)
{
    ui->setupUi(this);
}

cout::~cout()
{
    delete ui;
}

void cout::on_okPB_clicked()
{
    QString reference = ui->refLE1->text();
    QSqlQuery qry;
    qry.prepare("select * from Produit_Panne where id_Prod_Pan = '"+reference+"'");
    if(qry.exec())
    while (qry.next())
    {
    ui->panLE->setText(qry.value(1).toString());

    }
    else
    QMessageBox::information(0, qApp->tr("Probleme"),
        qApp->tr("Probleme"), QMessageBox::Ok);
}

void cout::on_enregistrerPB_clicked()
{
    QString panne=ui->panLE->text();
    QString ga=ui->choixCB->currentText();
    QString ref=ui->refLE1->text();
     //QString ct=ui->couLE->text();
     produit_pane * p=new produit_pane(panne,ref,ga);

             if (p->modifierProduitPane(p))

               QMessageBox::information(0, qApp->tr("enregister"),
                     qApp->tr("cout enregistrer "), QMessageBox::Ok);
             else
                 QMessageBox::information(0, qApp->tr("Ajout"),
                     qApp->tr("Probleme"), QMessageBox::Ok);
}

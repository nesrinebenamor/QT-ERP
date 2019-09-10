#include "modifierpp.h"
#include "ui_modifierpp.h"
#include "QSqlQueryModel"
#include "QTableView"
#include <QStandardItemModel>
#include "QString"
#include "QSqlquery"
#include <QMessageBox>
#include"produit_pane.h"
#include "menu.h"

modifierPP::modifierPP(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modifierPP)
{
    ui->setupUi(this);

}

modifierPP::~modifierPP()
{
    delete ui;
}

void modifierPP::on_modifierPB_clicked()
{


   QString cause=ui->panLE->text();
   QString ga=ui->choixCB->currentText();
   QString id=ui->refLE1->text();

    produit_pane * p=new produit_pane(id,cause,ga);

            if (p->modifierProduitPane(p))

              QMessageBox::information(0, qApp->tr("Modification"),
                    qApp->tr("Produit Modifier "), QMessageBox::Ok);
            else
                QMessageBox::information(0, qApp->tr("Ajout"),
                    qApp->tr("Probleme"), QMessageBox::Ok);

}

void modifierPP::on_OKPB_clicked()
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

void modifierPP::on_retourPB_clicked()
{
    this->hide();
    menu m;
    m.setModal(true);
    m.exec();
}

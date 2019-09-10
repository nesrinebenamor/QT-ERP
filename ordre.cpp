#include "ordre.h"
#include "ui_ordre.h"
#include "modifierpp.h"
#include "ui_modifierpp.h"
#include "QSqlQueryModel"
#include "QTableView"
#include <QStandardItemModel>
#include "QString"
#include "QSqlquery"
#include <QMessageBox>
#include "QDebug"
#include "ordremaint.h"
#include "menu.h"

ordre::ordre(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ordre)
{
    ui->setupUi(this);
}

ordre::~ordre()
{
    delete ui;
}

void ordre::on_envoyeerPB_clicked()
{

    QSqlQuery qry;
    QString reference=ui->refLE->text();
    int num=ui->numSB->value();
    QString descision=ui->choixCB->currentText();
     ordremaint *o = new ordremaint();

     if (o->ajoutOrdre(o))

       QMessageBox::information(0, qApp->tr("Ajout"),
             qApp->tr("Un nouveau Ordre a été ajouté"), QMessageBox::Ok);

     else
         QMessageBox::information(0, qApp->tr("Ajout"),
             qApp->tr("Probleme"), QMessageBox::Ok);

     ui->refLE->clear();
     ui->numSB->clear();
     ui->choixCB->clear();
}



void ordre::on_retourPB_clicked()
{
    this->hide();
    menu m;
    m.setModal(true);
    m.exec();

}



#include "modiferordre.h"
#include "ui_modiferordre.h"
#include "ordremaint.h"
#include "QMessageBox"
#include "menu.h"
#include "QSqlQueryModel"
#include "QTableView"
#include <QStandardItemModel>
#include "QString"
#include "QSqlquery"


modiferOrdre::modiferOrdre(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modiferOrdre)
{
    ui->setupUi(this);
}

modiferOrdre::~modiferOrdre()
{
    delete ui;
}

void modiferOrdre::on_modifierPB_clicked()
{
   QString id=ui->refLE1->text();
    int num=ui->numSB->value();
   QString des=ui->choixCB->currentText();

     ordremaint *o=new ordremaint(id,num,des);

             if (o->modifierOrdre(o))

               QMessageBox::information(0, qApp->tr("Modification"),
                     qApp->tr("Ordre Modifier "), QMessageBox::Ok);
             else
                 QMessageBox::information(0, qApp->tr("Ajout"),
                     qApp->tr("Probleme"), QMessageBox::Ok);

}

void modiferOrdre::on_okPB_clicked()
{
    QString reference = ui->refLE1->text();
    QSqlQuery qry;
    qry.prepare("select * from Ordre where ref_prod = '"+reference+"'");
    if(qry.exec())
    while (qry.next())
    {
    ui->choixCB->setCurrentIndex(qry.value(1).toInt());
    ui->numSB->setValue(qry.value(2).toInt());
    }
    else
    QMessageBox::information(0, qApp->tr("Probleme"),
        qApp->tr("Probleme"), QMessageBox::Ok);
}

void modiferOrdre::on_retourPB_clicked()
{
    this->hide();
    menu m;
    m.setModal(true);
    m.exec();
}

#include "supprimerforma.h"
#include "ui_supprimerforma.h"
#include "QDebug"
#include "QString"
#include "menuforma.h"
#include "qsql.h"
#include <QtSql>
#include "QSqlQueryModel"
#include <QtGui/QApplication>
#include "QMessageBox"

supprimerforma::supprimerforma(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::supprimerforma)
{
    ui->setupUi(this);

}

supprimerforma::~supprimerforma()
{
    delete ui;
}



void supprimerforma::on_supprimerPB_clicked()
{
    QSqlQuery req;

     req.prepare("delete from Formation where Id_Formation='"+ui->lineEdit->text()+"'");


    if (req.exec())
    {
        qDebug("requete reussi");

        QMessageBox MessageBox;
        MessageBox.setText("la formation a été supprimé avec succès !");
        MessageBox.exec();

    }
    else qDebug()<<req.lastError().text();
    this->close();

}



void supprimerforma::on_retourPB_clicked()
{
    this->close();
}

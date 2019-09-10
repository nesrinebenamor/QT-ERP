#include "modif_forma.h"
#include "ui_modif_forma.h"
#include "qsql.h"
#include "qDebug.h"
#include <QString>
#include "menuforma.h"
#include "QMessageBox"
#include<QSqlQuery>
#include "formation.h"
#include "QSqlTableModel"
#include "QSqlError"
#include "formation.h"
#include "QDateEdit"



modif_forma::modif_forma(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modif_forma)
{
    ui->setupUi(this);
}

modif_forma::~modif_forma()
{
    delete ui;
}


void modif_forma::on_modifierPB_clicked()
{
    int str1 = ui->id_formationLE->text().toInt();
    QString str2=ui->nomcliLE->text();
    QString str3 =ui->nomformationLE->text();
    QString str4 =ui->nomformateurLE->text();

    int str5 = ui->nbhLE->text().toInt();
    int str6 = ui->nbpLE->text().toInt();
    QString str7 = ui->Id_clientLE->text();
    QString str8 = ui->lieuLE->text();



    QString str9=ui->dateDLE->date().toString("yyMMDD");
    QString str10=ui->dateFLE->date().toString("yyMMDD");
    qDebug() <<str10;



  formation * forma=new formation (str1,str2,str3,str4,str5,str6,str7,str8,str9,str10);


//formation(int Id_Formation,QString nomClient,QString nomFormation,QString nomFormateur,int nb_heure,int nb_place,int id_client ,QString lieu,QString datefin,QString datedebut )
                if (forma->modif_forma(forma))

                  QMessageBox::information(0, qApp->tr("Modification"),
                        qApp->tr("Formation Modifier "), QMessageBox::Ok);
                else
                   QMessageBox::information(0, qApp->tr("Modification"),
                    qApp->tr("Probleme de modification"), QMessageBox::Ok);


 ui->id_formationLE->clear();
 ui->nomcliLE->clear();
 ui->nomformationLE->clear();
 ui->nomformateurLE->clear();
 ui->nbhLE->clear();
 ui->nbpLE->clear();
 ui->Id_clientLE->clear();
 ui->lieuLE->clear();
 ui->dateDLE->clear();
 ui->dateFLE->clear();
}




void modif_forma::on_OKPB_clicked()
{
 QString ID = ui->id_formationLE->text();
     QSqlQuery qry;
     qry.prepare("select * from Formation where Id_Formation = '"+ID+"'");
     if(qry.exec())
     while (qry.next())
     {

       ui->nomformationLE->setText(qry.value(2).toString());
       ui->nomformateurLE->setText(qry.value(3).toString());
       ui->lieuLE->setText(qry.value(7).toString());
       ui->Id_clientLE->setText(qry.value(6).toString());
       ui->nomcliLE->setText(qry.value(1).toString());
   /*
       QString DD= ui->dateDLE->text();
       qry.addBindValue(DD);


       QString DF= ui->dateFLE->text();
       qry.addBindValue(DF);
      */
        //ui->dateDLE->setText(qry.value(9).toString());
    //   ui->dateDLE->setDate(qry.value(9).toDate().fromString("ddMMyyyy"));

        //ui->dateDLE->date()->setText()(qry.value(9).toString("yyMMDD"));

     /* QString DD=ui->dateFLE->date().toString("ddMMyyyy");
      QString DF= ui->dateFLE->date().toString("ddMMyyyy");
      DD->setText(qry.value(9).toString());
      DF->setText(qry.value(8).toString());*/

       QString d= qry.value(9).toString();
       QString format="ddMMyyyy";
       ui->dateDLE->setDate(QDate::fromString(d,format));


       QString d1= qry.value(8).toString();
       QString format1="ddMMyyyy";
       ui->dateFLE->setDate(QDate::fromString(d1,format1));


        ui->nbhLE->setText(qry.value(4).toString());
        ui->nbpLE->setValue(qry.value(5).toInt());

        }
     else
     QMessageBox::information(0, qApp->tr("Probleme"),
         qApp->tr("Probleme"), QMessageBox::Ok);
}

void modif_forma::on_pushButton_clicked()
{
    this->close();
}

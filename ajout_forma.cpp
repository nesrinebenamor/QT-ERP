#include <QtGui/QApplication>
#include "ajout_forma.h"
#include "ui_ajout_forma.h"
#include "formation.h"
#include"QDebug"
#include <QMessageBox>

ajout_forma::ajout_forma(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ajout_forma)
{
    ui->setupUi(this);

}

ajout_forma::~ajout_forma()
{
    delete ui;
}




void ajout_forma::on_ajouterformaPB_clicked()
{
    int Id_Formation = ui->Id_formationLE->text().toInt();
    QString nomClient    = ui->nomcliLE->text();
    QString nomFormation = ui->nomformationLE->text();
    QString nomFormateur = ui->nomformateurLE->text();

    int nb_heure     = ui->nbhLE ->text().toInt();
    int nb_place     = ui->nbpLE->text().toInt();

    QString Id_client    = ui->Id_clientLE->text();
    QString lieu = ui->lieuLE->text();


    QString datefin=ui->dateFLE->date().toString("ddMMyyyy");
    qDebug() <<datefin;

    QString datedebut=ui->dateDLE->date().toString("ddMMyyyy");

    formation *forma = new formation(Id_Formation,nomClient,nomFormation,nomFormateur,nb_heure,nb_place,Id_client ,lieu,datefin,datedebut);
// formation(int Id_Formation,QString nomClient,QString nomFormation,QString nomFormateur,int nb_heure,int nb_place,int id_client ,QString lieu,QString datefin,QString datedebut );

    if (forma->ajoutFormation(forma))
        QMessageBox::information(0, qApp->tr("ajouter"),
            qApp->tr("Un nouveau compte a été ajouté"), QMessageBox::Ok);
    else
            QMessageBox::critical(0, qApp->tr("ajouter"),
                qApp->tr("Probléme d'ajout"), QMessageBox::Cancel);

this->close();
}


void ajout_forma::on_pushButton_clicked()
{
    this->close();
}

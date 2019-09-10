#include "utilisateurs.h"
#include "ui_utilisateurs.h"
#include "utilisateur.h"
#include"menu_grh.h"

utilisateurs::utilisateurs(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::utilisateurs)
{
    ui->setupUi(this);
}

utilisateurs::~utilisateurs()
{
    delete ui;
}

void utilisateurs::on_OKa_clicked()
{
    QString cin ;
       QString mp ;
        QString nom ;
        int typ;


           cin=ui->CINLE->text() ;
          mp=ui->mpLE->text();
           nom=ui->nomLE->text();
           typ=ui->typLE->text().toInt() ;


                 utilisateur *m = new utilisateur(nom,mp,cin,typ);
             if (m->ajouter_utilisateur(m))
                 QMessageBox::information(0, qApp->tr("Ajout"),
                     qApp->tr("Une nouveau user a été ajouté"), QMessageBox::Ok);
             else
                 QMessageBox::critical(0, qApp->tr("Ajout"),
                     qApp->tr("Probléme d'ajout "), QMessageBox::Cancel);

             ui->CINLE->clear();
             ui->mpLE->clear();
             ui->nomLE->clear();
             ui->typLE->clear();
}


void utilisateurs::on_retourRP_clicked()
{
    Menu_GRH * w = new Menu_GRH();
    this->close();
    w->show();

}

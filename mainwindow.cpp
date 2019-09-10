#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

#include "affichage.h"
#include "gestion_vente.h"
#include "Client.h"
#include "Personnes.h"
#include "commande_client.h"
#include"gestion_vente.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;

}



void MainWindow::on_ajouterPB_clicked()
{
    QString nom = ui->nomLE->text();
    QString prenom = ui->prenomLE->text();
    QString cin = ui->cinLE->text();
    QString adresse =ui->adresseLE->text();
    QString tel = ui->num_telLE->text();

    personne *cp = new personne(nom, prenom, cin,  adresse, tel);
    Client *c=new Client(cin);
    if (cp->ajouter_personne(cp))
       {
        if (c->ajoutClient(c))
            QMessageBox::information(0, qApp->tr("Ajout"),
                qApp->tr("Un nouveau compte a été ajouté"), QMessageBox::Cancel);
        else
            QMessageBox::critical(0, qApp->tr("Ajout"),
                qApp->tr("Probléme d'ajout"), QMessageBox::Cancel);
       }
    else
        QMessageBox::critical(0, qApp->tr("Ajout"),
            qApp->tr("Probléme d'ajout"), QMessageBox::Cancel);

    Commande_Client *wr=new Commande_Client();
    wr->exec();

}



void MainWindow::on_retourPB_clicked()
{
    gestion_vente * gestion = new gestion_vente;
    gestion->show();
    this->close();
}

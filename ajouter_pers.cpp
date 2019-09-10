#include"ajouter_pers.h"
#include"ui_ajouter_pers.h"
#include"employes.h"
#include"QString"
#include "QDebug"
#include "menu_grh.h"


ajouter_pers::ajouter_pers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ajouter_pers)
{
    ui->setupUi(this);
}


ajouter_pers::~ajouter_pers()
{
    delete ui;
}

void ajouter_pers::on_OKa_clicked()
{
                         QString CIN ;
                         QString nom ;
                         QString prenom ;
                         QString adresse ;
                         QString num_tel;
                         QString id_employes;
                         QString grade;
                         QString num_post ;
                         QString date_am;
 CIN=ui->CINLE->text();
 nom=ui->nomLE->text();
 prenom=ui->prenomLE->text();
 adresse=ui->adresseLE->text();
 num_tel=ui->numtelLE->text();
 grade=ui->gradeLE->text();
 num_post=ui->posteLE->text();
 date_am=ui->dateambLE->text();

employes *m = new employes(CIN,grade,num_post,date_am);
personne *p = new personne( nom, prenom, CIN,adresse,num_tel);

if(p->ajouter_personne(p))
{
if (m->ajoutEMP(m))
QMessageBox::information(0, qApp->tr("Ajout"),
    qApp->tr("Un nouveau employee a été ajouté"), QMessageBox::Ok);
else
QMessageBox::critical(0, qApp->tr("Ajout"),
    qApp->tr("Probléme d'ajout"), QMessageBox::Cancel);
}
else
QMessageBox::critical(0, qApp->tr("Ajout"),
    qApp->tr("Probléme d'ajout ds la table personne"), QMessageBox::Cancel);


ui->CINLE->clear();
ui->nomLE->clear();
ui->prenomLE->clear();
ui->adresseLE->clear();
ui->numtelLE->clear();
ui->gradeLE->clear();
ui->posteLE->clear();
ui->dateambLE->clear();

}

void ajouter_pers::on_retourRP_clicked()
{
       this->close();
}

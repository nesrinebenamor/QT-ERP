#include "authentification.h"
#include "ui_authentification.h"

Authentification::Authentification(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Authentification)
{
    ui->setupUi(this);
}

Authentification::~Authentification()
{
    delete ui;
}

void Authentification::on_cnxPB_clicked()
{
    QString ut,pass;
    ut=ui->utiLE->text();
    pass=ui->passLE->text();

    utilisateur *uti=new utilisateur(ut,pass);
    int count;
    count=uti->verifier_utilisateur(ut,pass);
       if(count==-1)
      ui->stat->setText("ERREUR");
      if(count==1)
           {
            ui->stat->setText("Nom d'utilisateur et Mot de Passe Correcte ");


             if(uti->ouvrir_module(ut,pass)==0 )
               {
                  this->close();
                  Menu_GRH * GRH = new Menu_GRH ;
                  GRH->show();
               }
              if(uti->ouvrir_module(ut,pass)==1)
              {
                 this->close();
                 gestion_stock * ges_stock = new gestion_stock;
                 ges_stock->show();
              }

              if(uti->ouvrir_module(ut,pass)==2)
              {
                 this->close();
                 gestion_vente * ges_vente= new gestion_vente;
                 ges_vente->show();
              }
              if(uti->ouvrir_module(ut,pass)==3)
                {
                  this->close();
                  menu * menu_maintenance = new menu;
                  menu_maintenance->show();
                }

              if(uti->ouvrir_module(ut,pass)==4)
                {
                  menu_finance * finance = new menu_finance;
                  finance->show();
                  this->close();
                }


           }
        if(count>1)
            ui->stat->setText("Nom d'utilisateur et Mot de passe dupliquer");
        if(count==0)
            ui->stat->setText("Nom d'utilisateur ou mot de pass incorrect");
}

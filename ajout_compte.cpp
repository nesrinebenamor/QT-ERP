#include "ajout_compte.h"
#include "ui_ajout_compte.h"
#include"comptes.h"
#include "QSqlQueryModel"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include"menu_finance.h"
#include"document_bancaire.h"
#include"rech_supp_cmt.h"

ajout_compte::ajout_compte(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ajout_compte)
{
    ui->setupUi(this);
}

ajout_compte::~ajout_compte()
{
    delete ui;
}

void ajout_compte::on_pushButton_3_clicked()
{  QString num_compte ;
    QString banque ;
    QString remarques_2 ;
    QString date;


        num_compte=ui->num_c->text() ;
      banque=ui->banque->text();
       remarques_2=ui->remarques->text();
       date=ui->remarques->text();


             comptes*m = new comptes(num_compte ,
                     banque ,
                     remarques_2 ,
                     date );
         if (m->ajoutcompte(m))
             QMessageBox::information(0, qApp->tr("Ajout"),
                 qApp->tr("Une nouveau compte a été ajouté"), QMessageBox::Ok);
         else
             QMessageBox::critical(0, qApp->tr("Ajout"),
                 qApp->tr("Probléme d'ajout "), QMessageBox::Cancel);

         ui->num_c->clear() ;
        ui->banque->clear();
        ui->remarques->clear();
        ui->remarques->clear();

}

void ajout_compte::on_pushButton_4_clicked()
{
   menu_finance * trf_ret = new menu_finance();
        trf_ret->show();
        this->hide();
}

void ajout_compte::on_pushButton_5_clicked()
{
    document_bancaire * trf_ret = new document_bancaire();
         trf_ret->show();
         this->hide();
}

void ajout_compte::on_pushButton_6_clicked()
{
   rech_supp_cmt * trf_ret = new rech_supp_cmt();
         trf_ret->show();
         this->hide();
}

#include "supprimer_pers.h"
#include "ui_supprimer_pers.h"
#include"employes.h"
#include"connection.h"

supprimer_pers::supprimer_pers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::supprimer_pers)
{
    ui->setupUi(this);
}

supprimer_pers::~supprimer_pers()
{
    delete ui;
}

void supprimer_pers::on_SUPPRIME_clicked()
{

    QString supp=ui->CIN->text();
    QSqlQueryModel *model =tmm.rechercherCIN(supp);
    QString persSupp = model->data(model->index(0, 0)).toString();
    if(persSupp==supp)

    {
        QString str = " Vous voulez vraiment supprimer \n la personne ayant CIN :"+ ui->CIN->text();
        int ret = QMessageBox::question(this, tr(" supp "),str,QMessageBox::Ok|QMessageBox::Cancel);

        switch (ret) {
          case QMessageBox::Ok:
              if (tmm.supprimeremployes(supp))
                  QMessageBox ::information(0, qApp->tr("Suppression"),
                      qApp->tr("La personne a été supprimé"), QMessageBox::Ok);

              break;
          case QMessageBox::Cancel:

              break;
          default:
              // should never be reached
              break;
        }



    }
     else
    {

        QMessageBox::critical(0, qApp->tr("Suppression"),
            qApp->tr("personne non trouvé"), QMessageBox::Cancel);

    }


}



void supprimer_pers::on_retour_clicked()
{
    this->close();
}

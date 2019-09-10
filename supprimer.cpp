#include "supprimer.h"
#include "ui_supprimer.h"
#include <QMessageBox>
#include "QSqlQueryModel"
#include "mainwindow.h"
#include "gestion_vente.h"

supprimer::supprimer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::supprimer)
{
    ui->setupUi(this);
}

supprimer::~supprimer()
{
    delete ui;
}

void supprimer::on_SupprimerPB_clicked()
{
    QString c =ui->comSupLE->text();
    QSqlQueryModel *model =tmp.rechercherClient(c);
    QString cinRech = model->data(model->index(0, 0)).toString();
    if(c == cinRech)
    {
        QString str = " Vous voulez vraiment supprimer \n le compte ayant le cin :"+ ui->comSupLE->text();
        int ret = QMessageBox::question(this, tr("Client"),str,QMessageBox::Ok|QMessageBox::Cancel);

        switch (ret) {
          case QMessageBox::Ok:
              if (tmp.supprimerClient(c))
                  QMessageBox ::information(0, qApp->tr("Suppression"),
                      qApp->tr("Le Client a été supprimé"), QMessageBox::Ok);

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
            qApp->tr("Compte non trouvé"), QMessageBox::Cancel);

    }
}

void supprimer::on_retourPB_clicked()
{
    gestion_vente * gestion = new gestion_vente;
    gestion->show();
    this->close();
}

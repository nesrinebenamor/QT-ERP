#include "sortie.h"
#include "ui_sortie.h"

sortie::sortie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sortie)
{
    ui->setupUi(this);
}

sortie::~sortie()
{
    delete ui;
}

void sortie::on_AnnpB_clicked()
{
    this->hide();
}

void sortie::on_ConpB_clicked()
{
    QString num = ui->NumComLE->text();
    QSqlQuery qry;
    QString str="select * from LigneCommandeClient where id_commande='"+num+"'";

    qDebug()<<str;
    int qt;
    QString ref_prod_command;

    if(qry.exec(str))
    {
       while(qry.next())
          {
             qt=qry.value(3).toInt();
             ref_prod_command=qry.value(2).toString();
          }

       if(pro.valider_vente(ref_prod_command,qt))
         {  QMessageBox ::information(0, qApp->tr("Commande"),
               qApp->tr("Commande valide"), QMessageBox::Ok);
         }

    }
    else
        QMessageBox ::information(0, qApp->tr("Commande"),
            qApp->tr("Commande n'st pas valide"), QMessageBox::Ok);
}

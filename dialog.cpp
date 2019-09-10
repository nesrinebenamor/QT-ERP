#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_AnnpB_clicked()
{
    this->close();
}


void Dialog::on_ValpB_clicked()
{
   QString num = ui->NumLE->text();
   QSqlQuery qry;
   QString str="select * from LigneCommandeFou where id_commande='"+num+"'";

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

      if(pro.valider_achat(ref_prod_command,qt))
        {  QMessageBox ::information(0, qApp->tr("Commande"),
              qApp->tr("Commande valide"), QMessageBox::Ok);
        }

   }
   else
       QMessageBox ::information(0, qApp->tr("Commande"),
           qApp->tr("Commande n'st pas valide"), QMessageBox::Ok);

}

#include "fiche_absence.h"
#include "ui_fiche_absence.h"
#include "absence.h"
#include "QMessageBox"
#include"QApplication"
#include "QSqlQueryModel"
#include "QTableView"
#include <QStandardItemModel>
#include "QSqlQuery"
#include "qdebug.h"
#include "QSqlError"
#include"menu_grh.h"

fiche_absence::fiche_absence(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fiche_absence)
{
    ui->setupUi(this);
    //QPixmap pic("C:/9raya/MYPROJECT/fond1.jpg");
    //ui->label_pic->setPixmap(pic);
}


fiche_absence::~fiche_absence()
{
    delete ui;
}


void fiche_absence::on_justifieRB_clicked()
{
     ui->CIN_EmployeeLB->setVisible(true);
     ui->CIN_EmployeeLE->setVisible(true);
     ui->causeLB->setVisible(true);
     ui->causeCB->setVisible(true);
}

void fiche_absence::on_nonjustifieRB_clicked()
{

     //ui->CIN_EmployeeLB->setVisible(true);
     //ui->CIN_EmployeeLE->setVisible(true);


     ui->causeLB->setVisible(false);
     ui->causeCB->setVisible(false);



}



void fiche_absence::on_ajouterabs_clicked()
{
    QString cause = ui->causeCB->currentText();
    QString CIN_Employee= ui->CIN_EmployeeLE->text();


    QString justifie ="" ;

    if (ui->justifieRB->isChecked())
    {
        justifie="justifiée";
    }
    else if (ui->nonjustifieRB->isChecked())
    {
        justifie="non justifiée";
    }


    absence *A = new absence(CIN_Employee,cause,justifie);
    if (A->ajoutAbsence(A))
        QMessageBox::information(0, qApp->tr("Absence"),
            qApp->tr("absence signialé"), QMessageBox::Ok);
    else
       QMessageBox::critical(0, qApp->tr("Absence"),
            qApp->tr("absence non signalé"), QMessageBox::Cancel);

}



void fiche_absence::on_afficherabs_clicked()
{
    QString str1 = ui->cin_employeeLE->text();
    ui->tableView->show();
        this->model = new QSqlQueryModel();
        model->setQuery("select * from absence where CIN_Employee= "+ui->cin_employeeLE->text()+" ");

        ui->tableView->setModel(model);
}



void fiche_absence::on_supprimerabs_clicked()
{
    QSqlQuery req;

     req.prepare("delete from absence where CIN_Employee='"+ui->cin_employeeLE_2->text()+"'");


    if (req.exec())
    {
        qDebug("requete reussi");

        QMessageBox MessageBox;
        MessageBox.setText("l'absence d'employe a été supprimé avec succès !");
        MessageBox.exec();

    }
    else qDebug()<<req.lastError().text();
    this->close();
}



void fiche_absence::on_OKpB_clicked()
{
    QString CIN_Employee =ui->cin_employeeLE_3->text();
    QSqlQueryModel *model =abs.rechercherAbsence(CIN_Employee);
    QString refRech = model->data(model->index(0,0)).toString();
    if(CIN_Employee == refRech)
    {
        ui->RechView->show();
        ui->RechView->setModel(model);
    }
     else
    {
        ui->RechView->hide();
        QMessageBox::critical(0, qApp->tr("Recherche"),
            qApp->tr("absence non trouvé"), QMessageBox::Ok);

    }

}

void fiche_absence::on_AnnulerpB_clicked()
{
    Menu_GRH *w= new Menu_GRH();
    this->close();
    w->show();

}

void fiche_absence::on_pushButton_clicked()
{
    Menu_GRH *w= new Menu_GRH();
    this->close();
    w->show();
}

void fiche_absence::on_pushButton_2_clicked()
{
    Menu_GRH *w= new Menu_GRH();
    this->close();
    w->show();
}

void fiche_absence::on_retoursup_clicked()
{
    Menu_GRH *w= new Menu_GRH();
    this->close();
    w->show();
}

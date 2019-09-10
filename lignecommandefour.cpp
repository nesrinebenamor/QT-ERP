#include "lignecommandefour.h"
#include "ui_lignecommandefour.h"

LigneCommandeFour::LigneCommandeFour(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LigneCommandeFour)
{
    ui->setupUi(this);
}

LigneCommandeFour::~LigneCommandeFour()
{
    delete ui;
}

void LigneCommandeFour::on_AjoutPB_clicked()
{

    int num = ui->numComLE->text().toInt();
    QString cin_four = ui->CinfouLE->text();
    QString id_pro= ui->RefLE->text();
    int qt=ui->qteSB->value();

    class_ligneCommandeFou * lcf= new class_ligneCommandeFou(cin_four,id_pro, num, qt);

    if(cmd.rechercher(cin_four,num)==1 && pr.rechercher(id_pro)==1)
   {
    if(lcf->ajoutLigneCommandeFour(lcf))
        QMessageBox::information(0, qApp->tr("Ajout"),
            qApp->tr("Une nouvelle Ligne commande a été ajouté"), QMessageBox::Ok);
    else
        QMessageBox::critical(0, qApp->tr("Ajout"),
            qApp->tr("Probléme d'ajout"), QMessageBox::Cancel);
   }
   else
        QMessageBox::critical(0, qApp->tr("Ajout"),
                              qApp->tr("Ce produit ou cette commande n'existe pas"), QMessageBox::Cancel);

    ui->numComLE->clear();
    ui->CinfouLE->clear();
    ui->RefLE->clear();
    ui->qteSB->clear();
}

void LigneCommandeFour::on_RetPB_clicked()
{
    this->close();
}

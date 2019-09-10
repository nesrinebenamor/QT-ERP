#include "panne.h"
#include "ui_panne.h"
#include "QMessageBox"
#include "produit_pane.h"
#include "menu.h"
#include "pp.h"


panne::panne(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::panne)
{
    ui->setupUi(this);
}

panne::~panne()
{
    delete ui;
}

void panne::on_ajouter_clicked()
{
    QString id;
    QString cause;
    QString ga;

    id=ui->refLE->text();
    cause=ui->causLE->text();
    ga=ui->garantieCB->currentText();

    produit_pane * p=new produit_pane(id,cause,ga);

            if (p->ajoutProduit_pane(p))

              QMessageBox::information(0, qApp->tr("Ajout"),
                    qApp->tr("Un nouveau Produit a été ajouté"), QMessageBox::Ok);

            else
                QMessageBox::information(0, qApp->tr("Ajout"),
                    qApp->tr("Probleme"), QMessageBox::Ok);

            ui->refLE->clear();
            ui->causLE->clear();
            ui->garantieCB->clear();
}


void panne::on_retourPB_clicked()
{
    this->hide();
   PP m;
    m.setModal(true);
    m.exec();
}

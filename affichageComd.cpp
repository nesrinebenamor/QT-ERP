#include "affichageComd.h"
#include "CommandeCli.h"

affichageComd::affichageComd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::affichageComd)
{
    ui->setupUi(this);
    //ui->comdView->setModel(tmp.afficherCommande());

}
affichageComd::~affichageComd()
{
    delete ui;
}

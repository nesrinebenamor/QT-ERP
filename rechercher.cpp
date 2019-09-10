#include "rechercher.h"
#include "ui_rechercher.h"

#include"connection.h"

rechercher::rechercher(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::rechercher)
{
    ui->setupUi(this);
}

rechercher::~rechercher()
{
    delete ui;
}

void rechercher::on_pushButton_clicked()
{
    QString cin=ui->rechercheLE->text();
    QSqlQueryModel *model = e.rechercherCIN(cin);
    QString cinRech = model->data(model->index(0, 0)).toString();
    if(cin == cinRech)
    {
        ui->Rechercheview->show();
        ui->Rechercheview->setModel(model);
    }
     else
    {
        QMessageBox::critical(0, qApp->tr("Recherche"),
            qApp->tr("employe non trouvé"), QMessageBox::Ok);
         ui->Rechercheview->hide();
    }

}

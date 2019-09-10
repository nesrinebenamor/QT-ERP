#include "modification.h"
#include "ui_modification.h"

modification::modification(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modification)
{
    ui->setupUi(this);
}

modification::~modification()
{
    delete ui;
}

void modification::on_modpB_clicked()
{

QString ref=ui->refLE->text();
QSqlTableModel *model =prod.modProd(ref);

QString refRech = model->data(model->index(0,0)).toString();
if(ref == refRech)
{
    ui->modView->show();
    ui->modView->setModel(model);
    ui->modView->setColumnHidden(4, true);
}
 else
{
    ui->modView->hide();
    QMessageBox::critical(0, qApp->tr("Modificaion"),
        qApp->tr("Produit non trouvé"), QMessageBox::Ok);

}

}

void modification::on_pushButton_clicked()
{
    this->close();
}

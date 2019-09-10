#ifndef AJOUT_FACTURE_H
#define AJOUT_FACTURE_H
#include"factures.h"

#include <QDialog>

namespace Ui {
class ajout_facture;
}

class ajout_facture : public QDialog
{
    Q_OBJECT
    
public:
    explicit ajout_facture(QWidget *parent = 0);
    ~ajout_facture();
    
private slots:
    void on_ajouter_facture_clicked();

    void on_ajouter_facture_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ajout_facture *ui;
    factures f;
};

#endif // AJOUT_FACTURE_H

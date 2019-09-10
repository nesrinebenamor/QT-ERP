#ifndef LIGNECOMMANDEFOUR_H
#define LIGNECOMMANDEFOUR_H

#include <QDialog>
#include"class_lignecommandefou.h"
#include "commande_four.h"

namespace Ui {
class LigneCommandeFour;
}

class LigneCommandeFour : public QDialog
{
    Q_OBJECT
    
public:
    explicit LigneCommandeFour(QWidget *parent = 0);
    ~LigneCommandeFour();
    
private slots:
    void on_AjoutPB_clicked();

    void on_RetPB_clicked();

private:
    Ui::LigneCommandeFour *ui;
    commande_four cmd;
    produit pr;
};

#endif // LIGNECOMMANDEFOUR_H

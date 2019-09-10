#ifndef INTERFACE_FOURNISSEUR_H
#define INTERFACE_FOURNISSEUR_H

#include <QDialog>
#include"class_four.h"

namespace Ui {
class interface_fournisseur;
}

class interface_fournisseur : public QDialog
{
    Q_OBJECT
    
public:
    explicit interface_fournisseur(QWidget *parent = 0);
    ~interface_fournisseur();
    
private slots:
    void on_RetPB_clicked();

    void on_AjoutPB_clicked();

private:
    Ui::interface_fournisseur *ui;
};

#endif // INTERFACE_FOURNISSEUR_H

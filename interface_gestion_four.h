#ifndef INTERFACE_GESTION_FOUR_H
#define INTERFACE_GESTION_FOUR_H

#include <QDialog>
#include"interface_fournisseur.h"
#include"interface_affich_four.h"

namespace Ui {
class interface_gestion_four;
}

class interface_gestion_four : public QDialog
{
    Q_OBJECT
    
public:
    explicit interface_gestion_four(QWidget *parent = 0);
    ~interface_gestion_four();
    
private slots:
    void on_AjoutLB_clicked();

    void on_AffichLB_clicked();

    void on_retourPB_clicked();

private:
    Ui::interface_gestion_four *ui;
};

#endif // INTERFACE_GESTION_FOUR_H

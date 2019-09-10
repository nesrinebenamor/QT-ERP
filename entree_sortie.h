#ifndef ENTREE_SORTIE_H
#define ENTREE_SORTIE_H

#include <QDialog>
#include"lignecommandefour.h"

namespace Ui {
class Entree_Sortie;
}

class Entree_Sortie : public QDialog
{
    Q_OBJECT
    
public:
    explicit Entree_Sortie(QWidget *parent = 0);
    ~Entree_Sortie();
    
private slots:
    void on_PassComLB_clicked();

    void on_ProdIndLB_clicked();

    void on_commandLinkButton_clicked();

    void on_retourPB_clicked();

private:
    Ui::Entree_Sortie *ui;
};

#endif // ENTREE_SORTIE_H

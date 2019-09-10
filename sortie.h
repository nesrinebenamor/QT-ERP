#ifndef SORTIE_H
#define SORTIE_H

#include <QDialog>
#include"produit.h"
namespace Ui {
class sortie;
}

class sortie : public QDialog
{
    Q_OBJECT
    
public:
    explicit sortie(QWidget *parent = 0);
    ~sortie();
    
private slots:
    void on_AnnpB_clicked();

    void on_ConpB_clicked();

private:
    Ui::sortie *ui;
    produit pro;
};

#endif // SORTIE_H

#ifndef AJOUT_SUPP_H
#define AJOUT_SUPP_H

#include <QDialog>
#include"factures.h"

namespace Ui {
class ajout_supp;
}

class ajout_supp : public QDialog
{
    Q_OBJECT
    
public:
    explicit ajout_supp(QWidget *parent = 0);
    ~ajout_supp();
    
private slots:
    void on_pushButton_clicked();

    void on_suppr_clicked();

    void on_suppr_2_clicked();

    void on_suppr_3_clicked();

private:
    Ui::ajout_supp *ui;
    factures f;
};

#endif // AJOUT_SUPP_H

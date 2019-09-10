#ifndef SUPPRIMER_PERS_H
#define SUPPRIMER_PERS_H

#include <QDialog>
#include"employes.h"

namespace Ui {
class supprimer_pers;
}

class supprimer_pers : public QDialog
{
    Q_OBJECT
    
public:
    explicit supprimer_pers(QWidget *parent = 0);
    ~supprimer_pers();
    
private slots:
    void on_SUPPRIME_clicked();

    void on_retour_clicked();

private:
    Ui::supprimer_pers *ui;
    employes tmm;
};

#endif // SUPPRIMER_PERS_H

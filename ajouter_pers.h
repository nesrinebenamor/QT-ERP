#ifndef AJOUTER_PERS_H
#define AJOUTER_PERS_H

#include <QDialog>
#include"employes.h"


namespace Ui {
class ajouter_pers;
}

class ajouter_pers : public QDialog
{
    Q_OBJECT
    
public:
    explicit ajouter_pers(QWidget *parent = 0);
    ~ajouter_pers();
    
private slots:
    void on_OKa_clicked();

    void on_retourRP_clicked();

private:
    Ui::ajouter_pers *ui;
};

#endif // AJOUTER_PERS_H

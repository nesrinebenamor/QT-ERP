#ifndef CONSULTER_LISTE_EMPLOYEE_H
#define CONSULTER_LISTE_EMPLOYEE_H

#include <QDialog>
#include"employes.h"
namespace Ui {
class consulter_liste_employee;
}

class consulter_liste_employee : public QDialog
{
    Q_OBJECT
    
public:
    explicit consulter_liste_employee(QWidget *parent = 0);
    ~consulter_liste_employee();
    
private slots:
    void on_quitter_clicked();

private:
    Ui::consulter_liste_employee *ui;
    employes tmm;
};

#endif // CONSULTER_LISTE_EMPLOYEE_H

#ifndef MENU_GRH_H
#define MENU_GRH_H

#include <QDialog>
#include"menuforma.h"
#include"menu_absence.h"

namespace Ui {
class Menu_GRH;
}

class Menu_GRH : public QDialog
{
    Q_OBJECT
    
public:
    explicit Menu_GRH(QWidget *parent = 0);
    ~Menu_GRH();
    
private slots:
    void on_gestion_forma_clicked();

    void on_gestion_absence_clicked();

    void on_pushButton_clicked();

    void on_GEM_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Menu_GRH *ui;
};

#endif // MENU_GRH_H

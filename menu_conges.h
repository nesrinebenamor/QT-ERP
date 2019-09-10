#ifndef MENU_CONGES_H
#define MENU_CONGES_H

#include <QDialog>

namespace Ui {
class menu_conges;
}

class menu_conges : public QDialog
{
    Q_OBJECT
    
public:
    explicit menu_conges(QWidget *parent = 0);
    ~menu_conges();
    
private slots:
    void on_ajouterPB_clicked();

    void on_consulterPB_clicked();

    void on_pushButton_clicked();

private:
    Ui::menu_conges *ui;
};

#endif // MENU_CONGES_H

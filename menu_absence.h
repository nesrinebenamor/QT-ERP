#ifndef MENU_ABSENCE_H
#define MENU_ABSENCE_H

#include <QDialog>

namespace Ui {
class menu_absence;
}

class menu_absence : public QDialog
{
    Q_OBJECT
    
public:
    explicit menu_absence(QWidget *parent = 0);
    ~menu_absence();
    
private slots:
    void on_ajouterPBA_clicked();

    void on_retourPB_clicked();

    void on_consulterPBA_clicked();

    void on_supprimerPBA_clicked();

    void on_modifierPBA_clicked();

private:
    Ui::menu_absence *ui;
};

#endif // MENU_ABSENCE_H

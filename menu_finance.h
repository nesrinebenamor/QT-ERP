#ifndef MENU_FINANCE_H
#define MENU_FINANCE_H

#include <QDialog>

namespace Ui {
class menu_finance;
}

class menu_finance : public QDialog
{
    Q_OBJECT
    
public:
    explicit menu_finance(QWidget *parent = 0);
    ~menu_finance();
    
private slots:
    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::menu_finance *ui;
};

#endif // MENU_FINANCE_H

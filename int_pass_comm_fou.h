#ifndef INT_PASS_COMM_FOU_H
#define INT_PASS_COMM_FOU_H

#include <QDialog>

namespace Ui {
class int_pass_comm_fou;
}

class int_pass_comm_fou : public QDialog
{
    Q_OBJECT
    
public:
    explicit int_pass_comm_fou(QWidget *parent = 0);
    ~int_pass_comm_fou();
    
private slots:
    void on_AjComLB_clicked();

    void on_LigcomLB_clicked();

    void on_retourPB_clicked();

private:
    Ui::int_pass_comm_fou *ui;
};

#endif // INT_PASS_COMM_FOU_H

#ifndef GES_EMP_H
#define GES_EMP_H
#include <QDialog>
#include"employes.h"
namespace Ui {
class ges_emp;
}

class ges_emp : public QDialog
{
    Q_OBJECT
    
public:
    explicit ges_emp(QWidget *parent = 0);
    ~ges_emp();
    
private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::ges_emp *ui;
    employes e;
};

#endif // GES_EMP_H

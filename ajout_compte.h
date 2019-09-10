#ifndef AJOUT_COMPTE_H
#define AJOUT_COMPTE_H

#include <QDialog>

namespace Ui {
class ajout_compte;
}

class ajout_compte : public QDialog
{
    Q_OBJECT
    
public:
    explicit ajout_compte(QWidget *parent = 0);
    ~ajout_compte();
    
private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::ajout_compte *ui;
};

#endif // AJOUT_COMPTE_H

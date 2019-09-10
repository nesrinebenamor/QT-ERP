#ifndef RECH_SUPP_CMT_H
#define RECH_SUPP_CMT_H

#include <QDialog>
#include"comptes.h"
namespace Ui {
class rech_supp_cmt;
}

class rech_supp_cmt : public QDialog
{
    Q_OBJECT
    
public:
    explicit rech_supp_cmt(QWidget *parent = 0);
    ~rech_supp_cmt();
    
private slots:
    void on_suppr_clicked();

    void on_pushButton_clicked();

    void on_suppr_2_clicked();

    void on_suppr_3_clicked();

private:
    Ui::rech_supp_cmt *ui;
    comptes c ;
};

#endif // RECH_SUPP_CMT_H

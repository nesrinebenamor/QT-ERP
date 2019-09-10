#ifndef CONSULTER_CONG_H
#define CONSULTER_CONG_H

#include <QDialog>
#include"claaseconge.h"

namespace Ui {
class consulter_cong;
}

class consulter_cong : public QDialog
{
    Q_OBJECT
    
public:
    explicit consulter_cong(QWidget *parent = 0);
    ~consulter_cong();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::consulter_cong *ui;
    claaseconge cong;
};

#endif // CONSULTER_CONG_H

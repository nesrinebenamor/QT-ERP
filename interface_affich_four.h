#ifndef INTERFACE_AFFICH_FOUR_H
#define INTERFACE_AFFICH_FOUR_H

#include <QDialog>
#include"class_four.h"

namespace Ui {
class interface_Affich_Four;
}

class interface_Affich_Four : public QDialog
{
    Q_OBJECT
    
public:
    explicit interface_Affich_Four(QWidget *parent = 0);
    ~interface_Affich_Four();
    
private slots:
    void on_retPB_clicked();

private:
    Ui::interface_Affich_Four *ui;
    class_four f;
};

#endif // INTERFACE_AFFICH_FOUR_H

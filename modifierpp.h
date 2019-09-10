#ifndef MODIFIERPP_H
#define MODIFIERPP_H

#include <QDialog>

namespace Ui {
class modifierPP;
}

class modifierPP : public QDialog
{
    Q_OBJECT
    
public:
    explicit modifierPP(QWidget *parent = 0);
    ~modifierPP();
    
private slots:
    void on_modifierPB_clicked();

    void on_OKPB_clicked();

    void on_retourPB_clicked();

private:
    Ui::modifierPP *ui;
};

#endif // MODIFIERPP_H

#ifndef MODIFERORDRE_H
#define MODIFERORDRE_H

#include <QDialog>

namespace Ui {
class modiferOrdre;
}

class modiferOrdre : public QDialog
{
    Q_OBJECT
    
public:
    explicit modiferOrdre(QWidget *parent = 0);
    ~modiferOrdre();
    
private slots:
    void on_modifierPB_clicked();

    void on_okPB_clicked();

    void on_retourPB_clicked();

private:
    Ui::modiferOrdre *ui;
};

#endif // MODIFERORDRE_H

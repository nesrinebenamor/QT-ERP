#ifndef PANNE_H
#define PANNE_H

#include <QWidget>

namespace Ui {
class panne;
}

class panne : public QWidget
{
    Q_OBJECT
    
public:
    explicit panne(QWidget *parent = 0);
    ~panne();
    
private slots:
    void on_ajouter_clicked();


    void on_retourPB_clicked();

private:
    Ui::panne *ui;
};

#endif // PANNE_H

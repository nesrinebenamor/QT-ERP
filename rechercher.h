#ifndef RECHERCHER_H
#define RECHERCHER_H
#include"employes.h"
#include <QWidget>

namespace Ui {
class rechercher;
}

class rechercher : public QWidget
{
    Q_OBJECT
    
public:
    explicit rechercher(QWidget *parent = 0);
    ~rechercher();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::rechercher *ui;
    employes e;
};

#endif // RECHERCHER_H

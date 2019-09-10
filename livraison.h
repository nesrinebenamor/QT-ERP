#ifndef LIVRAISON_H
#define LIVRAISON_H

#include <QDialog>

namespace Ui {
class Livraison;
}

class Livraison : public QDialog
{
    Q_OBJECT
    
public:
    explicit Livraison(QWidget *parent = 0);
    ~Livraison();
    
private slots:
    void on_EntreeLB_clicked();

    void on_SoriteLB_clicked();

    void on_retourPB_clicked();

private:
    Ui::Livraison *ui;
};

#endif // LIVRAISON_H

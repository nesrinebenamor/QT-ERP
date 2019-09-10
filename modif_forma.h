#ifndef MODIF_FORMA_H
#define MODIF_FORMA_H

#include <QDialog>
#include "formation.h"
namespace Ui {
class modif_forma;
}

class modif_forma : public QDialog
{
    Q_OBJECT
    
public:
    explicit modif_forma(QWidget *parent = 0);
    ~modif_forma();
private slots:
    void on_modifierPB_clicked();
    


    void on_OKPB_clicked();

    void on_pushButton_clicked();

private:
    Ui::modif_forma *ui;
  //formation forma;
};

#endif // MODIF_FORMA_H

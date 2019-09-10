#ifndef MENUFORMA_H
#define MENUFORMA_H

#include <QDialog>

namespace Ui {
class menuforma;
}

class menuforma : public QDialog
{
    Q_OBJECT
    
public:
    explicit menuforma(QWidget *parent = 0);
    ~menuforma();
    
private slots:


   void on_ajouterPB_clicked();
   void on_consulterPB_clicked();
   void on_supprimerPB_clicked();

   void on_modifierPB_clicked();

   void on_retourPB_clicked();

private:
    Ui::menuforma *ui;
};

#endif // MENUFORMA_H

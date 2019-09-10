#ifndef ORDRE_H
#define ORDRE_H

#include <QDialog>

namespace Ui {
class ordre;
}

class ordre : public QDialog
{
    Q_OBJECT
    
public:
    explicit ordre(QWidget *parent = 0);
    ~ordre();
    
private slots:
    void on_envoyeerPB_clicked();

    void on_retourPB_clicked();


private:
    Ui::ordre *ui;

};

#endif // ORDRE_H

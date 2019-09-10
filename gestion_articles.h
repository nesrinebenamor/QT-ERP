#ifndef GESTION_ARTICLES_H
#define GESTION_ARTICLES_H

#include <QDialog>

namespace Ui {
class gestion_articles;
}

class gestion_articles : public QDialog
{
    Q_OBJECT
    
public:
    explicit gestion_articles(QWidget *parent = 0);
    ~gestion_articles();
    
private slots:
    void on_AjoutLB_clicked();

    void on_SuppLB_clicked();

    void on_ModLB_clicked();

    void on_AfficherLB_clicked();

    void on_RechercheLB_clicked();

    void on_retourPB_clicked();

private:
    Ui::gestion_articles *ui;
};

#endif // GESTION_ARTICLES_H

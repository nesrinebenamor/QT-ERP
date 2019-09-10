#ifndef ARTICLE_H
#define ARTICLE_H

#include"produit.h"
#include <QDialog>
#include<QtSql>
#include<QtDebug>
#include<QFileInfo>
#include<QSqlRecord>

namespace Ui {
class article;
}

class article : public QDialog
{
    Q_OBJECT
    
public:
    explicit article(QWidget *parent = 0);
    ~article();
    
private slots:
    void on_OkpB_clicked();

    void on_fermerpB_clicked();

private:
    Ui::article *ui;

};

#endif // ARTICLE_H

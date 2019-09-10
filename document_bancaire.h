#ifndef DOCUMENT_BANCAIRE_H
#define DOCUMENT_BANCAIRE_H
#include"factures.h"
#include <QDialog>
#include"connection.h"
#include"QSqlQueryModel"
#include<QStandardItemModel>
#include<QtSql>
#include"QTableView"
#include"QDebug"
#include"comptes.h"


namespace Ui {
class document_bancaire;
}

class document_bancaire : public QDialog
{
    Q_OBJECT
    
public:
    explicit document_bancaire(QWidget *parent = 0);
    ~document_bancaire();
    
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::document_bancaire *ui;
    factures f;
    comptes c;
};

#endif // DOCUMENT_BANCAIRE_H

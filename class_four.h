#ifndef CLASS_FOUR_H
#define CLASS_FOUR_H
#include"Personnes.h"
#include <QtGui/QApplication>
#include"QString"
#include "connection.h"
#include "QSqlQueryModel"
#include <QtSql>

class class_four : public personne
{

private :
    QString cin_four ;
    QString fax;
public:
    class_four(){};
    class_four(QString nom, QString prenom,QString CIN, QString adresse,QString numTel, QString cin_four, QString fax);
    class_four(QString cin_four, QString fax);

    QString getCin_four(){return(cin_four);};
    QString getFax(){return(fax);};

    bool ajoutFour(class_four *four);
    int rechercher(QString cin);
    QSqlQueryModel * afficher();
};

#endif // CLASS_FOUR_H

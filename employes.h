#ifndef EMPLOYES_H
#define EMPLOYES_H
#include"QString"
#include "QDialog"
#include"connection.h"
#include <QStandardItemModel>
#include "Personnes.h"
#include<QSqlQueryModel>

class employes : public personne

{
private :
    QString id_employes;
    QString grade ;
    QString num_post ;
    QString date_am;
public:

    QString get_id_employes(){return id_employes;} ;
    QString get_grade(){return grade;} ;
    QString get_num_post(){return num_post;}  ;
    QString get_date_am() {return date_am;} ;

    bool ajoutEMP(employes *m);
    bool supprimeremployes(QString cn);
    QSqlQueryModel * afficheremployes();
    QSqlQueryModel * rechercheremployes(QString cn);
    QSqlQueryModel * rechercherCIN(QString CIN);

    employes();
    employes(QString id_employes, QString grade ,QString num_post ,QString date_am);
    employes(QString nom, QString prenom,QString CIN, QString adresse,QString num_tel,QString id_employes,  QString grade ,QString num_post ,QString date_am);
};


#endif // EMPLOYES_H

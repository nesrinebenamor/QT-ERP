#ifndef CLIENT_H
#define CLIENT_H
#include "QString"
#include <QSqlQueryModel>


class Client
{
private :
    QString cin_client;
public:
    Client(){};
    Client(QString cin_client);

    QString getCinClient(){return(cin_client);};

   bool ajoutClient(Client *cli);
   virtual QSqlQueryModel * afficherClient();
  QSqlQueryModel * rechercherClient (QString c);
  bool supprimerClient(QString c);
  int rechercher(QString cin);

};

#endif // CLIENT_H

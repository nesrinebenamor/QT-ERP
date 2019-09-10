#include <QtGui/QApplication>
#include "authentification.h"
#include"connection.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Authentification w;

    if (!createConnection())
        return -1;

       w.show();

    return a.exec();
}

#include <QCoreApplication>

#include "ajout.h"
#include "connection.h"
#include "login.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    connection c ;

    bool test = c.createconnect();
    if (test)
    {
        w.show()
                QMessageBox


    return a.exec();
}

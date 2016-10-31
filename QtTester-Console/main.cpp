#include <QCoreApplication>
#include "qtcontainer.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QtContainer().run();

    return a.exec();
}

#include "qtcontainer.h"

#include <iostream>

#include <QPair>
#include <QString>
#include <QMap>

using namespace std;

QtContainer::QtContainer()
{

}

void QtContainer::run() {
    //testPair();
    //testMap();
    testPairMap();
}

void QtContainer::testPair() {
    QPair<QString, QString> pair = qMakePair(QString("Vince"), QString("Zeng"));
    cout << "key is: " << pair.first.toStdString() << endl;
    cout << "value is: " + pair.second.toStdString() << endl;
}

void QtContainer::testMap() {
    QMap<QString, QString> map;
    map.insert(QString("Vince"), QString("Zeng"));
    map.insert(QString("Tim"), QString("Duncan"));

    QMap<QString, QString>::const_iterator it;
    for (it = map.constBegin(); it != map.constEnd(); ++it) {
        cout << it.key().toStdString() << " " <<
                it.value().toStdString() << endl;
    }
}

void QtContainer::testPairMap() {
    QMap<QString, QPair<QString, QString>> map;
    map.insert(QString("Vince"), qMakePair(QString("Zeng"), QString("1")));
    map.insert(QString("Tim"), qMakePair(QString("Duncan"), QString("2")));

    QMap<QString, QPair<QString, QString>>::const_iterator it = map.constBegin();
    for(; it != map.constEnd(); ++it) {
        cout << it.key().toStdString() << " " <<
                it.value().first.toStdString() << " " <<
                it.value().second.toStdString() << endl;
    }

    QMap<QString, QPair<QString, QString>>::iterator it2 = map.find(QString("Vince"));
    cout << it2.key().toStdString() << " " << it2.value().first.toStdString();
}



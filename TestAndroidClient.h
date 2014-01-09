#ifndef TESTANDROIDCLIENT_H
#define TESTANDROIDCLIENT_H

#include <QtAndroidExtras/QAndroidJniObject>
#include <QObject>

class TestAndroidClient: public QObject
{
    Q_OBJECT
public:
    explicit TestAndroidClient(QObject *parent = 0);
    Q_INVOKABLE void test(QString msg );

};


#endif // TESTANDROIDCLIENT_H

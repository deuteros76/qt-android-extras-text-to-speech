#include <QtGui/QGuiApplication>
#include <QtQuick>
#include "TestAndroidClient.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQuickView viewer;

    TestAndroidClient *testAndroidClient = new TestAndroidClient(&viewer);
    viewer.engine()->rootContext()->setContextProperty(QLatin1String("testAndroidClient"),
                                                     testAndroidClient);

    viewer.setSource(QUrl(QStringLiteral("qrc:/qml/testAndroidExtras/main.qml")));
    viewer.show();

    return app.exec();
}

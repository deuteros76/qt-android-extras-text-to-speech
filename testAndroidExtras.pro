# Add more folders to ship with the application, here
folder_01.source = qml/testAndroidExtras
folder_01.target = qml
DEPLOYMENTFOLDERS = folder_01

# Additional import path used to resolve QML modules in Creator's code model
QML_IMPORT_PATH =

QT += quick androidextras

ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android-sources

# The .cpp file which was generated for your project. Feel free to hack it.
SOURCES += main.cpp \
    TestAndroidClient.cpp

# Installation path
# target.path =

# Please do not modify the following two lines. Required for deployment.
include(qtquick2applicationviewer/qtquick2applicationviewer.pri)
qtcAddDeployment()

HEADERS += \
    TestAndroidClient.h

ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android-source

OTHER_FILES += \
    android-source/AndroidManifest.xml \
    android-source/src/org/qtproject/example/textandroidextras/TestAndroidClient.java

RESOURCES += \
    resources.qrc

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

DESTDIR = ./bin


INCLUDEPATH += ./headers \
        ./headers/math \
        ./headers/graphics \
        ./headers/widget \
        ./headers/scene


SOURCES += \
    src/graphics/graphic.cpp \
    src/math/castommath.cpp \
    src/main.cpp \
    src/widget/mainwindow.cpp \
    src/scene/object.cpp

HEADERS += \
    headers/math/castommath.h \
    headers/widget/mainwindow.h \
    headers/scene/object.h \
    headers/graphics/graphic.h

FORMS += \
    forms/mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

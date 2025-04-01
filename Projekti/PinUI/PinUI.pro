QT += widgets
CONFIG += c++17

SOURCES += main.cpp \
           mainwindow.cpp

HEADERS += mainwindow.h

FORMS += mainwindow.ui

INCLUDEPATH += C:/work/Projekti/PinDLL

LIBS += -LC:/work/Projekti/PinDLL -lPinDLL

DESTDIR = ./build

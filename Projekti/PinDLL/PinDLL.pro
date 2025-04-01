QT -= gui
TEMPLATE = lib
DEFINES += PINDLL_LIBRARY
CONFIG += c++17

SOURCES += pindll.cpp
HEADERS += pindll.h

win32 {
    DEFINES += BUILD_DLL
}

TARGET = PinDLL
DESTDIR = C:/work/Projekti/PinDLL

unix {
    target.path = /usr/lib
}
win32 {
    target.path = C:/work/Projekti/PinDLL
}
!isEmpty(target.path): INSTALLS += target

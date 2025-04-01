#ifndef PINDLL_H
#define PINDLL_H

#include <QtCore/qglobal.h> // Qt:n perusmäärittelyt
#include <QString>

#ifdef Q_OS_WIN
#ifdef BUILD_DLL
#define DLL_EXPORT Q_DECL_EXPORT
#else
#define DLL_EXPORT Q_DECL_IMPORT
#endif
#else
#define DLL_EXPORT
#endif

extern "C" {
DLL_EXPORT bool verifyPIN(const QString& cardNumber, const QString& pin);
}

#endif // PINDLL_H

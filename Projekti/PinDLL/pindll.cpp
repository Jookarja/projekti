#include "pindll.h"
#include <QDebug>

#define BUILD_DLL

bool verifyPIN(const QString& cardNumber, const QString& pin) {
    if (cardNumber == "1234" && pin == "5678") {
        return true;
    } else {
        return false;
    }
}

#include <iostream>
#include <QtWidgets/QApplication>
#include "TripCalculator.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    auto *trip_dialog = new TripCalculator();
    trip_dialog->setupUi();
    trip_dialog->show();
    return QApplication::exec();
}

//
// Created by zxerrinor on 24.03.2020.
//

#include <sstream>
#include "TripCalculator.h"

void TripCalculator::setupUi() {
    if (this->objectName().isEmpty())
        this->setObjectName(QString::fromUtf8("this"));
    this->resize(657, 358);
    trip = new QLineEdit(this);
    trip->setObjectName(QString::fromUtf8("trip"));
    trip->setGeometry(QRect(95, 23, 161, 32));
    consumption = new QLineEdit(this);
    consumption->setObjectName(QString::fromUtf8("consumption"));
    consumption->setGeometry(QRect(95, 78, 161, 32));
    fuelPrice = new QLineEdit(this);
    fuelPrice->setObjectName(QString::fromUtf8("fuelPrice"));
    fuelPrice->setGeometry(QRect(95, 133, 161, 32));
    numberOfTrips = new QLineEdit(this);
    numberOfTrips->setObjectName(QString::fromUtf8("numberOfTrips"));
    numberOfTrips->setGeometry(QRect(481, 188, 161, 32));
    result = new QLineEdit(this);
    result->setObjectName(QString::fromUtf8("result"));
    result->setGeometry(QRect(95, 243, 161, 32));
    calculateButton = new QPushButton(this);
    calculateButton->setObjectName(QString::fromUtf8("calculateButton"));
    calculateButton->setGeometry(QRect(390, 300, 88, 34));
    exitButton = new QPushButton(this);
    exitButton->setObjectName(QString::fromUtf8("exitButton"));
    exitButton->setGeometry(QRect(530, 300, 88, 34));
    label = new QLabel(this);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(10, 30, 73, 18));
    label_2 = new QLabel(this);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(10, 85, 44, 18));
    label_3 = new QLabel(this);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setGeometry(QRect(10, 139, 83, 18));
    label_4 = new QLabel(this);
    label_4->setObjectName(QString::fromUtf8("label_4"));
    label_4->setGeometry(QRect(261, 30, 17, 18));
    label_5 = new QLabel(this);
    label_5->setObjectName(QString::fromUtf8("label_5"));
    label_5->setGeometry(QRect(261, 85, 55, 18));
    label_6 = new QLabel(this);
    label_6->setObjectName(QString::fromUtf8("label_6"));
    label_6->setGeometry(QRect(261, 139, 26, 18));
    label_7 = new QLabel(this);
    label_7->setObjectName(QString::fromUtf8("label_7"));
    label_7->setGeometry(QRect(10, 250, 63, 18));
    label_8 = new QLabel(this);
    label_8->setObjectName(QString::fromUtf8("label_8"));
    label_8->setGeometry(QRect(260, 250, 26, 18));
    label_9 = new QLabel(this);
    label_9->setObjectName(QString::fromUtf8("label_9"));
    label_9->setGeometry(QRect(370, 195, 99, 18));
    label_10 = new QLabel(this);
    label_10->setObjectName(QString::fromUtf8("label_10"));
    label_10->setGeometry(QRect(163, 0, 331, 20));
    label_10->setAlignment(Qt::AlignCenter);
    QWidget::setTabOrder(trip, consumption);
    QWidget::setTabOrder(consumption, fuelPrice);
    QWidget::setTabOrder(fuelPrice, numberOfTrips);
    QWidget::setTabOrder(numberOfTrips, calculateButton);
    QWidget::setTabOrder(calculateButton, result);

    QObject::connect(exitButton, SIGNAL(clicked()), this, SLOT(quit()));
    QObject::connect(calculateButton, SIGNAL(clicked()), this, SLOT(calculate()));

    this->setWindowTitle(QCoreApplication::translate("this", "_", nullptr));
    exitButton->setText(QCoreApplication::translate("this", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    label->setText(QCoreApplication::translate("this",
                                               "\320\240\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\320\265",
                                               nullptr));
    label_2->setText(QCoreApplication::translate("this", "\320\240\320\260\321\201\321\205\320\276\320\264", nullptr));
    label_3->setText(QCoreApplication::translate("this",
                                                 "\320\246\320\265\320\275\320\260 \320\267\320\260 \320\273\320\270\321\202\321\200",
                                                 nullptr));
    label_4->setText(QCoreApplication::translate("this", "\320\272\320\274", nullptr));
    label_5->setText(QCoreApplication::translate("this", "\320\273/100 \320\272\320\274", nullptr));
    label_6->setText(QCoreApplication::translate("this", "\321\200\321\203\320\261.", nullptr));
    label_7->setText(QCoreApplication::translate("this",
                                                 "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202",
                                                 nullptr));
    label_8->setText(QCoreApplication::translate("this", "\321\200\321\203\320\261.", nullptr));
    label_9->setText(QCoreApplication::translate("this",
                                                 "\320\232\320\276\320\273-\320\262\320\276 \320\277\320\276\320\265\320\267\320\264\320\276\320\272",
                                                 nullptr));
    calculateButton->setText(QCoreApplication::translate("this",
                                                         "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214",
                                                         nullptr));
    label_10->setText(QCoreApplication::translate("this",
                                                  "\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \321\200\320\260\321\201\321\207\321\221\321\202\320\260 \321\206\320\265\320\275\321\213 \320\277\320\276\320\265\320\267\320\264\320\272\320\270 \320\275\320\260 \320\260\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\320\265",
                                                  nullptr));

    QMetaObject::connectSlotsByName(this);
}

bool isFloat(std::string in) {
    bool inputIsNumber = true;
    char dots = 0;
    for (char i : in) {
        inputIsNumber = inputIsNumber && (isdigit(i) || (i == ','));
        if (i == ',') dots++;
    }
    return inputIsNumber && (dots <= 1) && (in.length() > 0);
}

bool isInt(std::string in) {
    bool inputIsNumber = true;
    for (char i : in) {
        inputIsNumber = inputIsNumber && isdigit(i);
    }
    return inputIsNumber && (in.length() > 0);
}

void TripCalculator::calculate() {
    auto rawInputTrip = trip->text().toStdString();
    auto rawInputConsumption = consumption->text().toStdString();
    auto rawInputFuelPrice = fuelPrice->text().toStdString();
    auto rawInputNumberOfTrips = numberOfTrips->text().toStdString();
    float inputTrip = 0;
    float inputConsumption = 0;
    float inputFuelPrice = 0;
    int inputNumberOfTrips = 0;
    bool invalidInput = false;
    if (isFloat(rawInputTrip)) inputTrip = std::stof(rawInputTrip); else invalidInput = true;
    if (isFloat(rawInputConsumption)) inputConsumption = std::stof(rawInputConsumption); else invalidInput = true;
    if (isFloat(rawInputFuelPrice)) inputFuelPrice = std::stof(rawInputFuelPrice); else invalidInput = true;
    if (isInt(rawInputNumberOfTrips)) inputNumberOfTrips = std::stoi(rawInputNumberOfTrips); else invalidInput = true;
    std::string output;
    if (invalidInput) {
        output = "Некорректный ввод";
    } else {
        std::ostringstream stringStream;
        stringStream << inputTrip / 100 * inputConsumption * inputFuelPrice * inputNumberOfTrips;
        output = stringStream.str();
    }
    result->setText(QString::fromUtf8(output.c_str()));
}

void TripCalculator::quit() {
    this->close();
}
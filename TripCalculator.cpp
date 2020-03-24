//
// Created by zxerrinor on 24.03.2020.
//

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
    result = new QLineEdit(this);
    result->setObjectName(QString::fromUtf8("result"));
    result->setGeometry(QRect(95, 243, 161, 32));
    numberOfTrips = new QLineEdit(this);
    numberOfTrips->setObjectName(QString::fromUtf8("numberOfTrips"));
    numberOfTrips->setGeometry(QRect(481, 188, 161, 32));
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
    calculateButton = new QPushButton(this);
    calculateButton->setObjectName(QString::fromUtf8("calculateButton"));
    calculateButton->setGeometry(QRect(390, 300, 88, 34));
    label_10 = new QLabel(this);
    label_10->setObjectName(QString::fromUtf8("label_10"));
    label_10->setGeometry(QRect(322, 23, 58, 18));
    QWidget::setTabOrder(trip, result);
    QWidget::setTabOrder(result, consumption);
    QWidget::setTabOrder(consumption, exitButton);
    QWidget::setTabOrder(exitButton, fuelPrice);
    QWidget::setTabOrder(fuelPrice, numberOfTrips);

    QObject::connect(exitButton, SIGNAL(clicked()), this, SLOT(quit()));
    QObject::connect(calculateButton, SIGNAL(clicked()), this, SLOT(calculate()));

    this->setWindowTitle(QCoreApplication::translate("this", "this", nullptr));
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
    label_10->setText(QCoreApplication::translate("this", "TextLabel", nullptr));

    QMetaObject::connectSlotsByName(this);
}

void TripCalculator::calculate() {

}

void TripCalculator::quit() {

}
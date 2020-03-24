//
// Created by zxerrinor on 24.03.2020.
//

#include <QtWidgets/QWidget>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QLineEdit>
#include <QtCore/QCoreApplication>

class TripCalculator : public QWidget {
Q_OBJECT

public:
    QLineEdit *trip{};
    QLineEdit *consumption{};
    QLineEdit *fuelPrice{};
    QLineEdit *result{};
    QLineEdit *numberOfTrips{};
    QPushButton *exitButton{};
    QLabel *label{};
    QLabel *label_2{};
    QLabel *label_3{};
    QLabel *label_4{};
    QLabel *label_5{};
    QLabel *label_6{};
    QLabel *label_7{};
    QLabel *label_8{};
    QLabel *label_9{};
    QPushButton *calculateButton{};
    QLabel *label_10{};

    void setupUi();

private slots:

    void calculate();

    void quit();
};
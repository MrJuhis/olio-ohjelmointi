/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calculator
{
public:
    QWidget *centralwidget;
    QPushButton *N1;
    QPushButton *N2;
    QPushButton *N3;
    QPushButton *N5;
    QPushButton *N6;
    QPushButton *N4;
    QPushButton *N7;
    QPushButton *N9;
    QPushButton *N8;
    QPushButton *N0;
    QPushButton *enterButton;
    QPushButton *clearButton;
    QPushButton *minusButton;
    QPushButton *sumButton;
    QPushButton *multiButton;
    QPushButton *divideButton;
    QLineEdit *lineEdit1;
    QLineEdit *lineEdit2;
    QLineEdit *lineEditResult;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QMenu *menuCalculator;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *calculator)
    {
        if (calculator->objectName().isEmpty())
            calculator->setObjectName("calculator");
        calculator->resize(414, 285);
        centralwidget = new QWidget(calculator);
        centralwidget->setObjectName("centralwidget");
        N1 = new QPushButton(centralwidget);
        N1->setObjectName("N1");
        N1->setGeometry(QRect(20, 70, 80, 24));
        N2 = new QPushButton(centralwidget);
        N2->setObjectName("N2");
        N2->setGeometry(QRect(110, 70, 80, 24));
        N3 = new QPushButton(centralwidget);
        N3->setObjectName("N3");
        N3->setGeometry(QRect(200, 70, 80, 24));
        N5 = new QPushButton(centralwidget);
        N5->setObjectName("N5");
        N5->setGeometry(QRect(110, 110, 80, 24));
        N6 = new QPushButton(centralwidget);
        N6->setObjectName("N6");
        N6->setGeometry(QRect(200, 110, 80, 24));
        N4 = new QPushButton(centralwidget);
        N4->setObjectName("N4");
        N4->setGeometry(QRect(20, 110, 80, 24));
        N7 = new QPushButton(centralwidget);
        N7->setObjectName("N7");
        N7->setGeometry(QRect(20, 150, 80, 24));
        N9 = new QPushButton(centralwidget);
        N9->setObjectName("N9");
        N9->setGeometry(QRect(200, 150, 80, 24));
        N8 = new QPushButton(centralwidget);
        N8->setObjectName("N8");
        N8->setGeometry(QRect(110, 150, 80, 24));
        N0 = new QPushButton(centralwidget);
        N0->setObjectName("N0");
        N0->setGeometry(QRect(20, 190, 80, 24));
        enterButton = new QPushButton(centralwidget);
        enterButton->setObjectName("enterButton");
        enterButton->setGeometry(QRect(200, 190, 80, 24));
        clearButton = new QPushButton(centralwidget);
        clearButton->setObjectName("clearButton");
        clearButton->setGeometry(QRect(110, 190, 80, 24));
        minusButton = new QPushButton(centralwidget);
        minusButton->setObjectName("minusButton");
        minusButton->setGeometry(QRect(310, 110, 80, 24));
        sumButton = new QPushButton(centralwidget);
        sumButton->setObjectName("sumButton");
        sumButton->setGeometry(QRect(310, 70, 80, 24));
        multiButton = new QPushButton(centralwidget);
        multiButton->setObjectName("multiButton");
        multiButton->setGeometry(QRect(310, 150, 80, 24));
        divideButton = new QPushButton(centralwidget);
        divideButton->setObjectName("divideButton");
        divideButton->setGeometry(QRect(310, 190, 80, 24));
        lineEdit1 = new QLineEdit(centralwidget);
        lineEdit1->setObjectName("lineEdit1");
        lineEdit1->setGeometry(QRect(20, 30, 113, 24));
        lineEdit2 = new QLineEdit(centralwidget);
        lineEdit2->setObjectName("lineEdit2");
        lineEdit2->setGeometry(QRect(150, 30, 113, 24));
        lineEditResult = new QLineEdit(centralwidget);
        lineEditResult->setObjectName("lineEditResult");
        lineEditResult->setGeometry(QRect(280, 30, 113, 24));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 61, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(150, 10, 61, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(280, 10, 61, 16));
        calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(calculator);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 414, 21));
        menuCalculator = new QMenu(menubar);
        menuCalculator->setObjectName("menuCalculator");
        calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(calculator);
        statusbar->setObjectName("statusbar");
        calculator->setStatusBar(statusbar);

        menubar->addAction(menuCalculator->menuAction());

        retranslateUi(calculator);

        QMetaObject::connectSlotsByName(calculator);
    } // setupUi

    void retranslateUi(QMainWindow *calculator)
    {
        calculator->setWindowTitle(QCoreApplication::translate("calculator", "calculator", nullptr));
        N1->setText(QCoreApplication::translate("calculator", "1", nullptr));
        N2->setText(QCoreApplication::translate("calculator", "2", nullptr));
        N3->setText(QCoreApplication::translate("calculator", "3", nullptr));
        N5->setText(QCoreApplication::translate("calculator", "5", nullptr));
        N6->setText(QCoreApplication::translate("calculator", "6", nullptr));
        N4->setText(QCoreApplication::translate("calculator", "4", nullptr));
        N7->setText(QCoreApplication::translate("calculator", "7", nullptr));
        N9->setText(QCoreApplication::translate("calculator", "9", nullptr));
        N8->setText(QCoreApplication::translate("calculator", "8", nullptr));
        N0->setText(QCoreApplication::translate("calculator", "0", nullptr));
        enterButton->setText(QCoreApplication::translate("calculator", "enter", nullptr));
        clearButton->setText(QCoreApplication::translate("calculator", "clear", nullptr));
        minusButton->setText(QCoreApplication::translate("calculator", "-", nullptr));
        sumButton->setText(QCoreApplication::translate("calculator", "+", nullptr));
        multiButton->setText(QCoreApplication::translate("calculator", "*", nullptr));
        divideButton->setText(QCoreApplication::translate("calculator", "/", nullptr));
        label->setText(QCoreApplication::translate("calculator", "Number 1", nullptr));
        label_2->setText(QCoreApplication::translate("calculator", "Number 2", nullptr));
        label_3->setText(QCoreApplication::translate("calculator", "Result", nullptr));
        menuCalculator->setTitle(QCoreApplication::translate("calculator", "Calculator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calculator: public Ui_calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H

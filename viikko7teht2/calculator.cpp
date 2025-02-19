#include "calculator.h"
#include "./ui_calculator.h"

calculator::calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::calculator)
{
    ui->setupUi(this);

    connect(ui->N0, &QPushButton::released, this, &calculator::numberClickedHandler);
    connect(ui->N1, &QPushButton::released, this, &calculator::numberClickedHandler);
    connect(ui->N2, &QPushButton::released, this, &calculator::numberClickedHandler);
    connect(ui->N3, &QPushButton::released, this, &calculator::numberClickedHandler);
    connect(ui->N4, &QPushButton::released, this, &calculator::numberClickedHandler);
    connect(ui->N5, &QPushButton::released, this, &calculator::numberClickedHandler);
    connect(ui->N6, &QPushButton::released, this, &calculator::numberClickedHandler);
    connect(ui->N7, &QPushButton::released, this, &calculator::numberClickedHandler);
    connect(ui->N8, &QPushButton::released, this, &calculator::numberClickedHandler);
    connect(ui->N9, &QPushButton::released, this, &calculator::numberClickedHandler);

    connect(ui->sumButton, &QPushButton::released, this, &calculator::addSubMulDivClickHandler);
    connect(ui->minusButton, &QPushButton::released, this, &calculator::addSubMulDivClickHandler);
    connect(ui->multiButton, &QPushButton::released, this, &calculator::addSubMulDivClickHandler);
    connect(ui->divideButton, &QPushButton::released, this, &calculator::addSubMulDivClickHandler);

    connect(ui->clearButton, &QPushButton::released, this, &calculator::clearAndEnterClickHandler);
    connect(ui->enterButton, &QPushButton::released, this, &calculator::clearAndEnterClickHandler);
}

calculator::~calculator()
{
    delete ui;
}

void calculator::numberClickedHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (!button) return;

    if (state == 1) {
        number1 += button->text();
        ui->lineEdit1->setText(number1);
    } else if (state == 2) {
        number2 += button->text();
        ui->lineEdit2->setText(number2);
    }
}

void calculator::addSubMulDivClickHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (!button) return;

    if (button == ui->sumButton) operand = 0;
    else if (button == ui->minusButton) operand = 1;
    else if (button == ui->multiButton) operand = 2;
    else if (button == ui->divideButton) operand = 3;

    state = 2;
}

void calculator::clearAndEnterClickHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (!button) return;

    if (button == ui->clearButton) {
        state = 1;
        number1 = "";
        number2 = "";
        ui->lineEdit1->clear();
        ui->lineEdit2->clear();
        ui->lineEditResult->clear();
    } else if (button == ui->enterButton) {
        float num1 = number1.toFloat();
        float num2 = number2.toFloat();
        float result = 0;

        switch (operand) {
        case 0: result = num1 + num2; break;
        case 1: result = num1 - num2; break;
        case 2: result = num1 * num2; break;
        case 3: result = num2 != 0 ? num1 / num2 : 0; break;
        }

        ui->lineEditResult->setText(QString::number(result));
    }
}

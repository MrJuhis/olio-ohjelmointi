#include "calculator.h"
#include "./ui_calculator.h"

calculator::calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::calculator)
    , count(0)
{
    ui->setupUi(this);
    connect(ui->CountButton, &QPushButton::released, this, &calculator::onCountPressed);
    connect(ui->ResetButton, &QPushButton::released, this, &calculator::onResetPressed);
}

calculator::~calculator()
{
    delete ui;
}

void calculator::onCountPressed(){
    count++;
    ui->lineEdit->setText(QString::number(count));
}

void calculator::onResetPressed(){
    count = 0;
    ui->lineEdit->setText(QString::number(count));
}

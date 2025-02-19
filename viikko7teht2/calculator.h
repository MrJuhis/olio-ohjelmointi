#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class calculator; }
QT_END_NAMESPACE

class calculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit calculator(QWidget *parent = nullptr);
    ~calculator();

private slots:
    void numberClickedHandler();
    void addSubMulDivClickHandler();
    void clearAndEnterClickHandler();

private:
    Ui::calculator *ui;
    QString number1, number2;
    int state = 1;
    short operand;
};

#endif // CALCULATOR_H

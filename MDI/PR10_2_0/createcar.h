#ifndef CREATECAR_H
#define CREATECAR_H

#include <QDialog>
#include "Car.h"

namespace Ui {
class CreateCar;
}

class CreateCar : public QDialog
{
    Q_OBJECT
signals: void created(Car* car);
public:
    explicit CreateCar(QWidget *parent = nullptr);
    ~CreateCar();

private slots:
    void on_pushButton_clicked();

private:
    Ui::CreateCar *ui;
};

#endif // CREATECAR_H

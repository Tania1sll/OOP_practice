#ifndef SHOWCAR_H
#define SHOWCAR_H

#include <QDialog>
#include "Car.h"

namespace Ui {
class ShowCar;
}

class ShowCar : public QDialog
{
    Q_OBJECT
public slots:
    void updateList(QList <Car*> cars);
public:
    explicit ShowCar(QWidget *parent = nullptr);
    ~ShowCar();

private slots:
    void on_BackCar_PB_clicked();

private:
    Ui::ShowCar *ui;
};

#endif // SHOWCAR_H

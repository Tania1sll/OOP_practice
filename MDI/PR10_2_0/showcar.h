#ifndef SHOWCAR_H
#define SHOWCAR_H

#include <QDialog>
#include "Car.h"
#include "sqlitedbmanager.h"

namespace Ui {
class ShowCar;
}

class ShowCar : public QDialog
{
    Q_OBJECT
public slots:
//    void updateList(QList <Car*> cars);
     void updateList (SQliteDBManager* sqliteDBManager);
public:
    explicit ShowCar(QWidget *parent = nullptr);
    ~ShowCar();

private slots:
    void on_BackCar_PB_clicked();

private:
    Ui::ShowCar *ui;
};

#endif // SHOWCAR_H

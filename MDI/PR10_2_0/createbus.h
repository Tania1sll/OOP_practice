#ifndef CREATEBUS_H
#define CREATEBUS_H

#include <QDialog>
#include <Bus.h>

namespace Ui {
class CreateBus;
}

class CreateBus : public QDialog
{
    Q_OBJECT
signals: void created(Bus* bus);
public:
    explicit CreateBus(QWidget *parent = nullptr);
    ~CreateBus();

private slots:
    void on_CreateBus_PB_clicked();

private:
    Ui::CreateBus *ui;
};

#endif // CREATEBUS_H

#ifndef CREATEWATER_H
#define CREATEWATER_H

#include <QDialog>

namespace Ui {
class CreateWater;
}

class CreateWater : public QDialog
{
    Q_OBJECT

public:
    explicit CreateWater(QWidget *parent = nullptr);
    ~CreateWater();

private:
    Ui::CreateWater *ui;
};

#endif // CREATEWATER_H

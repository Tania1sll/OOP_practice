#ifndef SHOWBUS_H
#define SHOWBUS_H

#include <QDialog>
#include <Bus.h>

#include "sqlitedbmanager.h"

namespace Ui {
class ShowBus;
}

class ShowBus : public QDialog
{
    Q_OBJECT
public slots:
//    void updateList(QList <Bus*> buses);
    void updateList (SQliteDBManager* sqliteDBManager);
public:
    explicit ShowBus(QWidget *parent = nullptr);
    ~ShowBus();

private slots:
    void on_Back_PB_clicked();

private:
    Ui::ShowBus *ui;
};

#endif // SHOWBUS_H

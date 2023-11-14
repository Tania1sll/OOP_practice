#ifndef BASE_H
#define BASE_H

#include <QDialog>

namespace Ui {
class Base;
}

class Base : public QDialog
{
    Q_OBJECT

public:
    explicit Base(QWidget *parent = nullptr);
    ~Base();

private:
    Ui::Base *ui;
};

#endif // BASE_H

#ifndef CREATECAVE_H
#define CREATECAVE_H

#include <QDialog>

namespace Ui {
class CreateCave;
}

class CreateCave : public QDialog
{
    Q_OBJECT

public:
    explicit CreateCave(QWidget *parent = nullptr);
    ~CreateCave();

private:
    Ui::CreateCave *ui;
};

#endif // CREATECAVE_H

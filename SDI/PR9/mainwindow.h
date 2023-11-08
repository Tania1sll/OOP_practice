#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <Car.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_actionCreate_triggered();

    void on_pushButton_add_clicked();

    void on_actionExit_triggered();

    void on_actionShow_triggered();

private:
    Ui::MainWindow *ui;
    Car* car;
};
#endif // MAINWINDOW_H

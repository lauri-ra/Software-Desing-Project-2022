#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "services/SmearService.h"
#include "repositories/SmearRepository.h"
#include <QMainWindow>
#include <QDateTime>
#include <QChart>
#include <QChartView>
#include <QLineSeries>



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
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    QChart *chart;

};
#endif // MAINWINDOW_H

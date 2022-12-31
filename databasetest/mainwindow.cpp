#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    database db = database("C:/Users/Inka/software_design/SoftwareDesignProject/database/database.db");

    QStringList stations {"Hyytiälä","Värriö"};
    QDateTime startDate(QDate(2022, 1, 19), QTime(14, 0, 0));
    QDateTime endDate(QDate(2022, 1, 19), QTime(17, 0, 0));

    /*QString start = startDate.toString("yyyy-MM-ddTHH:mm:ss.sss");
    QString format = "yyyy-MM-ddTHH:mm:ss.sss";
    QDateTime d = QDateTime::fromString(start,format);*/

    bool succeeded = db.saveSmearSettings("tallenus",stations,startDate,endDate,"CO2");
    qDebug() << succeeded;

    QList<SMEARSettings> s= db.retrieveSmearSettings();
    qDebug() << s.at(0).name << s.at(0).gas << s.at(0).start << s.at(0).end << s.at(0).stations;

    bool value = db.saveStatfiSettings("tallennus2", startDate,endDate,"intensity");
    qDebug() << value;
    QList<STATFISettings> statfi = db.retrieveStatfiSettings();
    qDebug() << statfi.at(0).name << s.at(0).start << s.at(0).end << statfi.at(0).dataset;




}

MainWindow::~MainWindow()
{
    delete ui;
}


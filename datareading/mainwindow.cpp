#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{

}


void MainWindow::on_pushButton_clicked()
{
    QDateTime startDate(QDate(2022, 1, 19), QTime(14, 0, 0));
    QDateTime endDate(QDate(2022, 1, 19), QTime(17, 0, 0));

    QString start  = startDate.toString("yyyy-MM-ddTHH:mm:ss.sss");
    QString end  = endDate.toString("yyyy-MM-ddTHH:mm:ss.sss");

    std::vector<QString> stations {"Kumpula", "Hyytiälä", "Värriö"};


   //TimeSeriesTable* data = repo.getTimeSeries(start, end,stations,"CO2","60","MAX");
  /*td::map<QString,std::shared_ptr<QLineSeries>> s = service.getTimeSeries(startDate, endDate,stations,"CO2","60","MAX");
   qDebug() << "testi:" <<  service.getAllStations().size();
   qDebug() << s.size();*/

}


void MainWindow::on_pushButton_2_clicked()
{
    /*std::vector<QString> testvector{"Värriö", "Hyytiälä"};
    std::shared_ptr<TimeSeriesTable> timeSeriesTable = repo.getTimeSeries(
                                                 "2022-01-19T14:00:00.000",
                                                 "2022-01-19T23:00:00.000",
                                                 testvector,
                                                 "CO2",
                                                 "60",
                                                 "MAX"
                                                );
    qDebug() << timeSeriesTable->getAggregation();
    qDebug() << timeSeriesTable->getAggregationInterval();
    qDebug() << timeSeriesTable->getColumns();
    std::map<QString,std::shared_ptr<QLineSeries>> lineSeriesData = timeSeriesTable->toLineSeries();
    for(auto stationData : lineSeriesData ) {
        qDebug() << stationData.first << "|" << stationData.second;
    }
    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->createDefaultAxes();
    chart->addSeries(lineSeriesData.at("VAR_EDDY.av_c"));
    ui->graphicsView->setChart(chart);*/

    chart = new QChart();
    QLineSeries *series = new QLineSeries();
    series->append(0, 6);
    series->append(2, 4);
    chart->addSeries(series);



}


void MainWindow::on_pushButton_3_clicked()
{
    SmearService *smearService = new SmearService();
    //SmearRepository *smearRepository = new SmearRepository();

    qDebug() << smearService->getStartDate("Värriö", "CO2")<<1;
    qDebug() << smearService->getStartDate("Värriö", "SO2")<<2;
    qDebug() << smearService->getStartDate("Värriö", "NO")<<3;
    qDebug() << smearService->getStartDate("Hyytiälä", "CO2")<<4;
    qDebug() << smearService->getStartDate("Hyytiälä", "SO2")<<5;
    qDebug() << smearService->getStartDate("Hyytiälä", "NO")<<6;
    qDebug() << smearService->getStartDate("Kumpula", "CO2")<<7;
    qDebug() << smearService->getStartDate("Kumpula", "SO2")<<8;
    qDebug() << smearService->getStartDate("Kumpula", "NO")<<9;


}


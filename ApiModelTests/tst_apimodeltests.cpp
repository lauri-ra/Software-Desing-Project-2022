#include "apimodels/timeseriestable.h"
#include <QtTest>
#include <QFile>
// add necessary includes here

class ApiModelTests : public QObject
{
    Q_OBJECT

public:
    ApiModelTests();
    ~ApiModelTests();

private slots:
    void timeseries();

};

ApiModelTests::ApiModelTests()
{

}

ApiModelTests::~ApiModelTests()
{

}

void ApiModelTests::timeseries()
{
    QFile inFile("testdata.json");
        inFile.open(QIODevice::ReadOnly|QIODevice::Text);
        QByteArray data = inFile.readAll();
        inFile.close();

        QJsonParseError errorPtr;
        QJsonDocument doc = QJsonDocument::fromJson(data, &errorPtr);
        if (doc.isNull()) {
            qDebug() << "Parse failed";
        }
    QJsonObject obj = doc.object();
    TimeSeriesTable tst = TimeSeriesTable(doc);
    qDebug() << tst.getAggregation() << "test_case1";
    qDebug() << tst.getData()[0].getSampleTime() << "test_case1";
    qDebug() << tst.getColumns() << "getColumns";
    for ( auto i : tst.getColumns()) {
        qDebug() <<i;
    }
    //tst.toLineSeries();
}

QTEST_APPLESS_MAIN(ApiModelTests)

#include "tst_apimodeltests.moc"

QT += testlib \
       charts
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_apimodeltests.cpp \
    ../SoftwareDesignProject/apimodels/timeseriesrow.cpp \
    ../SoftwareDesignProject/apimodels/timeseriestable.cpp

OTHER_FILES += testdata.json \

HEADERS += \
    ../SoftwareDesignProject/apimodels/timeseriesrow.h \
    ../SoftwareDesignProject/apimodels/timeseriestable.h

INCLUDEPATH += \
 ../SoftwareDesignProject \
 ../ApiModelTests \

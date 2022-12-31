QT       += core gui \
            network \
            charts \

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../SoftwareDesignProject/apimodels/stationmodel.cpp \
    ../SoftwareDesignProject/apimodels/timeseriesrow.cpp \
    ../SoftwareDesignProject/apimodels/timeseriestable.cpp \
    ../SoftwareDesignProject/repositories/SmearRepository.cpp \
    ../SoftwareDesignProject/services/SmearService.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    ../SoftwareDesignProject/apimodels/stationmodel.h \
    ../SoftwareDesignProject/apimodels/timeseriesrow.h \
    ../SoftwareDesignProject/apimodels/timeseriestable.h \
    ../SoftwareDesignProject/repositories/SmearRepository.h \
    ../SoftwareDesignProject/repositories/irepository.h \
    ../SoftwareDesignProject/services/IService.h \
    ../SoftwareDesignProject/services/SmearService.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

INCLUDEPATH += \
  ../SoftwareDesignProject \
  ../datareading \

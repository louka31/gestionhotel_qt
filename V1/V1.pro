QT       += core gui sql printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    accueil.cpp \
    ajoutchambre.cpp \
    ajoutclient.cpp \
    ajoutemploye.cpp \
    ajouthotel.cpp \
    ajoutlogement.cpp \
    ajoutreservationavecclient.cpp \
    ajoutreservationsansclient.cpp \
    ancienmotdepasse.cpp \
    chambreadmin.cpp \
    chambreutilisateur.cpp \
    client.cpp \
    clientadmin.cpp \
    compte.cpp \
    dialog.cpp \
    dialog1.cpp \
    employe.cpp \
    entrecin.cpp \
    gestionhotel.cpp \
    historique.cpp \
    historiqueadmin.cpp \
    hotel.cpp \
    main.cpp \
    mainwindow.cpp \
    modifchambre.cpp \
    modifemploye.cpp \
    modiflog.cpp \
    nouveaumotdepasse.cpp \
    qcustomplot.cpp \
    reservationencoursadmin.cpp \
    reservationsencours.cpp \
    sejourtermine.cpp \
    tableaudebord.cpp \
    typelogementadmin.cpp \
    typelogementutilisateur.cpp

HEADERS += \
    accueil.h \
    ajoutchambre.h \
    ajoutclient.h \
    ajoutemploye.h \
    ajouthotel.h \
    ajoutlogement.h \
    ajoutreservationavecclient.h \
    ajoutreservationsansclient.h \
    ancienmotdepasse.h \
    chambreadmin.h \
    chambreutilisateur.h \
    client.h \
    clientadmin.h \
    compte.h \
    dialog.h \
    dialog1.h \
    employe.h \
    entrecin.h \
    gestionhotel.h \
    historique.h \
    historiqueadmin.h \
    hotel.h \
    mainwindow.h \
    modifchambre.h \
    modifemploye.h \
    modiflog.h \
    nouveaumotdepasse.h \
    qcustomplot.h \
    reservationencoursadmin.h \
    reservationsencours.h \
    sejourtermine.h \
    tableaudebord.h \
    typelogementadmin.h \
    typelogementutilisateur.h

FORMS += \
    accueil.ui \
    ajoutchambre.ui \
    ajoutclient.ui \
    ajoutemploye.ui \
    ajouthotel.ui \
    ajoutlogement.ui \
    ajoutreservationavecclient.ui \
    ajoutreservationsansclient.ui \
    ancienmotdepasse.ui \
    chambreadmin.ui \
    chambreutilisateur.ui \
    client.ui \
    clientadmin.ui \
    compte.ui \
    dialog.ui \
    dialog1.ui \
    employe.ui \
    entrecin.ui \
    gestionhotel.ui \
    historique.ui \
    historiqueadmin.ui \
    hotel.ui \
    mainwindow.ui \
    modifchambre.ui \
    modifemploye.ui \
    modiflog.ui \
    nouveaumotdepasse.ui \
    reservationencoursadmin.ui \
    reservationsencours.ui \
    sejourtermine.ui \
    tableaudebord.ui \
    typelogementadmin.ui \
    typelogementutilisateur.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    image.qrc

DISTFILES += \
    ../../téléchargement.jpg

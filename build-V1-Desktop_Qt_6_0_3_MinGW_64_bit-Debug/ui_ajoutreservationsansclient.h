/********************************************************************************
** Form generated from reading UI file 'ajoutreservationsansclient.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTRESERVATIONSANSCLIENT_H
#define UI_AJOUTRESERVATIONSANSCLIENT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AjoutReservationSansClient
{
public:
    QFrame *frame;
    QPushButton *ajouterreservatioar2_btn;
    QLabel *cinar2_txt;
    QLabel *prenomar2_txt;
    QLabel *label;
    QLabel *label_2;
    QDateEdit *datedepartar2_txt;
    QLabel *label_3;
    QLabel *nomar2_txt;
    QComboBox *typelogar2_cb;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_5;
    QDateEdit *datearriveear2_txt;
    QComboBox *numchar2_cb;

    void setupUi(QDialog *AjoutReservationSansClient)
    {
        if (AjoutReservationSansClient->objectName().isEmpty())
            AjoutReservationSansClient->setObjectName(QString::fromUtf8("AjoutReservationSansClient"));
        AjoutReservationSansClient->resize(428, 476);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/projetimages/projetimages/e.png"), QSize(), QIcon::Normal, QIcon::Off);
        AjoutReservationSansClient->setWindowIcon(icon);
        AjoutReservationSansClient->setStyleSheet(QString::fromUtf8("QComboBox:editable {\n"
"    background: white;\n"
"}\n"
"\n"
"QComboBox:!editable, QComboBox::drop-down:editable {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"                                 stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"}\n"
"\n"
"QComboBox:!editable:on, QComboBox::drop-down:editable:on {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #D3D3D3, stop: 0.4 #D8D8D8,\n"
"                                stop: 0.5 #DDDDDD, stop: 1.0 #E1E1E1);\n"
"}\n"
"\n"
"QComboBox:on { /* shift the text when the popup opens */\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;\n"
"\n"
"    border-left-width: 1px;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid; /* just a single line */\n"
"    border-to"
                        "p-right-radius: 3px; /* same radius as the QComboBox */\n"
"    border-bottom-right-radius: 3px;\n"
"}\n"
"QComboBox {\n"
"    border: 1px solid gray;\n"
"    border-radius: 3px;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;\n"
"}\n"
"QDateEdit {\n"
"    border: 1px solid gray;\n"
"    border-radius: 3px;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;\n"
"}\n"
"QLineEdit\n"
"{\n"
"\n"
"    border: 1px solid gray;\n"
"    border-radius: 4px;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;\n"
"}\n"
"QDialog#AjoutReservationSansClient\n"
"{\n"
"	background-image:url(:/projetimages/projetimages/a.jpg);\n"
"\n"
"}\n"
"*{\n"
"font-family:centry gothlic ;\n"
"font-size:15px;\n"
"}\n"
"#frame\n"
"{\n"
"\n"
"	background:rgba(0,0,0,0.7);\n"
"border-radius:15px;\n"
"}\n"
"\n"
"\n"
"\n"
"#label{\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}\n"
"\n"
"#label_2\n"
"{\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}\n"
"\n"
"\n"
"#label_3{\n"
"color:white;\n"
"background:tr"
                        "ansparent;\n"
"\n"
"}\n"
"\n"
"#label_4{\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}\n"
"\n"
"#label_5{\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}\n"
"\n"
"#label_6{\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}\n"
"\n"
"#label_7{\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}\n"
"\n"
"#cinar2_txt{\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}\n"
"\n"
"#nomar2_txt{\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}\n"
"\n"
"\n"
"#prenomar2_txt{\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}\n"
"QPushButton\n"
" {\n"
"     background-color: red;\n"
"\n"
"     border-radius: 10px;\n"
"\n"
" }\n"
"\n"
"QPushButton\n"
"{\n"
"color:white;\n"
"\n"
"border-raduis:15px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"\n"
"	color: white;\n"
"border-radius:15px;\n"
"background:rgb(255, 85, 127);\n"
"}\n"
""));
        frame = new QFrame(AjoutReservationSansClient);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(50, 40, 331, 401));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        ajouterreservatioar2_btn = new QPushButton(frame);
        ajouterreservatioar2_btn->setObjectName(QString::fromUtf8("ajouterreservatioar2_btn"));
        ajouterreservatioar2_btn->setGeometry(QRect(90, 350, 141, 31));
        cinar2_txt = new QLabel(frame);
        cinar2_txt->setObjectName(QString::fromUtf8("cinar2_txt"));
        cinar2_txt->setGeometry(QRect(140, 80, 141, 31));
        prenomar2_txt = new QLabel(frame);
        prenomar2_txt->setObjectName(QString::fromUtf8("prenomar2_txt"));
        prenomar2_txt->setGeometry(QRect(150, 40, 131, 41));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 80, 71, 21));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 10, 71, 31));
        datedepartar2_txt = new QDateEdit(frame);
        datedepartar2_txt->setObjectName(QString::fromUtf8("datedepartar2_txt"));
        datedepartar2_txt->setGeometry(QRect(160, 180, 131, 22));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 40, 101, 31));
        nomar2_txt = new QLabel(frame);
        nomar2_txt->setObjectName(QString::fromUtf8("nomar2_txt"));
        nomar2_txt->setGeometry(QRect(150, 10, 121, 31));
        typelogar2_cb = new QComboBox(frame);
        typelogar2_cb->setObjectName(QString::fromUtf8("typelogar2_cb"));
        typelogar2_cb->setGeometry(QRect(160, 300, 131, 22));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 120, 101, 16));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 240, 141, 16));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 300, 121, 16));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 180, 111, 16));
        datearriveear2_txt = new QDateEdit(frame);
        datearriveear2_txt->setObjectName(QString::fromUtf8("datearriveear2_txt"));
        datearriveear2_txt->setGeometry(QRect(160, 120, 131, 22));
        numchar2_cb = new QComboBox(frame);
        numchar2_cb->setObjectName(QString::fromUtf8("numchar2_cb"));
        numchar2_cb->setGeometry(QRect(160, 240, 131, 22));

        retranslateUi(AjoutReservationSansClient);

        QMetaObject::connectSlotsByName(AjoutReservationSansClient);
    } // setupUi

    void retranslateUi(QDialog *AjoutReservationSansClient)
    {
        AjoutReservationSansClient->setWindowTitle(QCoreApplication::translate("AjoutReservationSansClient", " Hotel", nullptr));
        ajouterreservatioar2_btn->setText(QCoreApplication::translate("AjoutReservationSansClient", "Ajouter r\303\251servation", nullptr));
        cinar2_txt->setText(QCoreApplication::translate("AjoutReservationSansClient", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">TextLabel</span></p></body></html>", nullptr));
        prenomar2_txt->setText(QCoreApplication::translate("AjoutReservationSansClient", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">TextLabel</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("AjoutReservationSansClient", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">CIN :</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("AjoutReservationSansClient", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">Nom :</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("AjoutReservationSansClient", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">Pr\303\251nom :</span></p></body></html>", nullptr));
        nomar2_txt->setText(QCoreApplication::translate("AjoutReservationSansClient", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">TextLabel</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("AjoutReservationSansClient", "Date d'arriv\303\251e :", nullptr));
        label_6->setText(QCoreApplication::translate("AjoutReservationSansClient", "Num\303\251ro de chambre :", nullptr));
        label_7->setText(QCoreApplication::translate("AjoutReservationSansClient", "Type de logement :", nullptr));
        label_5->setText(QCoreApplication::translate("AjoutReservationSansClient", "Date de d\303\251part :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AjoutReservationSansClient: public Ui_AjoutReservationSansClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTRESERVATIONSANSCLIENT_H

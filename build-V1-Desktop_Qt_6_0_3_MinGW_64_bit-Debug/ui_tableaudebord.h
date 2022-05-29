/********************************************************************************
** Form generated from reading UI file 'tableaudebord.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLEAUDEBORD_H
#define UI_TABLEAUDEBORD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_TableauDeBord
{
public:
    QWidget *widget;
    QPushButton *quitteradmin_btn;
    QPushButton *resencoursadmin_btn;
    QPushButton *hoteladmin_btn;
    QPushButton *clientadmin_btn;
    QPushButton *chambreadmin_btn;
    QPushButton *typelogadmin_btn;
    QPushButton *compteadmin_btn;
    QPushButton *employeadmin_btn;
    QPushButton *historiqueadmin_btn;
    QCustomPlot *widget_2;
    QCustomPlot *widget_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *Nom;
    QWidget *widget_4;
    QLabel *label_3;
    QLabel *nbrchambretotale_txt;
    QLabel *label_7;
    QWidget *widget_5;
    QLabel *label_4;
    QLabel *nbrclientstotale_txt;
    QLabel *label_8;
    QWidget *widget_6;
    QLabel *label_11;
    QLabel *label_5;
    QLabel *nbremployetotale_txt;
    QWidget *widget_7;
    QLabel *label_12;
    QLabel *label_6;
    QLabel *nbrreservationsencours_txt;
    QWidget *widget_8;
    QLabel *label_10;
    QLabel *label_13;
    QLabel *nbrchambresdispo_txt;

    void setupUi(QDialog *TableauDeBord)
    {
        if (TableauDeBord->objectName().isEmpty())
            TableauDeBord->setObjectName(QString::fromUtf8("TableauDeBord"));
        TableauDeBord->resize(1550, 800);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/projetimages/projetimages/e.png"), QSize(), QIcon::Normal, QIcon::Off);
        TableauDeBord->setWindowIcon(icon);
        TableauDeBord->setStyleSheet(QString::fromUtf8("\n"
"QDialog#TableauDeBord\n"
"{\n"
"		background-image: url(:/projetimages/projetimages/a.jpg);\n"
"}\n"
"*{\n"
"font-family:centry gothlic ;\n"
"font-size:15px;\n"
"}\n"
"QWidget#widget\n"
"{\n"
"\n"
"	background:rgba(0,0,0,0.7);\n"
"border-radius:15px;\n"
"}\n"
"#label{\n"
"font-family:centry gothlic ;\n"
"font-size:18px;\n"
"color:white;\n"
"\n"
"}\n"
"#Nom{\n"
"font-family:centry gothlic ;\n"
"font-size:18px;\n"
"color:white;\n"
"\n"
"}\n"
"#label_2{\n"
"font-family:centry gothlic ;\n"
"font-size:18px;\n"
"color:white;\n"
"}\n"
"QPushButton\n"
" {\n"
"background-color: red;\n"
"border-radius: 10px;\n"
"font-size:22px;\n"
"color:white;\n"
"border-raduis:15px;\n"
"\n"
" }\n"
"\n"
"QPushButton:hover\n"
"{\n"
"color: white;\n"
"border-radius:15px;\n"
"background:rgb(255, 85, 127);\n"
"}\n"
""));
        widget = new QWidget(TableauDeBord);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 1490, 760));
        quitteradmin_btn = new QPushButton(widget);
        quitteradmin_btn->setObjectName(QString::fromUtf8("quitteradmin_btn"));
        quitteradmin_btn->setGeometry(QRect(10, 110, 51, 31));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/projetimages/projetimages/aa.png"), QSize(), QIcon::Normal, QIcon::Off);
        quitteradmin_btn->setIcon(icon1);
        quitteradmin_btn->setIconSize(QSize(25, 25));
        resencoursadmin_btn = new QPushButton(widget);
        resencoursadmin_btn->setObjectName(QString::fromUtf8("resencoursadmin_btn"));
        resencoursadmin_btn->setGeometry(QRect(30, 280, 231, 31));
        hoteladmin_btn = new QPushButton(widget);
        hoteladmin_btn->setObjectName(QString::fromUtf8("hoteladmin_btn"));
        hoteladmin_btn->setGeometry(QRect(30, 630, 231, 31));
        clientadmin_btn = new QPushButton(widget);
        clientadmin_btn->setObjectName(QString::fromUtf8("clientadmin_btn"));
        clientadmin_btn->setGeometry(QRect(30, 390, 231, 31));
        chambreadmin_btn = new QPushButton(widget);
        chambreadmin_btn->setObjectName(QString::fromUtf8("chambreadmin_btn"));
        chambreadmin_btn->setGeometry(QRect(30, 450, 231, 31));
        typelogadmin_btn = new QPushButton(widget);
        typelogadmin_btn->setObjectName(QString::fromUtf8("typelogadmin_btn"));
        typelogadmin_btn->setGeometry(QRect(30, 510, 231, 31));
        compteadmin_btn = new QPushButton(widget);
        compteadmin_btn->setObjectName(QString::fromUtf8("compteadmin_btn"));
        compteadmin_btn->setGeometry(QRect(10, 60, 41, 31));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/projetimages/projetimages/aaa.png"), QSize(), QIcon::Normal, QIcon::Off);
        compteadmin_btn->setIcon(icon2);
        employeadmin_btn = new QPushButton(widget);
        employeadmin_btn->setObjectName(QString::fromUtf8("employeadmin_btn"));
        employeadmin_btn->setGeometry(QRect(30, 570, 231, 31));
        historiqueadmin_btn = new QPushButton(widget);
        historiqueadmin_btn->setObjectName(QString::fromUtf8("historiqueadmin_btn"));
        historiqueadmin_btn->setGeometry(QRect(30, 330, 231, 31));
        widget_2 = new QCustomPlot(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(320, 280, 521, 421));
        widget_3 = new QCustomPlot(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(931, 281, 520, 421));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(421, 231, 401, 41));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(981, 241, 421, 21));
        Nom = new QLabel(widget);
        Nom->setObjectName(QString::fromUtf8("Nom"));
        Nom->setGeometry(QRect(60, 60, 181, 31));
        widget_4 = new QWidget(widget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(230, 30, 221, 121));
        widget_4->setStyleSheet(QString::fromUtf8("#widget_4\n"
" {\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.517, x2:0.975, y2:0.102, stop:0.766949 rgba(36, 140, 173, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-radius: 10px;\n"
"font-size:22px;\n"
"border-raduis:15px;\n"
"\n"
"}QLabel{\n"
"font-family:centry gothlic ;\n"
"font-size:18px;\n"
"color:white;\n"
"\n"
"}\n"
"#nbrchambretotale_txt{\n"
"font: 24pt;\n"
"\n"
"}"));
        label_3 = new QLabel(widget_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 60, 141, 20));
        nbrchambretotale_txt = new QLabel(widget_4);
        nbrchambretotale_txt->setObjectName(QString::fromUtf8("nbrchambretotale_txt"));
        nbrchambretotale_txt->setGeometry(QRect(20, 10, 101, 31));
        label_7 = new QLabel(widget_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(110, 60, 121, 51));
        label_7->setStyleSheet(QString::fromUtf8("image: url(:/projetimages/projetimages/2.png);"));
        widget_5 = new QWidget(widget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setGeometry(QRect(500, 30, 211, 121));
        widget_5->setStyleSheet(QString::fromUtf8("#widget_5\n"
" {\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.517, x2:0.975, y2:0.102, stop:0.762712 rgba(193, 40, 118, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-radius: 10px;\n"
"font-size:22px;\n"
"border-raduis:15px;\n"
"\n"
" }\n"
"QLabel{\n"
"font-family:centry gothlic ;\n"
"font-size:18px;\n"
"color:white;\n"
"\n"
"}\n"
"#nbrclientstotale_txt{\n"
"font: 24pt;\n"
"\n"
"}"));
        label_4 = new QLabel(widget_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 60, 111, 20));
        nbrclientstotale_txt = new QLabel(widget_5);
        nbrclientstotale_txt->setObjectName(QString::fromUtf8("nbrclientstotale_txt"));
        nbrclientstotale_txt->setGeometry(QRect(20, 10, 81, 31));
        label_8 = new QLabel(widget_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(140, 60, 55, 51));
        label_8->setStyleSheet(QString::fromUtf8("image: url(:/projetimages/projetimages/3.png);"));
        widget_6 = new QWidget(widget);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setGeometry(QRect(760, 30, 211, 121));
        widget_6->setStyleSheet(QString::fromUtf8("#widget_6\n"
" {\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0.517, x2:0.975, y2:0.102, stop:0.800847 rgba(209, 103, 44, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-radius: 10px;\n"
"font-size:22px;\n"
"border-raduis:15px;\n"
"\n"
" }\n"
"QLabel{\n"
"font-family:centry gothlic ;\n"
"font-size:18px;\n"
"color:white;\n"
"\n"
"}\n"
"#nbremployetotale_txt{\n"
"font: 24pt;\n"
"\n"
"}"));
        label_11 = new QLabel(widget_6);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(140, 60, 55, 51));
        label_11->setStyleSheet(QString::fromUtf8("\n"
"image: url(:/projetimages/projetimages/5.png);"));
        label_5 = new QLabel(widget_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 50, 141, 31));
        nbremployetotale_txt = new QLabel(widget_6);
        nbremployetotale_txt->setObjectName(QString::fromUtf8("nbremployetotale_txt"));
        nbremployetotale_txt->setGeometry(QRect(10, 10, 91, 31));
        widget_7 = new QWidget(widget);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setGeometry(QRect(1020, 30, 231, 121));
        widget_7->setStyleSheet(QString::fromUtf8("#widget_7\n"
" {\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0.517, x2:0.903, y2:0.130409, stop:0.775424 rgba(44, 209, 174, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-radius: 10px;\n"
"font-size:22px;\n"
"border-raduis:15px;\n"
"\n"
" }\n"
"QLabel{\n"
"font-family:centry gothlic ;\n"
"font-size:17px;\n"
"color:white;\n"
"\n"
"}\n"
"#nbrreservationsencours_txt{\n"
"font: 24pt;\n"
"\n"
"}"));
        label_12 = new QLabel(widget_7);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(180, 70, 55, 51));
        label_12->setStyleSheet(QString::fromUtf8("image: url(:/projetimages/projetimages/7.png);"));
        label_6 = new QLabel(widget_7);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 60, 171, 21));
        nbrreservationsencours_txt = new QLabel(widget_7);
        nbrreservationsencours_txt->setObjectName(QString::fromUtf8("nbrreservationsencours_txt"));
        nbrreservationsencours_txt->setGeometry(QRect(20, 10, 101, 41));
        widget_8 = new QWidget(widget);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        widget_8->setGeometry(QRect(1270, 30, 211, 121));
        widget_8->setStyleSheet(QString::fromUtf8("#widget_8\n"
" {\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.517, x2:0.903, y2:0.130409, stop:0.775424 rgba(209, 48, 193, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-radius: 10px;\n"
"font-size:22px;\n"
"border-raduis:15px;\n"
"\n"
" }\n"
"QLabel{\n"
"font-family:centry gothlic ;\n"
"font-size:16px;\n"
"color:white;\n"
"\n"
"}\n"
"#nbrchambresdispo_txt{\n"
"font: 24pt;\n"
"\n"
"}"));
        label_10 = new QLabel(widget_8);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(0, 60, 161, 20));
        label_13 = new QLabel(widget_8);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(150, 60, 55, 51));
        label_13->setStyleSheet(QString::fromUtf8("image: url(:/projetimages/projetimages/6.png);"));
        nbrchambresdispo_txt = new QLabel(widget_8);
        nbrchambresdispo_txt->setObjectName(QString::fromUtf8("nbrchambresdispo_txt"));
        nbrchambresdispo_txt->setGeometry(QRect(20, 10, 81, 31));

        retranslateUi(TableauDeBord);

        QMetaObject::connectSlotsByName(TableauDeBord);
    } // setupUi

    void retranslateUi(QDialog *TableauDeBord)
    {
        TableauDeBord->setWindowTitle(QCoreApplication::translate("TableauDeBord", "Hotel", nullptr));
        quitteradmin_btn->setText(QString());
        resencoursadmin_btn->setText(QCoreApplication::translate("TableauDeBord", "R\303\251servations en cours", nullptr));
        hoteladmin_btn->setText(QCoreApplication::translate("TableauDeBord", "H\303\264tel", nullptr));
        clientadmin_btn->setText(QCoreApplication::translate("TableauDeBord", "Clients", nullptr));
        chambreadmin_btn->setText(QCoreApplication::translate("TableauDeBord", "Chambres", nullptr));
        typelogadmin_btn->setText(QCoreApplication::translate("TableauDeBord", "Types de logements", nullptr));
        compteadmin_btn->setText(QString());
        employeadmin_btn->setText(QCoreApplication::translate("TableauDeBord", "Employ\303\251s", nullptr));
        historiqueadmin_btn->setText(QCoreApplication::translate("TableauDeBord", "Historique", nullptr));
        label->setText(QCoreApplication::translate("TableauDeBord", "Chiffres d'affaires selon les 5 derniers ann\303\251es", nullptr));
        label_2->setText(QCoreApplication::translate("TableauDeBord", "Nombre des r\303\251servations dans les 5 derniers ann\303\251es", nullptr));
        Nom->setText(QCoreApplication::translate("TableauDeBord", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("TableauDeBord", "Chambres ", nullptr));
        nbrchambretotale_txt->setText(QCoreApplication::translate("TableauDeBord", "Te", nullptr));
        label_7->setText(QString());
        label_4->setText(QCoreApplication::translate("TableauDeBord", "Clients ", nullptr));
        nbrclientstotale_txt->setText(QCoreApplication::translate("TableauDeBord", "Te", nullptr));
        label_8->setText(QString());
        label_11->setText(QString());
        label_5->setText(QCoreApplication::translate("TableauDeBord", "Employ\303\251s ", nullptr));
        nbremployetotale_txt->setText(QCoreApplication::translate("TableauDeBord", "Te", nullptr));
        label_12->setText(QString());
        label_6->setText(QCoreApplication::translate("TableauDeBord", "R\303\251servations en cours ", nullptr));
        nbrreservationsencours_txt->setText(QCoreApplication::translate("TableauDeBord", "Te", nullptr));
        label_10->setText(QCoreApplication::translate("TableauDeBord", "Chambres disponibles ", nullptr));
        label_13->setText(QString());
        nbrchambresdispo_txt->setText(QCoreApplication::translate("TableauDeBord", "Te", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TableauDeBord: public Ui_TableauDeBord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEAUDEBORD_H

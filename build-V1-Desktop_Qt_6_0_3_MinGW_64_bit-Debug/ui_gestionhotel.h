/********************************************************************************
** Form generated from reading UI file 'gestionhotel.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONHOTEL_H
#define UI_GESTIONHOTEL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GestionHotel
{
public:
    QWidget *widget;
    QPushButton *quittersuperadmin_btn;
    QTableView *tableViewGestionHotel;
    QPushButton *ajouterhotel_btn;

    void setupUi(QDialog *GestionHotel)
    {
        if (GestionHotel->objectName().isEmpty())
            GestionHotel->setObjectName(QString::fromUtf8("GestionHotel"));
        GestionHotel->resize(1078, 631);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/projetimages/projetimages/e.png"), QSize(), QIcon::Normal, QIcon::Off);
        GestionHotel->setWindowIcon(icon);
        GestionHotel->setStyleSheet(QString::fromUtf8("QTableView {\n"
"    selection-background-color:red;\n"
"border-radius:15px;\n"
"}\n"
"\n"
"QDialog#GestionHotel\n"
"{\n"
"		background-image: url(:/projetimages/projetimages/a.jpg);\n"
"\n"
"}\n"
"*{\n"
"font-family:centry gothlic ;\n"
"font-size:15px;\n"
"}\n"
"#widget\n"
"{\n"
"\n"
"	background:rgba(0,0,0,0.7);\n"
"border-radius:15px;\n"
"}\n"
" \n"
"QPushButton\n"
" {\n"
"     background-color: red;\n"
"\n"
"     border-radius: 10px;\n"
"font-size:22px;\n"
"\n"
"\n"
" }\n"
"\n"
"\n"
"\n"
"\n"
"QPushButton\n"
"{\n"
"color:white;\n"
"\n"
"border-raduis:15px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color: white;\n"
"border-radius:15px;\n"
"background:rgb(255, 85, 127);\n"
"}\n"
""));
        widget = new QWidget(GestionHotel);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 30, 1021, 561));
        quittersuperadmin_btn = new QPushButton(widget);
        quittersuperadmin_btn->setObjectName(QString::fromUtf8("quittersuperadmin_btn"));
        quittersuperadmin_btn->setGeometry(QRect(910, 20, 81, 31));
        quittersuperadmin_btn->setStyleSheet(QString::fromUtf8("image: url(:/projetimages/aa.png);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/projetimages/projetimages/aa.png"), QSize(), QIcon::Normal, QIcon::Off);
        quittersuperadmin_btn->setIcon(icon1);
        tableViewGestionHotel = new QTableView(widget);
        tableViewGestionHotel->setObjectName(QString::fromUtf8("tableViewGestionHotel"));
        tableViewGestionHotel->setGeometry(QRect(40, 90, 941, 441));
        ajouterhotel_btn = new QPushButton(widget);
        ajouterhotel_btn->setObjectName(QString::fromUtf8("ajouterhotel_btn"));
        ajouterhotel_btn->setGeometry(QRect(40, 30, 131, 31));

        retranslateUi(GestionHotel);

        QMetaObject::connectSlotsByName(GestionHotel);
    } // setupUi

    void retranslateUi(QDialog *GestionHotel)
    {
        GestionHotel->setWindowTitle(QCoreApplication::translate("GestionHotel", "Hotel", nullptr));
        quittersuperadmin_btn->setText(QString());
        ajouterhotel_btn->setText(QCoreApplication::translate("GestionHotel", "Ajouter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GestionHotel: public Ui_GestionHotel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONHOTEL_H

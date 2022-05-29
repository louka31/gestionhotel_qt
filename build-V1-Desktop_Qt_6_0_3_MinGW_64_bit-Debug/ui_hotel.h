/********************************************************************************
** Form generated from reading UI file 'hotel.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOTEL_H
#define UI_HOTEL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Hotel
{
public:
    QWidget *widget;
    QLabel *label_2;
    QLineEdit *categoriehotel;
    QLabel *label;
    QLineEdit *adressehotel;
    QPushButton *modifierhotel_btn;
    QLabel *label_3;
    QLineEdit *nomhotel;

    void setupUi(QDialog *Hotel)
    {
        if (Hotel->objectName().isEmpty())
            Hotel->setObjectName(QString::fromUtf8("Hotel"));
        Hotel->resize(585, 332);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/projetimages/projetimages/e.png"), QSize(), QIcon::Normal, QIcon::Off);
        Hotel->setWindowIcon(icon);
        Hotel->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QLineEdit\n"
"{\n"
"\n"
"    border: 1px solid gray;\n"
"    border-radius: 4px;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;\n"
"}\n"
"QDialog\n"
"{\n"
"		background-image: url(:/projetimages/projetimages/a.jpg);\n"
"\n"
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
"\n"
"\n"
"QPushButton\n"
" {\n"
"     background-color: red;\n"
"\n"
"     border-radius: 10px;\n"
"\n"
" }\n"
"\n"
"#label{\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}\n"
"\n"
"#label_2{\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}\n"
"#label_3{\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}\n"
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
"\n"
"	color:white;\n"
"border-radius:15px;\n"
"background:rgb(255, 85, 127);\n"
"}\n"
""));
        widget = new QWidget(Hotel);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 30, 531, 271));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 100, 101, 21));
        categoriehotel = new QLineEdit(widget);
        categoriehotel->setObjectName(QString::fromUtf8("categoriehotel"));
        categoriehotel->setGeometry(QRect(240, 150, 231, 22));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 50, 151, 21));
        adressehotel = new QLineEdit(widget);
        adressehotel->setObjectName(QString::fromUtf8("adressehotel"));
        adressehotel->setGeometry(QRect(240, 100, 231, 22));
        modifierhotel_btn = new QPushButton(widget);
        modifierhotel_btn->setObjectName(QString::fromUtf8("modifierhotel_btn"));
        modifierhotel_btn->setGeometry(QRect(210, 220, 111, 28));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 150, 141, 21));
        nomhotel = new QLineEdit(widget);
        nomhotel->setObjectName(QString::fromUtf8("nomhotel"));
        nomhotel->setGeometry(QRect(240, 50, 231, 22));

        retranslateUi(Hotel);

        QMetaObject::connectSlotsByName(Hotel);
    } // setupUi

    void retranslateUi(QDialog *Hotel)
    {
        Hotel->setWindowTitle(QCoreApplication::translate("Hotel", "Hotel", nullptr));
        label_2->setText(QCoreApplication::translate("Hotel", "Adresse :", nullptr));
        label->setText(QCoreApplication::translate("Hotel", "Nom de l'h\303\264tel :", nullptr));
        modifierhotel_btn->setText(QCoreApplication::translate("Hotel", "Enregistrer", nullptr));
        label_3->setText(QCoreApplication::translate("Hotel", "Cat\303\251gorie de l'h\303\264tel :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Hotel: public Ui_Hotel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOTEL_H

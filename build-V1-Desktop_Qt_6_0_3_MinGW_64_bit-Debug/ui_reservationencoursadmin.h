/********************************************************************************
** Form generated from reading UI file 'reservationencoursadmin.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESERVATIONENCOURSADMIN_H
#define UI_RESERVATIONENCOURSADMIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReservationEnCoursAdmin
{
public:
    QWidget *widget;
    QTableView *tableViewResEnCoursAdmin;
    QLabel *label;
    QLineEdit *rechresencoursadmin_txt;

    void setupUi(QDialog *ReservationEnCoursAdmin)
    {
        if (ReservationEnCoursAdmin->objectName().isEmpty())
            ReservationEnCoursAdmin->setObjectName(QString::fromUtf8("ReservationEnCoursAdmin"));
        ReservationEnCoursAdmin->resize(1164, 648);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/projetimages/projetimages/e.png"), QSize(), QIcon::Normal, QIcon::Off);
        ReservationEnCoursAdmin->setWindowIcon(icon);
        ReservationEnCoursAdmin->setStyleSheet(QString::fromUtf8("QTableView {\n"
"selection-background-color:red;\n"
"border-radius:15px;\n"
"}\n"
"\n"
"QDialog{\n"
"		background-image: url(:/projetimages/projetimages/a.jpg);\n"
"}\n"
"*{\n"
"font-family:centry gothlic ;\n"
"font-size:15px;\n"
"}\n"
"QWidget#widget{\n"
"\n"
"background:rgba(0,0,0,0.7);\n"
"border-radius:15px;\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"border-bottom:1px solid #717072;\n"
"}\n"
"#label{color:white;}"));
        widget = new QWidget(ReservationEnCoursAdmin);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 1111, 601));
        tableViewResEnCoursAdmin = new QTableView(widget);
        tableViewResEnCoursAdmin->setObjectName(QString::fromUtf8("tableViewResEnCoursAdmin"));
        tableViewResEnCoursAdmin->setGeometry(QRect(30, 100, 1051, 471));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 35, 441, 31));
        rechresencoursadmin_txt = new QLineEdit(widget);
        rechresencoursadmin_txt->setObjectName(QString::fromUtf8("rechresencoursadmin_txt"));
        rechresencoursadmin_txt->setGeometry(QRect(540, 40, 301, 21));

        retranslateUi(ReservationEnCoursAdmin);

        QMetaObject::connectSlotsByName(ReservationEnCoursAdmin);
    } // setupUi

    void retranslateUi(QDialog *ReservationEnCoursAdmin)
    {
        ReservationEnCoursAdmin->setWindowTitle(QCoreApplication::translate("ReservationEnCoursAdmin", "Hotel", nullptr));
        label->setText(QCoreApplication::translate("ReservationEnCoursAdmin", "Saisir le num\303\251ro de chambre ou le CIN du client \303\240 chercher :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReservationEnCoursAdmin: public Ui_ReservationEnCoursAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESERVATIONENCOURSADMIN_H

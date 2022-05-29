/********************************************************************************
** Form generated from reading UI file 'typelogementadmin.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TYPELOGEMENTADMIN_H
#define UI_TYPELOGEMENTADMIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TypeLogementAdmin
{
public:
    QWidget *widget;
    QTableView *tableViewtypelogadmin;
    QPushButton *ajouterlog_btn;

    void setupUi(QDialog *TypeLogementAdmin)
    {
        if (TypeLogementAdmin->objectName().isEmpty())
            TypeLogementAdmin->setObjectName(QString::fromUtf8("TypeLogementAdmin"));
        TypeLogementAdmin->resize(509, 466);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/projetimages/projetimages/e.png"), QSize(), QIcon::Normal, QIcon::Off);
        TypeLogementAdmin->setWindowIcon(icon);
        TypeLogementAdmin->setStyleSheet(QString::fromUtf8("QTableView {\n"
"selection-background-color:red;\n"
"border-radius:15px;\n"
"}\n"
"\n"
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
" \n"
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
"color: white;\n"
"border-radius:15px;\n"
"background:rgb(255, 85, 127);\n"
"}\n"
"\n"
""));
        widget = new QWidget(TypeLogementAdmin);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 30, 431, 401));
        tableViewtypelogadmin = new QTableView(widget);
        tableViewtypelogadmin->setObjectName(QString::fromUtf8("tableViewtypelogadmin"));
        tableViewtypelogadmin->setGeometry(QRect(50, 70, 331, 291));
        ajouterlog_btn = new QPushButton(widget);
        ajouterlog_btn->setObjectName(QString::fromUtf8("ajouterlog_btn"));
        ajouterlog_btn->setGeometry(QRect(50, 20, 161, 28));

        retranslateUi(TypeLogementAdmin);

        QMetaObject::connectSlotsByName(TypeLogementAdmin);
    } // setupUi

    void retranslateUi(QDialog *TypeLogementAdmin)
    {
        TypeLogementAdmin->setWindowTitle(QCoreApplication::translate("TypeLogementAdmin", "Hotel", nullptr));
        ajouterlog_btn->setText(QCoreApplication::translate("TypeLogementAdmin", "Ajouter ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TypeLogementAdmin: public Ui_TypeLogementAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TYPELOGEMENTADMIN_H

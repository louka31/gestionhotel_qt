/********************************************************************************
** Form generated from reading UI file 'clientadmin.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTADMIN_H
#define UI_CLIENTADMIN_H

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

class Ui_ClientAdmin
{
public:
    QWidget *widget;
    QTableView *tableViewClientAdmin;
    QLabel *label;
    QLineEdit *cherclientadmin_txt;

    void setupUi(QDialog *ClientAdmin)
    {
        if (ClientAdmin->objectName().isEmpty())
            ClientAdmin->setObjectName(QString::fromUtf8("ClientAdmin"));
        ClientAdmin->resize(1033, 634);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/projetimages/projetimages/e.png"), QSize(), QIcon::Normal, QIcon::Off);
        ClientAdmin->setWindowIcon(icon);
        ClientAdmin->setStyleSheet(QString::fromUtf8("QTableView {\n"
"selection-background-color:red;\n"
"border-radius:15px;\n"
"}\n"
"\n"
"QDialog{\n"
"	background-image:url(:/projetimages/projetimages/a.jpg);\n"
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
"QLineEdit\n"
"{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"border-bottom:1px solid #717072;\n"
"}\n"
"#label{\n"
"color:white;}"));
        widget = new QWidget(ClientAdmin);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 991, 591));
        tableViewClientAdmin = new QTableView(widget);
        tableViewClientAdmin->setObjectName(QString::fromUtf8("tableViewClientAdmin"));
        tableViewClientAdmin->setGeometry(QRect(20, 120, 941, 441));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 50, 251, 16));
        cherclientadmin_txt = new QLineEdit(widget);
        cherclientadmin_txt->setObjectName(QString::fromUtf8("cherclientadmin_txt"));
        cherclientadmin_txt->setGeometry(QRect(310, 40, 341, 22));

        retranslateUi(ClientAdmin);

        QMetaObject::connectSlotsByName(ClientAdmin);
    } // setupUi

    void retranslateUi(QDialog *ClientAdmin)
    {
        ClientAdmin->setWindowTitle(QCoreApplication::translate("ClientAdmin", "Hotel", nullptr));
        label->setText(QCoreApplication::translate("ClientAdmin", "Saisir le CIN du client \303\240 chercher :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientAdmin: public Ui_ClientAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTADMIN_H

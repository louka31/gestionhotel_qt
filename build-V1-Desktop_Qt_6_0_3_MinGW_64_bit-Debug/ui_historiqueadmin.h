/********************************************************************************
** Form generated from reading UI file 'historiqueadmin.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORIQUEADMIN_H
#define UI_HISTORIQUEADMIN_H

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

class Ui_HistoriqueAdmin
{
public:
    QWidget *widget;
    QTableView *tableViewHistoriqueAdmin;
    QLineEdit *cherhisresadmin_txt;
    QLabel *label;

    void setupUi(QDialog *HistoriqueAdmin)
    {
        if (HistoriqueAdmin->objectName().isEmpty())
            HistoriqueAdmin->setObjectName(QString::fromUtf8("HistoriqueAdmin"));
        HistoriqueAdmin->resize(1131, 627);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/projetimages/projetimages/e.png"), QSize(), QIcon::Normal, QIcon::Off);
        HistoriqueAdmin->setWindowIcon(icon);
        HistoriqueAdmin->setStyleSheet(QString::fromUtf8("QTableView {\n"
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
"\n"
"QLineEdit\n"
"{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"border-bottom:1px solid #717072;\n"
"}\n"
"#label{color:white;}"));
        widget = new QWidget(HistoriqueAdmin);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(29, 29, 1071, 571));
        tableViewHistoriqueAdmin = new QTableView(widget);
        tableViewHistoriqueAdmin->setObjectName(QString::fromUtf8("tableViewHistoriqueAdmin"));
        tableViewHistoriqueAdmin->setGeometry(QRect(30, 90, 1021, 461));
        cherhisresadmin_txt = new QLineEdit(widget);
        cherhisresadmin_txt->setObjectName(QString::fromUtf8("cherhisresadmin_txt"));
        cherhisresadmin_txt->setGeometry(QRect(530, 30, 291, 22));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 30, 431, 21));

        retranslateUi(HistoriqueAdmin);

        QMetaObject::connectSlotsByName(HistoriqueAdmin);
    } // setupUi

    void retranslateUi(QDialog *HistoriqueAdmin)
    {
        HistoriqueAdmin->setWindowTitle(QCoreApplication::translate("HistoriqueAdmin", "Hotel", nullptr));
        label->setText(QCoreApplication::translate("HistoriqueAdmin", "Saisir le num\303\251ro de chambre ou le CIN du client \303\240 chercher :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HistoriqueAdmin: public Ui_HistoriqueAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORIQUEADMIN_H

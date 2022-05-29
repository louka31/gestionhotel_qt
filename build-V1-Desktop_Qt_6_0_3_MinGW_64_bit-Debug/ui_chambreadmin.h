/********************************************************************************
** Form generated from reading UI file 'chambreadmin.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAMBREADMIN_H
#define UI_CHAMBREADMIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChambreAdmin
{
public:
    QWidget *widget;
    QTableView *tableViewchdispoadmin;
    QPushButton *ajouterchambre_btn;
    QLabel *label;
    QTableView *tableViewchambreadmin;
    QLabel *label_2;
    QLineEdit *cherchambreadmin_txt;

    void setupUi(QDialog *ChambreAdmin)
    {
        if (ChambreAdmin->objectName().isEmpty())
            ChambreAdmin->setObjectName(QString::fromUtf8("ChambreAdmin"));
        ChambreAdmin->resize(1021, 655);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/projetimages/projetimages/e.png"), QSize(), QIcon::Normal, QIcon::Off);
        ChambreAdmin->setWindowIcon(icon);
        ChambreAdmin->setStyleSheet(QString::fromUtf8("QTableView {\n"
"    selection-background-color:red;\n"
"border-radius:15px;\n"
"}\n"
"\n"
"QDialog#ChambreAdmin\n"
"{background-image:url(:/projetimages/projetimages/a.jpg);\n"
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
"QLabel\n"
"{\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}\n"
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
"QPushButton#ajouterchambre_btn:hover\n"
"{\n"
"\n"
"color: white;\n"
"border-radius:15px;\n"
"background:rgb(255, 85, 127);\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"border-bottom:1px solid #717072;\n"
"}"));
        widget = new QWidget(ChambreAdmin);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 20, 951, 621));
        tableViewchdispoadmin = new QTableView(widget);
        tableViewchdispoadmin->setObjectName(QString::fromUtf8("tableViewchdispoadmin"));
        tableViewchdispoadmin->setGeometry(QRect(570, 150, 341, 441));
        ajouterchambre_btn = new QPushButton(widget);
        ajouterchambre_btn->setObjectName(QString::fromUtf8("ajouterchambre_btn"));
        ajouterchambre_btn->setGeometry(QRect(70, 30, 161, 28));
        ajouterchambre_btn->setFocusPolicy(Qt::NoFocus);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(570, 80, 181, 31));
        tableViewchambreadmin = new QTableView(widget);
        tableViewchambreadmin->setObjectName(QString::fromUtf8("tableViewchambreadmin"));
        tableViewchambreadmin->setGeometry(QRect(70, 150, 341, 441));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 90, 301, 16));
        cherchambreadmin_txt = new QLineEdit(widget);
        cherchambreadmin_txt->setObjectName(QString::fromUtf8("cherchambreadmin_txt"));
        cherchambreadmin_txt->setGeometry(QRect(360, 90, 171, 21));
        cherchambreadmin_txt->setMouseTracking(false);

        retranslateUi(ChambreAdmin);

        QMetaObject::connectSlotsByName(ChambreAdmin);
    } // setupUi

    void retranslateUi(QDialog *ChambreAdmin)
    {
        ChambreAdmin->setWindowTitle(QCoreApplication::translate("ChambreAdmin", "Hotel", nullptr));
        ajouterchambre_btn->setText(QCoreApplication::translate("ChambreAdmin", "Ajouter chambre", nullptr));
        label->setText(QCoreApplication::translate("ChambreAdmin", "Chambres disponibles :", nullptr));
        label_2->setText(QCoreApplication::translate("ChambreAdmin", "Saisir le num\303\251ro de chambre \303\240 chercher  :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChambreAdmin: public Ui_ChambreAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAMBREADMIN_H

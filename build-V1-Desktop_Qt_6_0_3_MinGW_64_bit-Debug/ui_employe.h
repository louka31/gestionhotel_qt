/********************************************************************************
** Form generated from reading UI file 'employe.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYE_H
#define UI_EMPLOYE_H

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

class Ui_Employe
{
public:
    QWidget *widget;
    QTableView *tableViewEmploye;
    QPushButton *ajouteremp_btn;
    QLabel *label;
    QLineEdit *cheremployeadmin_txt;

    void setupUi(QDialog *Employe)
    {
        if (Employe->objectName().isEmpty())
            Employe->setObjectName(QString::fromUtf8("Employe"));
        Employe->resize(1146, 605);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/projetimages/projetimages/e.png"), QSize(), QIcon::Normal, QIcon::Off);
        Employe->setWindowIcon(icon);
        Employe->setStyleSheet(QString::fromUtf8("QTableView {\n"
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
"QPushButton\n"
" {\n"
"     background-color: red;\n"
"\n"
"     border-radius: 10px;\n"
"\n"
" }\n"
"#label{color:white;}\n"
"QPushButton\n"
"{\n"
"color:white;\n"
"\n"
"border-raduis:15px;\n"
"}\n"
"QLineEdit\n"
"{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"border-bottom:1px solid #717072;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"\n"
"	color: white;\n"
"border-radius:15px;\n"
"background:rgb(255, 85, 127);\n"
"}"));
        widget = new QWidget(Employe);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 30, 1091, 551));
        tableViewEmploye = new QTableView(widget);
        tableViewEmploye->setObjectName(QString::fromUtf8("tableViewEmploye"));
        tableViewEmploye->setGeometry(QRect(20, 130, 1051, 391));
        ajouteremp_btn = new QPushButton(widget);
        ajouteremp_btn->setObjectName(QString::fromUtf8("ajouteremp_btn"));
        ajouteremp_btn->setGeometry(QRect(20, 20, 141, 31));
        ajouteremp_btn->setFocusPolicy(Qt::NoFocus);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(300, 40, 271, 51));
        cheremployeadmin_txt = new QLineEdit(widget);
        cheremployeadmin_txt->setObjectName(QString::fromUtf8("cheremployeadmin_txt"));
        cheremployeadmin_txt->setGeometry(QRect(580, 60, 291, 22));

        retranslateUi(Employe);

        QMetaObject::connectSlotsByName(Employe);
    } // setupUi

    void retranslateUi(QDialog *Employe)
    {
        Employe->setWindowTitle(QCoreApplication::translate("Employe", "Hotel", nullptr));
        ajouteremp_btn->setText(QCoreApplication::translate("Employe", "Ajouter", nullptr));
        label->setText(QCoreApplication::translate("Employe", "Saisir le CIN de l'employ\303\251 \303\240 chercher :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Employe: public Ui_Employe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYE_H

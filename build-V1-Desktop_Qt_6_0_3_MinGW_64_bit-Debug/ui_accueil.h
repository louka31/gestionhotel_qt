/********************************************************************************
** Form generated from reading UI file 'accueil.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCUEIL_H
#define UI_ACCUEIL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_accueil
{
public:
    QWidget *widget;
    QWidget *widget_3;
    QPushButton *pushButton;

    void setupUi(QDialog *accueil)
    {
        if (accueil->objectName().isEmpty())
            accueil->setObjectName(QString::fromUtf8("accueil"));
        accueil->resize(1650, 809);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/projetimages/projetimages/e.png"), QSize(), QIcon::Normal, QIcon::Off);
        accueil->setWindowIcon(icon);
        widget = new QWidget(accueil);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(-10, -180, 1801, 1331));
        widget->setStyleSheet(QString::fromUtf8("background-image: url(:/projetimages/projetimages/hotel-galvez.jpg);"));
        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(190, 830, 1401, 111));
        widget_3->setStyleSheet(QString::fromUtf8("background:transparent;"));
        pushButton = new QPushButton(widget_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(480, 30, 331, 61));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: rgb(135, 0, 0);\n"
"color:rgb(241, 160, 120);\n"
"fontstyle:35px ;\n"
"     border-radius:30px;\n"
"	  width:100px;\n"
"font-family:centry gothlic bold ;\n"
"font-size:23px;\n"
"\n"
" }"));

        retranslateUi(accueil);

        QMetaObject::connectSlotsByName(accueil);
    } // setupUi

    void retranslateUi(QDialog *accueil)
    {
        accueil->setWindowTitle(QCoreApplication::translate("accueil", "Hotel", nullptr));
#if QT_CONFIG(whatsthis)
        pushButton->setWhatsThis(QCoreApplication::translate("accueil", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt;\">Bienvenue</span></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton->setText(QCoreApplication::translate("accueil", "Bienvenue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class accueil: public Ui_accueil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCUEIL_H

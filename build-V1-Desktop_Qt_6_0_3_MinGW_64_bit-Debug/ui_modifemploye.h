/********************************************************************************
** Form generated from reading UI file 'modifemploye.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFEMPLOYE_H
#define UI_MODIFEMPLOYE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModifEmploye
{
public:
    QWidget *widget;
    QLabel *etatcompte_txt;
    QPushButton *activer_desactiver_btn;

    void setupUi(QDialog *ModifEmploye)
    {
        if (ModifEmploye->objectName().isEmpty())
            ModifEmploye->setObjectName(QString::fromUtf8("ModifEmploye"));
        ModifEmploye->resize(562, 218);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/projetimages/projetimages/e.png"), QSize(), QIcon::Normal, QIcon::Off);
        ModifEmploye->setWindowIcon(icon);
        ModifEmploye->setStyleSheet(QString::fromUtf8("\n"
"QDialog\n"
"{\n"
"		background-image: url(:/projetimages/projetimages/a.jpg);\n"
"\n"
"}\n"
"\n"
"*{\n"
"font-family:centry gothlic ;\n"
"font-size:15px;\n"
"}\n"
"QWidget#widget{\n"
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
"\n"
"\n"
"\n"
"\n"
"\n"
"QLabel{\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}\n"
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
"\n"
"color: white;\n"
"border-radius:15px;\n"
"background:rgb(255, 85, 127);\n"
"}\n"
""));
        widget = new QWidget(ModifEmploye);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 491, 161));
        etatcompte_txt = new QLabel(widget);
        etatcompte_txt->setObjectName(QString::fromUtf8("etatcompte_txt"));
        etatcompte_txt->setGeometry(QRect(40, 50, 441, 16));
        activer_desactiver_btn = new QPushButton(widget);
        activer_desactiver_btn->setObjectName(QString::fromUtf8("activer_desactiver_btn"));
        activer_desactiver_btn->setGeometry(QRect(240, 100, 93, 28));

        retranslateUi(ModifEmploye);

        QMetaObject::connectSlotsByName(ModifEmploye);
    } // setupUi

    void retranslateUi(QDialog *ModifEmploye)
    {
        ModifEmploye->setWindowTitle(QCoreApplication::translate("ModifEmploye", "hotel", nullptr));
        etatcompte_txt->setText(QCoreApplication::translate("ModifEmploye", "TextLabel", nullptr));
        activer_desactiver_btn->setText(QCoreApplication::translate("ModifEmploye", "Enregistrer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModifEmploye: public Ui_ModifEmploye {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFEMPLOYE_H

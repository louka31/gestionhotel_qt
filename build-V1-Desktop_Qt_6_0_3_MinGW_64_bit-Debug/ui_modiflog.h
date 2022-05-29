/********************************************************************************
** Form generated from reading UI file 'modiflog.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFLOG_H
#define UI_MODIFLOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModifLog
{
public:
    QWidget *widget;
    QLineEdit *prixlogmodif_txt;
    QLabel *label;
    QLineEdit *typelogmodfi_txt;
    QPushButton *modifiertypelog_btn;
    QLabel *label_2;

    void setupUi(QDialog *ModifLog)
    {
        if (ModifLog->objectName().isEmpty())
            ModifLog->setObjectName(QString::fromUtf8("ModifLog"));
        ModifLog->resize(498, 311);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/projetimages/projetimages/e.png"), QSize(), QIcon::Normal, QIcon::Off);
        ModifLog->setWindowIcon(icon);
        ModifLog->setStyleSheet(QString::fromUtf8("\n"
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
"#label_2{\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}\n"
"\n"
"#label{\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}\n"
"\n"
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
"\n"
"color: white;\n"
"border-radius:15px;\n"
"background:rgb(255, 85, 127);\n"
"}\n"
""));
        widget = new QWidget(ModifLog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 441, 261));
        prixlogmodif_txt = new QLineEdit(widget);
        prixlogmodif_txt->setObjectName(QString::fromUtf8("prixlogmodif_txt"));
        prixlogmodif_txt->setGeometry(QRect(260, 100, 131, 22));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 50, 181, 21));
        typelogmodfi_txt = new QLineEdit(widget);
        typelogmodfi_txt->setObjectName(QString::fromUtf8("typelogmodfi_txt"));
        typelogmodfi_txt->setGeometry(QRect(260, 50, 131, 22));
        modifiertypelog_btn = new QPushButton(widget);
        modifiertypelog_btn->setObjectName(QString::fromUtf8("modifiertypelog_btn"));
        modifiertypelog_btn->setGeometry(QRect(90, 170, 241, 31));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 100, 111, 20));

        retranslateUi(ModifLog);

        QMetaObject::connectSlotsByName(ModifLog);
    } // setupUi

    void retranslateUi(QDialog *ModifLog)
    {
        ModifLog->setWindowTitle(QCoreApplication::translate("ModifLog", "Hotel", nullptr));
        label->setText(QCoreApplication::translate("ModifLog", "Type de logement :", nullptr));
        modifiertypelog_btn->setText(QCoreApplication::translate("ModifLog", "Enregistrer", nullptr));
        label_2->setText(QCoreApplication::translate("ModifLog", "Prix :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModifLog: public Ui_ModifLog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFLOG_H

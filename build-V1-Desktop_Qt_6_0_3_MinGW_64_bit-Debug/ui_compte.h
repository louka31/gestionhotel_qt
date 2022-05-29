/********************************************************************************
** Form generated from reading UI file 'compte.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPTE_H
#define UI_COMPTE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Compte
{
public:
    QFrame *frame;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_4;
    QLineEdit *nomc_txt;
    QLabel *label_5;
    QLineEdit *loginc_txt;
    QPushButton *changermdp_btn;
    QLineEdit *prenomc_txt;
    QDateEdit *datenaissancec_txt;
    QPushButton *modifiercompte_btn;
    QLineEdit *cinc_txt;
    QLabel *label;
    QLineEdit *adressec_txt;
    QLabel *label_2;

    void setupUi(QDialog *Compte)
    {
        if (Compte->objectName().isEmpty())
            Compte->setObjectName(QString::fromUtf8("Compte"));
        Compte->resize(582, 535);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/projetimages/projetimages/e.png"), QSize(), QIcon::Normal, QIcon::Off);
        Compte->setWindowIcon(icon);
        Compte->setStyleSheet(QString::fromUtf8("QComboBox:editable {\n"
"\n"
"    background: white;\n"
"}\n"
"\n"
"QComboBox:!editable, QComboBox::drop-down:editable {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"                                 stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"}\n"
"\n"
"QComboBox:!editable:on, QComboBox::drop-down:editable:on {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #D3D3D3, stop: 0.4 #D8D8D8,\n"
"                                stop: 0.5 #DDDDDD, stop: 1.0 #E1E1E1);\n"
"}\n"
"\n"
"QComboBox:on { /* shift the text when the popup opens */\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;\n"
"\n"
"    border-left-width: 1px;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid; /* just a single line */\n"
"    bord"
                        "er-top-right-radius: 3px; /* same radius as the QComboBox */\n"
"    border-bottom-right-radius: 3px;\n"
"}\n"
"QComboBox {\n"
"    border: 1px solid gray;\n"
"    border-radius: 3px;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;\n"
"}\n"
"QDateEdit {\n"
"    border: 1px solid gray;\n"
"    border-radius: 3px;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;\n"
"}\n"
"QLineEdit\n"
"{\n"
"\n"
"    border: 1px solid gray;\n"
"    border-radius: 4px;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;\n"
"}\n"
"QDialog#Compte\n"
"{\n"
"		background-image: url(:/projetimages/projetimages/a.jpg);\n"
"\n"
"}\n"
"*{\n"
"font-family:centry gothlic ;\n"
"font-size:15px;\n"
"}\n"
"#frame\n"
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
"#label_2\n"
"{\n"
"color:white;\n"
"back"
                        "ground:transparent;\n"
"\n"
"}\n"
"\n"
"\n"
"#label_3{\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}\n"
"\n"
"#label_4{\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}\n"
"\n"
"#label_5{\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}\n"
"\n"
"#label_6{\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}\n"
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
"color: white;\n"
"border-radius:15px;\n"
"background:rgb(255, 85, 127);\n"
"}\n"
""));
        frame = new QFrame(Compte);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(70, 40, 451, 441));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 150, 55, 16));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(90, 200, 61, 16));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(90, 260, 121, 16));
        nomc_txt = new QLineEdit(frame);
        nomc_txt->setObjectName(QString::fromUtf8("nomc_txt"));
        nomc_txt->setGeometry(QRect(240, 30, 131, 22));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 320, 55, 16));
        loginc_txt = new QLineEdit(frame);
        loginc_txt->setObjectName(QString::fromUtf8("loginc_txt"));
        loginc_txt->setGeometry(QRect(240, 320, 131, 22));
        changermdp_btn = new QPushButton(frame);
        changermdp_btn->setObjectName(QString::fromUtf8("changermdp_btn"));
        changermdp_btn->setGeometry(QRect(60, 380, 181, 28));
        prenomc_txt = new QLineEdit(frame);
        prenomc_txt->setObjectName(QString::fromUtf8("prenomc_txt"));
        prenomc_txt->setGeometry(QRect(240, 80, 131, 22));
        datenaissancec_txt = new QDateEdit(frame);
        datenaissancec_txt->setObjectName(QString::fromUtf8("datenaissancec_txt"));
        datenaissancec_txt->setGeometry(QRect(240, 260, 131, 22));
        modifiercompte_btn = new QPushButton(frame);
        modifiercompte_btn->setObjectName(QString::fromUtf8("modifiercompte_btn"));
        modifiercompte_btn->setGeometry(QRect(310, 380, 93, 28));
        cinc_txt = new QLineEdit(frame);
        cinc_txt->setObjectName(QString::fromUtf8("cinc_txt"));
        cinc_txt->setGeometry(QRect(240, 140, 131, 22));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 30, 55, 16));
        adressec_txt = new QLineEdit(frame);
        adressec_txt->setObjectName(QString::fromUtf8("adressec_txt"));
        adressec_txt->setGeometry(QRect(240, 200, 131, 22));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 90, 61, 16));

        retranslateUi(Compte);

        QMetaObject::connectSlotsByName(Compte);
    } // setupUi

    void retranslateUi(QDialog *Compte)
    {
        Compte->setWindowTitle(QCoreApplication::translate("Compte", "Hotel", nullptr));
        label_3->setText(QCoreApplication::translate("Compte", "CIN:", nullptr));
        label_6->setText(QCoreApplication::translate("Compte", "Adresse :", nullptr));
        label_4->setText(QCoreApplication::translate("Compte", "Date de naissance :", nullptr));
        label_5->setText(QCoreApplication::translate("Compte", "Login :", nullptr));
        changermdp_btn->setText(QCoreApplication::translate("Compte", "Changer le mot de passe", nullptr));
        modifiercompte_btn->setText(QCoreApplication::translate("Compte", "Enregistrer", nullptr));
        label->setText(QCoreApplication::translate("Compte", "Nom :", nullptr));
        label_2->setText(QCoreApplication::translate("Compte", "Pr\303\251nom :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Compte: public Ui_Compte {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPTE_H

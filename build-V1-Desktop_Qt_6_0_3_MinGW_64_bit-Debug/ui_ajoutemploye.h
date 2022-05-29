/********************************************************************************
** Form generated from reading UI file 'ajoutemploye.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTEMPLOYE_H
#define UI_AJOUTEMPLOYE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AjoutEmploye
{
public:
    QWidget *widget;
    QLineEdit *mdp2empaj_txt;
    QLabel *label_6;
    QLineEdit *adresseempajout_txt;
    QLineEdit *loginempaj_txt;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *cinempaj_txt;
    QLineEdit *mdp1emaj_txt;
    QLineEdit *nomempaj_ttxt;
    QLabel *label_2;
    QLabel *label_4;
    QDateEdit *datenaissanceemaj_txt;
    QLineEdit *prenomempaji_txt;
    QLabel *label_5;
    QLabel *label_8;
    QPushButton *ajouteremp_btn;
    QLabel *label_7;

    void setupUi(QDialog *AjoutEmploye)
    {
        if (AjoutEmploye->objectName().isEmpty())
            AjoutEmploye->setObjectName(QString::fromUtf8("AjoutEmploye"));
        AjoutEmploye->resize(679, 657);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/projetimages/projetimages/e.png"), QSize(), QIcon::Normal, QIcon::Off);
        AjoutEmploye->setWindowIcon(icon);
        AjoutEmploye->setStyleSheet(QString::fromUtf8("\n"
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
"QDialog#AjoutEmploye\n"
"{\n"
"	background-image: url(:/projetimages/projetimages/a.jpg);\n"
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
"background:transparent;\n"
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
"backgroun"
                        "d:transparent;\n"
"\n"
"}\n"
"\n"
"#label_6{\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}\n"
"\n"
"#label_7{\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}\n"
"\n"
"#label_8{\n"
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
"	color:white;\n"
"border-radius:15px;\n"
"background:rgb(255, 85, 127);\n"
"}\n"
""));
        widget = new QWidget(AjoutEmploye);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(39, 29, 591, 611));
        mdp2empaj_txt = new QLineEdit(widget);
        mdp2empaj_txt->setObjectName(QString::fromUtf8("mdp2empaj_txt"));
        mdp2empaj_txt->setGeometry(QRect(300, 460, 181, 22));
        mdp2empaj_txt->setEchoMode(QLineEdit::Password);
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(110, 410, 221, 16));
        adresseempajout_txt = new QLineEdit(widget);
        adresseempajout_txt->setObjectName(QString::fromUtf8("adresseempajout_txt"));
        adresseempajout_txt->setGeometry(QRect(300, 290, 181, 22));
        loginempaj_txt = new QLineEdit(widget);
        loginempaj_txt->setObjectName(QString::fromUtf8("loginempaj_txt"));
        loginempaj_txt->setGeometry(QRect(300, 350, 181, 22));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 60, 55, 16));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 180, 55, 16));
        cinempaj_txt = new QLineEdit(widget);
        cinempaj_txt->setObjectName(QString::fromUtf8("cinempaj_txt"));
        cinempaj_txt->setGeometry(QRect(300, 170, 181, 22));
        mdp1emaj_txt = new QLineEdit(widget);
        mdp1emaj_txt->setObjectName(QString::fromUtf8("mdp1emaj_txt"));
        mdp1emaj_txt->setGeometry(QRect(300, 410, 181, 22));
        mdp1emaj_txt->setEchoMode(QLineEdit::Password);
        nomempaj_ttxt = new QLineEdit(widget);
        nomempaj_ttxt->setObjectName(QString::fromUtf8("nomempaj_ttxt"));
        nomempaj_ttxt->setGeometry(QRect(300, 60, 181, 22));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 120, 55, 16));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(110, 240, 151, 16));
        datenaissanceemaj_txt = new QDateEdit(widget);
        datenaissanceemaj_txt->setObjectName(QString::fromUtf8("datenaissanceemaj_txt"));
        datenaissanceemaj_txt->setGeometry(QRect(300, 230, 181, 22));
        prenomempaji_txt = new QLineEdit(widget);
        prenomempaji_txt->setObjectName(QString::fromUtf8("prenomempaji_txt"));
        prenomempaji_txt->setGeometry(QRect(300, 110, 181, 22));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(110, 300, 81, 16));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(110, 350, 71, 21));
        ajouteremp_btn = new QPushButton(widget);
        ajouteremp_btn->setObjectName(QString::fromUtf8("ajouteremp_btn"));
        ajouteremp_btn->setGeometry(QRect(200, 540, 181, 31));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(110, 460, 181, 16));

        retranslateUi(AjoutEmploye);

        QMetaObject::connectSlotsByName(AjoutEmploye);
    } // setupUi

    void retranslateUi(QDialog *AjoutEmploye)
    {
        AjoutEmploye->setWindowTitle(QCoreApplication::translate("AjoutEmploye", "Hotel", nullptr));
        label_6->setText(QCoreApplication::translate("AjoutEmploye", "Mot de passe :", nullptr));
        label->setText(QCoreApplication::translate("AjoutEmploye", "Nom :", nullptr));
        label_3->setText(QCoreApplication::translate("AjoutEmploye", "CIN :", nullptr));
        label_2->setText(QCoreApplication::translate("AjoutEmploye", "Pr\303\251nom :", nullptr));
        label_4->setText(QCoreApplication::translate("AjoutEmploye", "Date de naissance :", nullptr));
        label_5->setText(QCoreApplication::translate("AjoutEmploye", "Adresse :", nullptr));
        label_8->setText(QCoreApplication::translate("AjoutEmploye", "Login :", nullptr));
        ajouteremp_btn->setText(QCoreApplication::translate("AjoutEmploye", "Enregistrer", nullptr));
        label_7->setText(QCoreApplication::translate("AjoutEmploye", "Confirmer le mot de passe :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AjoutEmploye: public Ui_AjoutEmploye {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTEMPLOYE_H

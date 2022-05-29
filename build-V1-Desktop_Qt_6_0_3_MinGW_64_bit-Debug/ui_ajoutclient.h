/********************************************************************************
** Form generated from reading UI file 'ajoutclient.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTCLIENT_H
#define UI_AJOUTCLIENT_H

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

class Ui_AjoutClient
{
public:
    QFrame *frame;
    QLineEdit *adresseac_txt;
    QLabel *label_3;
    QLabel *label;
    QDateEdit *daitenaissanceac_txt;
    QLabel *label_6;
    QLineEdit *telephoneac_txt;
    QLabel *label_5;
    QLineEdit *cinac_txt;
    QLabel *label_2;
    QLabel *label_7;
    QLineEdit *prenomac_txt;
    QLineEdit *nomac_txt;
    QPushButton *affecterreservation_btn;
    QLabel *label_4;

    void setupUi(QDialog *AjoutClient)
    {
        if (AjoutClient->objectName().isEmpty())
            AjoutClient->setObjectName(QString::fromUtf8("AjoutClient"));
        AjoutClient->resize(519, 483);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/projetimages/projetimages/e.png"), QSize(), QIcon::Normal, QIcon::Off);
        AjoutClient->setWindowIcon(icon);
        AjoutClient->setStyleSheet(QString::fromUtf8("\n"
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
"QDialog#AjoutClient\n"
"{\n"
"	background-image: url(:/projetimages/projetimages/a.jpg);\n"
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
"background:transpa"
                        "rent;\n"
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
"QPushButton#affecterreservation_btn:hover\n"
"{\n"
"\n"
"	color:white;\n"
"border-radius:15px;\n"
"background:rgb(255, 85, 127);\n"
"}\n"
""));
        frame = new QFrame(AjoutClient);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(70, 20, 371, 451));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        adresseac_txt = new QLineEdit(frame);
        adresseac_txt->setObjectName(QString::fromUtf8("adresseac_txt"));
        adresseac_txt->setGeometry(QRect(180, 290, 131, 22));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 130, 61, 16));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 20, 231, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("centry gothlic"));
        font.setBold(true);
        label->setFont(font);
        daitenaissanceac_txt = new QDateEdit(frame);
        daitenaissanceac_txt->setObjectName(QString::fromUtf8("daitenaissanceac_txt"));
        daitenaissanceac_txt->setGeometry(QRect(180, 240, 131, 22));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 300, 61, 16));
        telephoneac_txt = new QLineEdit(frame);
        telephoneac_txt->setObjectName(QString::fromUtf8("telephoneac_txt"));
        telephoneac_txt->setGeometry(QRect(180, 340, 131, 22));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 240, 121, 16));
        cinac_txt = new QLineEdit(frame);
        cinac_txt->setObjectName(QString::fromUtf8("cinac_txt"));
        cinac_txt->setGeometry(QRect(180, 180, 131, 22));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 70, 55, 16));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(40, 350, 81, 16));
        prenomac_txt = new QLineEdit(frame);
        prenomac_txt->setObjectName(QString::fromUtf8("prenomac_txt"));
        prenomac_txt->setGeometry(QRect(180, 130, 131, 22));
        nomac_txt = new QLineEdit(frame);
        nomac_txt->setObjectName(QString::fromUtf8("nomac_txt"));
        nomac_txt->setGeometry(QRect(180, 70, 131, 22));
        affecterreservation_btn = new QPushButton(frame);
        affecterreservation_btn->setObjectName(QString::fromUtf8("affecterreservation_btn"));
        affecterreservation_btn->setGeometry(QRect(90, 390, 191, 31));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 180, 55, 16));

        retranslateUi(AjoutClient);

        QMetaObject::connectSlotsByName(AjoutClient);
    } // setupUi

    void retranslateUi(QDialog *AjoutClient)
    {
        AjoutClient->setWindowTitle(QCoreApplication::translate("AjoutClient", "Hotel ", nullptr));
        label_3->setText(QCoreApplication::translate("AjoutClient", "Pr\303\251nom :", nullptr));
        label->setText(QCoreApplication::translate("AjoutClient", "Ajout d'un nouveau client", nullptr));
        label_6->setText(QCoreApplication::translate("AjoutClient", "Adresse :", nullptr));
        label_5->setText(QCoreApplication::translate("AjoutClient", "Date de naissance :", nullptr));
        label_2->setText(QCoreApplication::translate("AjoutClient", "Nom :", nullptr));
        label_7->setText(QCoreApplication::translate("AjoutClient", "T\303\251lephone :", nullptr));
        affecterreservation_btn->setText(QCoreApplication::translate("AjoutClient", "Affecter R\303\251servation", nullptr));
        label_4->setText(QCoreApplication::translate("AjoutClient", "CIN :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AjoutClient: public Ui_AjoutClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTCLIENT_H

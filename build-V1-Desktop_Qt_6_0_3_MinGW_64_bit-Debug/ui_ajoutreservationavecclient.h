/********************************************************************************
** Form generated from reading UI file 'ajoutreservationavecclient.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTRESERVATIONAVECCLIENT_H
#define UI_AJOUTRESERVATIONAVECCLIENT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AjoutReservationAvecClient
{
public:
    QFrame *frame;
    QPushButton *ajouterreservation1_btn;
    QLabel *label_5;
    QDateEdit *datedepartar1_txt;
    QLabel *label;
    QComboBox *typelogar1_cb;
    QLabel *label_2;
    QComboBox *numchar1_cb;
    QLabel *label_3;
    QDateEdit *datearrivear1_txt;

    void setupUi(QDialog *AjoutReservationAvecClient)
    {
        if (AjoutReservationAvecClient->objectName().isEmpty())
            AjoutReservationAvecClient->setObjectName(QString::fromUtf8("AjoutReservationAvecClient"));
        AjoutReservationAvecClient->resize(505, 471);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/projetimages/projetimages/e.png"), QSize(), QIcon::Normal, QIcon::Off);
        AjoutReservationAvecClient->setWindowIcon(icon);
        AjoutReservationAvecClient->setStyleSheet(QString::fromUtf8("QComboBox:editable {\n"
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
"    border-to"
                        "p-right-radius: 3px; /* same radius as the QComboBox */\n"
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
"QDialog#AjoutReservationAvecClient\n"
"{background-image:url(:/projetimages/projetimages/a.jpg);\n"
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
""
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
"QPushButton:hover\n"
"{\n"
"\n"
"	color: white;\n"
"border-radius:15px;\n"
"background:rgb(255, 85, 127);\n"
"}\n"
""));
        frame = new QFrame(AjoutReservationAvecClient);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(40, 30, 401, 401));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        ajouterreservation1_btn = new QPushButton(frame);
        ajouterreservation1_btn->setObjectName(QString::fromUtf8("ajouterreservation1_btn"));
        ajouterreservation1_btn->setGeometry(QRect(120, 310, 151, 41));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 220, 151, 31));
        datedepartar1_txt = new QDateEdit(frame);
        datedepartar1_txt->setObjectName(QString::fromUtf8("datedepartar1_txt"));
        datedepartar1_txt->setGeometry(QRect(210, 110, 131, 22));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 50, 111, 16));
        typelogar1_cb = new QComboBox(frame);
        typelogar1_cb->setObjectName(QString::fromUtf8("typelogar1_cb"));
        typelogar1_cb->setGeometry(QRect(210, 230, 131, 22));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 110, 121, 16));
        numchar1_cb = new QComboBox(frame);
        numchar1_cb->setObjectName(QString::fromUtf8("numchar1_cb"));
        numchar1_cb->setGeometry(QRect(210, 170, 131, 22));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 170, 151, 16));
        datearrivear1_txt = new QDateEdit(frame);
        datearrivear1_txt->setObjectName(QString::fromUtf8("datearrivear1_txt"));
        datearrivear1_txt->setGeometry(QRect(210, 50, 131, 22));

        retranslateUi(AjoutReservationAvecClient);

        QMetaObject::connectSlotsByName(AjoutReservationAvecClient);
    } // setupUi

    void retranslateUi(QDialog *AjoutReservationAvecClient)
    {
        AjoutReservationAvecClient->setWindowTitle(QCoreApplication::translate("AjoutReservationAvecClient", "Hotel", nullptr));
        ajouterreservation1_btn->setText(QCoreApplication::translate("AjoutReservationAvecClient", "Ajouter r\303\251servation", nullptr));
        label_5->setText(QCoreApplication::translate("AjoutReservationAvecClient", "Type de logement :", nullptr));
        label->setText(QCoreApplication::translate("AjoutReservationAvecClient", "Date d'arriv\303\251e :", nullptr));
        label_2->setText(QCoreApplication::translate("AjoutReservationAvecClient", "Date de d\303\251part :", nullptr));
        label_3->setText(QCoreApplication::translate("AjoutReservationAvecClient", "Num\303\251ro de chambre :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AjoutReservationAvecClient: public Ui_AjoutReservationAvecClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTRESERVATIONAVECCLIENT_H

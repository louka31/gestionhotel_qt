/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Client
{
public:
    QFrame *frame;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *modifierc_btn;
    QLabel *label_6;
    QLabel *label_5;
    QLineEdit *adressec_txt;
    QDateEdit *datenaissancec_txt;
    QTableView *tableViewC;
    QLineEdit *cinc_txt;
    QLabel *label_2;
    QLineEdit *prenomc_txt;
    QLabel *label;
    QLineEdit *nomc_txt;
    QLineEdit *telephonec_txt;
    QLineEdit *cherclientutil_txt;
    QLabel *label_7;
    QPushButton *supprimer_btn;

    void setupUi(QDialog *Client)
    {
        if (Client->objectName().isEmpty())
            Client->setObjectName(QString::fromUtf8("Client"));
        Client->resize(1432, 530);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/projetimages/projetimages/e.png"), QSize(), QIcon::Normal, QIcon::Off);
        Client->setWindowIcon(icon);
        Client->setStyleSheet(QString::fromUtf8("QTableView {\n"
" selection-background-color:red;\n"
"border-radius:15px;\n"
"}\n"
"QComboBox:editable {\n"
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
"QLineEdit#cherclientutil_txt\n"
"{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"border-bottom:1px solid #717072;\n"
"}\n"
"QComboBox::drop-down {\n"
"    subcontrol-ori"
                        "gin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;\n"
"\n"
"    border-left-width: 1px;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid; /* just a single line */\n"
"    border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
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
"QDialog#Client\n"
"{\n"
"	background-image:url(:/projetimages/projetimages/a.jpg);\n"
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
"QP"
                        "ushButton\n"
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
"#label_7{\n"
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
"QPushButton#modifierc_btn:hover\n"
"{\n"
"color: white;\n"
"border-radius:15px;\n"
"background:rgb(255, 85, 127);\n"
"}\n"
"QPushButton#supprimer_btn:hover\n"
"{\n"
"color: white;\n"
"border-radius:15px;\n"
"background:rgb(255, 85, 127);\n"
"}\n"
""));
        frame = new QFrame(Client);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(40, 30, 1371, 481));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(1080, 180, 55, 16));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(1080, 250, 151, 16));
        modifierc_btn = new QPushButton(frame);
        modifierc_btn->setObjectName(QString::fromUtf8("modifierc_btn"));
        modifierc_btn->setGeometry(QRect(1220, 430, 93, 28));
        modifierc_btn->setFocusPolicy(Qt::NoFocus);
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(1080, 380, 81, 16));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(1080, 310, 55, 16));
        adressec_txt = new QLineEdit(frame);
        adressec_txt->setObjectName(QString::fromUtf8("adressec_txt"));
        adressec_txt->setGeometry(QRect(1220, 310, 131, 22));
        datenaissancec_txt = new QDateEdit(frame);
        datenaissancec_txt->setObjectName(QString::fromUtf8("datenaissancec_txt"));
        datenaissancec_txt->setGeometry(QRect(1220, 250, 131, 22));
        tableViewC = new QTableView(frame);
        tableViewC->setObjectName(QString::fromUtf8("tableViewC"));
        tableViewC->setGeometry(QRect(30, 100, 1011, 361));
        cinc_txt = new QLineEdit(frame);
        cinc_txt->setObjectName(QString::fromUtf8("cinc_txt"));
        cinc_txt->setGeometry(QRect(1220, 180, 131, 22));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(1080, 120, 55, 16));
        prenomc_txt = new QLineEdit(frame);
        prenomc_txt->setObjectName(QString::fromUtf8("prenomc_txt"));
        prenomc_txt->setGeometry(QRect(1220, 110, 131, 22));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(1080, 60, 55, 16));
        nomc_txt = new QLineEdit(frame);
        nomc_txt->setObjectName(QString::fromUtf8("nomc_txt"));
        nomc_txt->setGeometry(QRect(1220, 60, 131, 22));
        telephonec_txt = new QLineEdit(frame);
        telephonec_txt->setObjectName(QString::fromUtf8("telephonec_txt"));
        telephonec_txt->setGeometry(QRect(1220, 380, 131, 22));
        cherclientutil_txt = new QLineEdit(frame);
        cherclientutil_txt->setObjectName(QString::fromUtf8("cherclientutil_txt"));
        cherclientutil_txt->setGeometry(QRect(380, 40, 271, 22));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(150, 50, 231, 16));
        supprimer_btn = new QPushButton(frame);
        supprimer_btn->setObjectName(QString::fromUtf8("supprimer_btn"));
        supprimer_btn->setGeometry(QRect(1100, 430, 93, 28));
        supprimer_btn->setFocusPolicy(Qt::NoFocus);

        retranslateUi(Client);

        QMetaObject::connectSlotsByName(Client);
    } // setupUi

    void retranslateUi(QDialog *Client)
    {
        Client->setWindowTitle(QCoreApplication::translate("Client", " Hotel", nullptr));
        label_3->setText(QCoreApplication::translate("Client", "CIN :", nullptr));
        label_4->setText(QCoreApplication::translate("Client", "Date de naissance : ", nullptr));
        modifierc_btn->setText(QCoreApplication::translate("Client", "Modifier", nullptr));
        label_6->setText(QCoreApplication::translate("Client", "T\303\251lephone :", nullptr));
        label_5->setText(QCoreApplication::translate("Client", "Adresse :", nullptr));
        label_2->setText(QCoreApplication::translate("Client", "Pr\303\251nom :", nullptr));
        label->setText(QCoreApplication::translate("Client", "Nom :", nullptr));
        label_7->setText(QCoreApplication::translate("Client", "Saisir le CIN du client \303\240 chercher :", nullptr));
        supprimer_btn->setText(QCoreApplication::translate("Client", "Supprimer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Client: public Ui_Client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H

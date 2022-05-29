/********************************************************************************
** Form generated from reading UI file 'ajouthotel.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTHOTEL_H
#define UI_AJOUTHOTEL_H

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

class Ui_AjoutHotel
{
public:
    QWidget *widget;
    QLineEdit *prenomadmin_txt;
    QLineEdit *nomhotel_txt;
    QLabel *label_11;
    QLabel *label_3;
    QLineEdit *nomadmin_txt;
    QLineEdit *cinadmin_txt;
    QLineEdit *categoriehotel_txt;
    QLabel *label_10;
    QLabel *label_6;
    QLineEdit *mdpadmin1_txt;
    QLabel *label_4;
    QLineEdit *loginadmin_txt;
    QDateEdit *datenaissance_txt;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_8;
    QLineEdit *mdpadmin2_txt;
    QLineEdit *adressehotel_txt;
    QLabel *label;
    QLineEdit *adresseadmin_txt;
    QLabel *label_2;
    QLabel *label_9;
    QLabel *label_12;
    QPushButton *ajouterhotel2_btn;

    void setupUi(QDialog *AjoutHotel)
    {
        if (AjoutHotel->objectName().isEmpty())
            AjoutHotel->setObjectName(QString::fromUtf8("AjoutHotel"));
        AjoutHotel->resize(984, 658);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/projetimages/projetimages/e.png"), QSize(), QIcon::Normal, QIcon::Off);
        AjoutHotel->setWindowIcon(icon);
        AjoutHotel->setStyleSheet(QString::fromUtf8("\n"
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
"QDialog#AjoutHotel\n"
"{background-image: url(:/projetimages/projetimages/a.jpg);\n"
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
"\n"
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
""
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
"#label_9{\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}#label_10{\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}#label_11{\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}\n"
"QPushButton\n"
" {\n"
"     background-color: red;\n"
"\n"
"     border-radius: 10px;\n"
"\n"
" }\n"
"\n"
"QPushButton\n"
"{\n"
"color:white;\n"
"\n"
"border-raduis:15px;\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"color: white;\n"
"border-radius:15px;\n"
"background:rgb(255, 85, 127);\n"
"}\n"
""));
        widget = new QWidget(AjoutHotel);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 40, 941, 601));
        prenomadmin_txt = new QLineEdit(widget);
        prenomadmin_txt->setObjectName(QString::fromUtf8("prenomadmin_txt"));
        prenomadmin_txt->setGeometry(QRect(220, 180, 171, 22));
        nomhotel_txt = new QLineEdit(widget);
        nomhotel_txt->setObjectName(QString::fromUtf8("nomhotel_txt"));
        nomhotel_txt->setGeometry(QRect(130, 40, 181, 22));
        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 530, 191, 16));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(660, 40, 101, 21));
        nomadmin_txt = new QLineEdit(widget);
        nomadmin_txt->setObjectName(QString::fromUtf8("nomadmin_txt"));
        nomadmin_txt->setGeometry(QRect(220, 120, 171, 22));
        cinadmin_txt = new QLineEdit(widget);
        cinadmin_txt->setObjectName(QString::fromUtf8("cinadmin_txt"));
        cinadmin_txt->setGeometry(QRect(220, 240, 171, 22));
        categoriehotel_txt = new QLineEdit(widget);
        categoriehotel_txt->setObjectName(QString::fromUtf8("categoriehotel_txt"));
        categoriehotel_txt->setGeometry(QRect(750, 40, 181, 22));
        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 470, 101, 16));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 240, 181, 16));
        mdpadmin1_txt = new QLineEdit(widget);
        mdpadmin1_txt->setObjectName(QString::fromUtf8("mdpadmin1_txt"));
        mdpadmin1_txt->setGeometry(QRect(220, 470, 171, 22));
        mdpadmin1_txt->setEchoMode(QLineEdit::Password);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 120, 171, 16));
        loginadmin_txt = new QLineEdit(widget);
        loginadmin_txt->setObjectName(QString::fromUtf8("loginadmin_txt"));
        loginadmin_txt->setGeometry(QRect(220, 410, 171, 22));
        datenaissance_txt = new QDateEdit(widget);
        datenaissance_txt->setObjectName(QString::fromUtf8("datenaissance_txt"));
        datenaissance_txt->setGeometry(QRect(220, 290, 171, 22));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 360, 201, 16));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 180, 191, 16));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 300, 171, 16));
        mdpadmin2_txt = new QLineEdit(widget);
        mdpadmin2_txt->setObjectName(QString::fromUtf8("mdpadmin2_txt"));
        mdpadmin2_txt->setGeometry(QRect(220, 530, 171, 22));
        mdpadmin2_txt->setEchoMode(QLineEdit::Password);
        adressehotel_txt = new QLineEdit(widget);
        adressehotel_txt->setObjectName(QString::fromUtf8("adressehotel_txt"));
        adressehotel_txt->setGeometry(QRect(460, 40, 181, 22));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 40, 101, 16));
        adresseadmin_txt = new QLineEdit(widget);
        adresseadmin_txt->setObjectName(QString::fromUtf8("adresseadmin_txt"));
        adresseadmin_txt->setGeometry(QRect(220, 360, 171, 22));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(320, 40, 141, 21));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 420, 55, 16));
        label_12 = new QLabel(widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(470, 110, 401, 331));
        label_12->setStyleSheet(QString::fromUtf8("image: url(:/projetimages/projetimages/e.png);"));
        ajouterhotel2_btn = new QPushButton(widget);
        ajouterhotel2_btn->setObjectName(QString::fromUtf8("ajouterhotel2_btn"));
        ajouterhotel2_btn->setGeometry(QRect(440, 560, 93, 28));

        retranslateUi(AjoutHotel);

        QMetaObject::connectSlotsByName(AjoutHotel);
    } // setupUi

    void retranslateUi(QDialog *AjoutHotel)
    {
        AjoutHotel->setWindowTitle(QCoreApplication::translate("AjoutHotel", "Hotel", nullptr));
        label_11->setText(QCoreApplication::translate("AjoutHotel", "Confirmer le mot de passe :", nullptr));
        label_3->setText(QCoreApplication::translate("AjoutHotel", "Cat\303\251gorie :", nullptr));
        label_10->setText(QCoreApplication::translate("AjoutHotel", "Mot de passe :", nullptr));
        label_6->setText(QCoreApplication::translate("AjoutHotel", "CIN de l'administrateur :", nullptr));
        label_4->setText(QCoreApplication::translate("AjoutHotel", "Nom de l'administrateur :", nullptr));
        label_7->setText(QCoreApplication::translate("AjoutHotel", "Adresse de l'administrateur :", nullptr));
        label_5->setText(QCoreApplication::translate("AjoutHotel", "Pr\303\251nom de l'administrateur :", nullptr));
        label_8->setText(QCoreApplication::translate("AjoutHotel", "Date de naissance :", nullptr));
        label->setText(QCoreApplication::translate("AjoutHotel", "Nom de l'h\303\264tel :", nullptr));
        label_2->setText(QCoreApplication::translate("AjoutHotel", "Adresse de l'hotel :", nullptr));
        label_9->setText(QCoreApplication::translate("AjoutHotel", "Login :", nullptr));
        label_12->setText(QString());
        ajouterhotel2_btn->setText(QCoreApplication::translate("AjoutHotel", "Ajouter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AjoutHotel: public Ui_AjoutHotel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTHOTEL_H

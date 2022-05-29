/********************************************************************************
** Form generated from reading UI file 'ajoutlogement.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTLOGEMENT_H
#define UI_AJOUTLOGEMENT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AjoutLogement
{
public:
    QWidget *widget;
    QLineEdit *prixlogaj_txt;
    QLabel *label_2;
    QLabel *label;
    QPushButton *ajouterlogement_btn;
    QLineEdit *typelogaj_txt;

    void setupUi(QDialog *AjoutLogement)
    {
        if (AjoutLogement->objectName().isEmpty())
            AjoutLogement->setObjectName(QString::fromUtf8("AjoutLogement"));
        AjoutLogement->resize(505, 287);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/projetimages/projetimages/e.png"), QSize(), QIcon::Normal, QIcon::Off);
        AjoutLogement->setWindowIcon(icon);
        AjoutLogement->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QLineEdit\n"
"{\n"
"\n"
"    border: 1px solid gray;\n"
"    border-radius: 4px;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;\n"
"}\n"
"QDialog#AjoutLogement\n"
"{\n"
"	background-image:url(:/projetimages/projetimages/a.jpg);\n"
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
"#label_2{\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}\n"
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
        widget = new QWidget(AjoutLogement);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 461, 241));
        prixlogaj_txt = new QLineEdit(widget);
        prixlogaj_txt->setObjectName(QString::fromUtf8("prixlogaj_txt"));
        prixlogaj_txt->setGeometry(QRect(210, 90, 151, 22));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(34, 100, 111, 21));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 50, 181, 20));
        ajouterlogement_btn = new QPushButton(widget);
        ajouterlogement_btn->setObjectName(QString::fromUtf8("ajouterlogement_btn"));
        ajouterlogement_btn->setGeometry(QRect(170, 160, 151, 31));
        typelogaj_txt = new QLineEdit(widget);
        typelogaj_txt->setObjectName(QString::fromUtf8("typelogaj_txt"));
        typelogaj_txt->setGeometry(QRect(210, 50, 151, 22));

        retranslateUi(AjoutLogement);

        QMetaObject::connectSlotsByName(AjoutLogement);
    } // setupUi

    void retranslateUi(QDialog *AjoutLogement)
    {
        AjoutLogement->setWindowTitle(QCoreApplication::translate("AjoutLogement", "Hotel", nullptr));
        label_2->setText(QCoreApplication::translate("AjoutLogement", "Prix :", nullptr));
        label->setText(QCoreApplication::translate("AjoutLogement", "Type de logement :", nullptr));
        ajouterlogement_btn->setText(QCoreApplication::translate("AjoutLogement", "Enregistrer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AjoutLogement: public Ui_AjoutLogement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTLOGEMENT_H

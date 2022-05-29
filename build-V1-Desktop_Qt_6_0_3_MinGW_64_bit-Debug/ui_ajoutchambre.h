/********************************************************************************
** Form generated from reading UI file 'ajoutchambre.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTCHAMBRE_H
#define UI_AJOUTCHAMBRE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AjoutChambre
{
public:
    QWidget *widget;
    QPushButton *ajouterch_btn;
    QLineEdit *prixchaj_txt;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *numchaj_txt;

    void setupUi(QDialog *AjoutChambre)
    {
        if (AjoutChambre->objectName().isEmpty())
            AjoutChambre->setObjectName(QString::fromUtf8("AjoutChambre"));
        AjoutChambre->resize(525, 289);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/projetimages/projetimages/e.png"), QSize(), QIcon::Normal, QIcon::Off);
        AjoutChambre->setWindowIcon(icon);
        AjoutChambre->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QLineEdit\n"
"{\n"
"\n"
"    border: 1px solid gray;\n"
"    border-radius: 4px;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;\n"
"}\n"
"QDialog#AjoutChambre\n"
"{\n"
"	\n"
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
"QPushButton#ajouterch_btn:hover\n"
"{\n"
"\n"
"	color:white;\n"
"border-radius:15px;\n"
"background:rgb(255, 85, 127);\n"
"}\n"
""));
        widget = new QWidget(AjoutChambre);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 481, 251));
        ajouterch_btn = new QPushButton(widget);
        ajouterch_btn->setObjectName(QString::fromUtf8("ajouterch_btn"));
        ajouterch_btn->setGeometry(QRect(110, 160, 221, 31));
        prixchaj_txt = new QLineEdit(widget);
        prixchaj_txt->setObjectName(QString::fromUtf8("prixchaj_txt"));
        prixchaj_txt->setGeometry(QRect(310, 100, 131, 22));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 40, 271, 31));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 80, 271, 41));
        numchaj_txt = new QLineEdit(widget);
        numchaj_txt->setObjectName(QString::fromUtf8("numchaj_txt"));
        numchaj_txt->setGeometry(QRect(310, 50, 131, 22));

        retranslateUi(AjoutChambre);

        QMetaObject::connectSlotsByName(AjoutChambre);
    } // setupUi

    void retranslateUi(QDialog *AjoutChambre)
    {
        AjoutChambre->setWindowTitle(QCoreApplication::translate("AjoutChambre", "Hotel", nullptr));
        ajouterch_btn->setText(QCoreApplication::translate("AjoutChambre", "Ajouter", nullptr));
        label->setText(QCoreApplication::translate("AjoutChambre", "Num\303\251ro de chambre :", nullptr));
        label_2->setText(QCoreApplication::translate("AjoutChambre", "Prix de chambre :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AjoutChambre: public Ui_AjoutChambre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTCHAMBRE_H

/********************************************************************************
** Form generated from reading UI file 'modifchambre.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFCHAMBRE_H
#define UI_MODIFCHAMBRE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModifChambre
{
public:
    QWidget *widget;
    QPushButton *modfifierstatutchambre_btn;
    QLabel *statutchambre_txt;
    QLineEdit *prixchambremc_txt;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *numchmc_txt;
    QPushButton *modifierprixchambre_btn;
    QLabel *label_3;

    void setupUi(QDialog *ModifChambre)
    {
        if (ModifChambre->objectName().isEmpty())
            ModifChambre->setObjectName(QString::fromUtf8("ModifChambre"));
        ModifChambre->resize(741, 386);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/projetimages/projetimages/e.png"), QSize(), QIcon::Normal, QIcon::Off);
        ModifChambre->setWindowIcon(icon);
        ModifChambre->setStyleSheet(QString::fromUtf8("\n"
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
"			background-image: url(:/projetimages/projetimages/a.jpg);\n"
"\n"
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
"#numchmc_txt\n"
"{\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}\n"
"\n"
"\n"
"#statutchambre_txt{\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}\n"
"\n"
"#label_3{\n"
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
"	color:white;\n"
"border-radius:15px;\n"
"back"
                        "ground:rgb(255, 85, 127);\n"
"}\n"
""));
        widget = new QWidget(ModifChambre);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 30, 661, 321));
        modfifierstatutchambre_btn = new QPushButton(widget);
        modfifierstatutchambre_btn->setObjectName(QString::fromUtf8("modfifierstatutchambre_btn"));
        modfifierstatutchambre_btn->setGeometry(QRect(430, 190, 161, 31));
        statutchambre_txt = new QLabel(widget);
        statutchambre_txt->setObjectName(QString::fromUtf8("statutchambre_txt"));
        statutchambre_txt->setGeometry(QRect(180, 190, 191, 16));
        prixchambremc_txt = new QLineEdit(widget);
        prixchambremc_txt->setObjectName(QString::fromUtf8("prixchambremc_txt"));
        prixchambremc_txt->setGeometry(QRect(230, 120, 131, 22));
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 50, 218, 20));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        numchmc_txt = new QLabel(layoutWidget);
        numchmc_txt->setObjectName(QString::fromUtf8("numchmc_txt"));

        horizontalLayout->addWidget(numchmc_txt);

        modifierprixchambre_btn = new QPushButton(widget);
        modifierprixchambre_btn->setObjectName(QString::fromUtf8("modifierprixchambre_btn"));
        modifierprixchambre_btn->setGeometry(QRect(430, 110, 171, 31));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 120, 131, 21));

        retranslateUi(ModifChambre);

        QMetaObject::connectSlotsByName(ModifChambre);
    } // setupUi

    void retranslateUi(QDialog *ModifChambre)
    {
        ModifChambre->setWindowTitle(QCoreApplication::translate("ModifChambre", "Hotel", nullptr));
        modfifierstatutchambre_btn->setText(QCoreApplication::translate("ModifChambre", "Modifier statut", nullptr));
        statutchambre_txt->setText(QCoreApplication::translate("ModifChambre", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("ModifChambre", "Num\303\251ro de chambre :", nullptr));
        numchmc_txt->setText(QCoreApplication::translate("ModifChambre", "TextLabel", nullptr));
        modifierprixchambre_btn->setText(QCoreApplication::translate("ModifChambre", "Modifier prix", nullptr));
        label_3->setText(QCoreApplication::translate("ModifChambre", "Prix :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModifChambre: public Ui_ModifChambre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFCHAMBRE_H

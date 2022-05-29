/********************************************************************************
** Form generated from reading UI file 'sejourtermine.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEJOURTERMINE_H
#define UI_SEJOURTERMINE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SejourTermine
{
public:
    QFrame *frame;
    QLabel *prenomts_txt;
    QLabel *fraisejour_txt;
    QLabel *label_2;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *cints_txt;
    QLabel *numchts_txt;
    QLabel *typelogts_txt;
    QLabel *label_5;
    QLabel *nbrsejour_txt;
    QLabel *label_13;
    QLabel *dpts_txt;
    QLabel *dats_txt;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label;
    QLabel *nomts_txt;
    QLabel *label_3;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_14;
    QLabel *label_8;
    QPushButton *confirmerts_btn;

    void setupUi(QDialog *SejourTermine)
    {
        if (SejourTermine->objectName().isEmpty())
            SejourTermine->setObjectName(QString::fromUtf8("SejourTermine"));
        SejourTermine->resize(607, 646);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/projetimages/projetimages/e.png"), QSize(), QIcon::Normal, QIcon::Off);
        SejourTermine->setWindowIcon(icon);
        SejourTermine->setStyleSheet(QString::fromUtf8("#numchts_txt\n"
"{\n"
"color:black;\n"
"background:transparent;\n"
"\n"
"}#typelogts_txt\n"
"{\n"
"color:black;\n"
"background:transparent;\n"
"\n"
"}#prenomts_txt\n"
"{\n"
"color:black;\n"
"background:transparent;\n"
"\n"
"}\n"
"#dats_txt\n"
"{\n"
"color:black;\n"
"background:transparent;\n"
"\n"
"}\n"
"#fraisejour_txt\n"
"{\n"
"color:black;\n"
"background:transparent;\n"
"\n"
"}\n"
"#dpts_txt\n"
"{\n"
"color:black;\n"
"background:transparent;\n"
"\n"
"}\n"
"#cints_txt\n"
"{\n"
"color:black;\n"
"background:transparent;\n"
"\n"
"}\n"
"#nomts_txt\n"
"{\n"
"color:black;\n"
"background:transparent;\n"
"\n"
"}\n"
"#nbrsejour_txt\n"
"{\n"
"color:black;\n"
"background:transparent;\n"
"\n"
"}\n"
"#label_numero\n"
"{\n"
"color:black;\n"
"background:transparent;\n"
"\n"
"}\n"
"QDialog#SejourTermine\n"
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
"	background:rgb(255, 255, 255);\n"
"border-radius:1"
                        "5px;\n"
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
"#label\n"
"{\n"
"color:black;\n"
"background:transparent;\n"
"\n"
"}\n"
"#label_2\n"
"{\n"
"color:black;\n"
"background:transparent;\n"
"\n"
"}\n"
"#label_3\n"
"{\n"
"color:black;\n"
"background:transparent;\n"
"\n"
"}\n"
"#label_4\n"
"{\n"
"color:black;\n"
"background:transparent;\n"
"\n"
"}\n"
"#label_5\n"
"{\n"
"color:black;\n"
"background:transparent;\n"
"\n"
"}\n"
"\n"
"#label_6\n"
"{\n"
"color:black;\n"
"background:transparent;\n"
"\n"
"}#label_7\n"
"{\n"
"color:black;\n"
"background:transparent;\n"
"\n"
"}#label_8\n"
"{\n"
"color:black;\n"
"background:transparent;\n"
"\n"
"}#label_9\n"
"{\n"
"color:black;\n"
"background:transparent;\n"
"\n"
"}#label_10\n"
"{\n"
"color:black;\n"
"background:transparent;\n"
"\n"
"}#label_11\n"
"{\n"
"color:black;\n"
"background:transparent;\n"
"\n"
"}#label_12\n"
"{\n"
"color:black;\n"
"background:transparent;\n"
"\n"
"}#label_13\n"
"{\n"
""
                        "color:black;\n"
"background:transparent;\n"
"\n"
"}#label_14\n"
"{\n"
"color:black;\n"
"background:transparent;\n"
"\n"
"}\n"
"#numero\n"
"{\n"
"color:black;\n"
"background:transparent;\n"
"\n"
"}\n"
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
        frame = new QFrame(SejourTermine);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(30, 30, 551, 551));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        prenomts_txt = new QLabel(frame);
        prenomts_txt->setObjectName(QString::fromUtf8("prenomts_txt"));
        prenomts_txt->setGeometry(QRect(100, 280, 55, 16));
        fraisejour_txt = new QLabel(frame);
        fraisejour_txt->setObjectName(QString::fromUtf8("fraisejour_txt"));
        fraisejour_txt->setGeometry(QRect(450, 440, 81, 16));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(300, 330, 111, 21));
        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(30, 230, 55, 16));
        label_11 = new QLabel(frame);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(30, 280, 71, 16));
        cints_txt = new QLabel(frame);
        cints_txt->setObjectName(QString::fromUtf8("cints_txt"));
        cints_txt->setGeometry(QRect(100, 340, 111, 16));
        numchts_txt = new QLabel(frame);
        numchts_txt->setObjectName(QString::fromUtf8("numchts_txt"));
        numchts_txt->setGeometry(QRect(184, 390, 51, 20));
        typelogts_txt = new QLabel(frame);
        typelogts_txt->setObjectName(QString::fromUtf8("typelogts_txt"));
        typelogts_txt->setGeometry(QRect(150, 450, 131, 16));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 390, 161, 21));
        nbrsejour_txt = new QLabel(frame);
        nbrsejour_txt->setObjectName(QString::fromUtf8("nbrsejour_txt"));
        nbrsejour_txt->setGeometry(QRect(450, 390, 81, 16));
        label_13 = new QLabel(frame);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(30, 340, 55, 16));
        dpts_txt = new QLabel(frame);
        dpts_txt->setObjectName(QString::fromUtf8("dpts_txt"));
        dpts_txt->setGeometry(QRect(450, 330, 111, 16));
        dats_txt = new QLabel(frame);
        dats_txt->setObjectName(QString::fromUtf8("dats_txt"));
        dats_txt->setGeometry(QRect(450, 280, 91, 16));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(300, 440, 121, 21));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 440, 121, 31));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(300, 280, 101, 20));
        nomts_txt = new QLabel(frame);
        nomts_txt->setObjectName(QString::fromUtf8("nomts_txt"));
        nomts_txt->setGeometry(QRect(100, 230, 55, 16));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(300, 390, 131, 16));
        label_10 = new QLabel(frame);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(34, 86, 81, 20));
        label_12 = new QLabel(frame);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(100, 90, 101, 16));
        label_14 = new QLabel(frame);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(270, 10, 241, 201));
        label_14->setStyleSheet(QString::fromUtf8("\n"
"image: url(:/projetimages/projetimages/e.png);"));
        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(320, 190, 181, 41));
        confirmerts_btn = new QPushButton(SejourTermine);
        confirmerts_btn->setObjectName(QString::fromUtf8("confirmerts_btn"));
        confirmerts_btn->setGeometry(QRect(230, 600, 151, 28));

        retranslateUi(SejourTermine);

        QMetaObject::connectSlotsByName(SejourTermine);
    } // setupUi

    void retranslateUi(QDialog *SejourTermine)
    {
        SejourTermine->setWindowTitle(QCoreApplication::translate("SejourTermine", " Hotel", nullptr));
        prenomts_txt->setText(QCoreApplication::translate("SejourTermine", "TextLabel", nullptr));
        fraisejour_txt->setText(QCoreApplication::translate("SejourTermine", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("SejourTermine", "Date d\303\251part :", nullptr));
        label_9->setText(QCoreApplication::translate("SejourTermine", "Nom :", nullptr));
        label_11->setText(QCoreApplication::translate("SejourTermine", "Pr\303\251nom :", nullptr));
        cints_txt->setText(QCoreApplication::translate("SejourTermine", "TextLabel", nullptr));
        numchts_txt->setText(QCoreApplication::translate("SejourTermine", "TextLabel", nullptr));
        typelogts_txt->setText(QCoreApplication::translate("SejourTermine", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("SejourTermine", "Num\303\251ro de chambre :", nullptr));
        nbrsejour_txt->setText(QCoreApplication::translate("SejourTermine", "TextLabel", nullptr));
        label_13->setText(QCoreApplication::translate("SejourTermine", "CIN :", nullptr));
        dpts_txt->setText(QCoreApplication::translate("SejourTermine", "TextLabel", nullptr));
        dats_txt->setText(QCoreApplication::translate("SejourTermine", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("SejourTermine", "Frais de s\303\251jour :", nullptr));
        label_6->setText(QCoreApplication::translate("SejourTermine", "Type logement :", nullptr));
        label->setText(QCoreApplication::translate("SejourTermine", "Date arriv\303\251e :", nullptr));
        nomts_txt->setText(QCoreApplication::translate("SejourTermine", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("SejourTermine", "Nombre de s\303\251jour :", nullptr));
        label_10->setText(QCoreApplication::translate("SejourTermine", "Date :", nullptr));
        label_12->setText(QCoreApplication::translate("SejourTermine", "TextLabel", nullptr));
        label_14->setText(QString());
        label_8->setText(QCoreApplication::translate("SejourTermine", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; color:#ff0000;\"> Hotel</span></p></body></html>", nullptr));
        confirmerts_btn->setText(QCoreApplication::translate("SejourTermine", "Terminer s\303\251jour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SejourTermine: public Ui_SejourTermine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEJOURTERMINE_H

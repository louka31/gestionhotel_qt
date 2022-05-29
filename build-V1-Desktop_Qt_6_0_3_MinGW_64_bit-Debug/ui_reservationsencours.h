/********************************************************************************
** Form generated from reading UI file 'reservationsencours.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESERVATIONSENCOURS_H
#define UI_RESERVATIONSENCOURS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReservationsEnCours
{
public:
    QWidget *widget;
    QLineEdit *cher_ch_cin1_txt;
    QComboBox *typelogement_cb;
    QPushButton *Compteutili_btn;
    QTableView *tableView;
    QPushButton *modifierreservation_btn;
    QPushButton *annulerreservation_btn;
    QComboBox *numchambre_cb;
    QPushButton *historique_btn;
    QLabel *label_5;
    QPushButton *terminersejour_btn;
    QDateEdit *datearrivee_edit;
    QDateEdit *datedepart_edit;
    QPushButton *client_btn;
    QPushButton *chambreutil_btn;
    QPushButton *ajouterreservation_btn;
    QPushButton *typelogutil_btn;
    QLabel *Nom;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *quitterutil_btn;
    QLabel *label_8;
    QLabel *nomresencours;
    QLabel *prenomresencours;
    QLabel *cinresencours;
    QLabel *label_9;
    QLabel *label_10;

    void setupUi(QDialog *ReservationsEnCours)
    {
        if (ReservationsEnCours->objectName().isEmpty())
            ReservationsEnCours->setObjectName(QString::fromUtf8("ReservationsEnCours"));
        ReservationsEnCours->setEnabled(true);
        ReservationsEnCours->resize(1551, 799);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/projetimages/projetimages/e.png"), QSize(), QIcon::Normal, QIcon::Off);
        ReservationsEnCours->setWindowIcon(icon);
        ReservationsEnCours->setStyleSheet(QString::fromUtf8("QTableView {\n"
"    selection-background-color:red;\n"
"border-radius:15px;\n"
"}\n"
"QDateEdit {\n"
"    border: 1px solid gray;\n"
"    border-radius: 3px;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;\n"
"}\n"
"QComboBox {\n"
"    border: 1px solid gray;\n"
"    border-radius: 3px;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;\n"
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
"QComboBox:on { /* shift th"
                        "e text when the popup opens */\n"
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
"    border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
"    border-bottom-right-radius: 3px;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(/usr/share/icons/crystalsvg/16x16/actions/1downarrow.png);\n"
"}\n"
"\n"
"QComboBox::down-arrow:on { /* shift the arrow when popup is open */\n"
"    top: 1px;\n"
"    left: 1px;\n"
"}\n"
"QDialog#ReservationsEnCours\n"
"{\n"
"		background-image: url(:/projetimages/projetimages/a.jpg);\n"
"\n"
"}\n"
"*{\n"
"font-family:centry gothlic ;\n"
"font-size:15px;\n"
"}\n"
"#widget\n"
"{\n"
"\n"
"	background:rgba(0,0,0,0.7);\n"
"border-radius:15px;\n"
"}\n"
" QPushButton#pushButton\n"
" {\n"
"     backgro"
                        "und-color: red;\n"
"\n"
"     border-radius:50px;\n"
"	  width:100px;\n"
"\n"
" }\n"
"\n"
"QPushButton\n"
" {\n"
"     background-color: red;\n"
"\n"
"     border-radius: 10px;\n"
"font-size:22px;\n"
"\n"
"\n"
" }\n"
"\n"
"QPushButton#modifierreservation_btn\n"
" {\n"
"     background-color: red;\n"
"\n"
"     border-radius: 10px;\n"
"font-size:15px;\n"
"\n"
"\n"
" }\n"
"QPushButton#annulerreservation_btn\n"
" {\n"
"     background-color: red;\n"
"\n"
"     border-radius: 10px;\n"
"font-size:15px;\n"
"\n"
"\n"
" }\n"
"\n"
"QPushButton#terminersejour_btn\n"
" {\n"
"     background-color: red;\n"
"\n"
"     border-radius: 10px;\n"
"font-size:15px;\n"
"\n"
"\n"
" }\n"
"QToolButton#toolButton\n"
"{\n"
"backgroun:red;\n"
"border-radius:60px;\n"
"}\n"
"#label\n"
"{\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}\n"
"#label_2\n"
"{\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}\n"
"#cinresencours{\n"
"color:white;\n"
"background:transparent;\n"
"font:bold;\n"
"\n"
"\n"
"}\n"
"#label_3\n"
"{\n"
"color"
                        ":white;\n"
"background:transparent;\n"
"\n"
"}\n"
"#label_4\n"
"{\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}\n"
"#label_5\n"
"{\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}\n"
"#label_6\n"
"{\n"
"font-size:25px;\n"
"\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}\n"
"#label_7\n"
"{\n"
"font-size:25px;\n"
"\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}\n"
"#Nom\n"
"{\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}\n"
"\n"
"#nomresencours{\n"
"color:white;\n"
"background:transparent;\n"
"font:bold;\n"
"\n"
"\n"
"}\n"
"#prenomresencours{\n"
"color:white;\n"
"background:transparent;\n"
"font:bold;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"#label_8\n"
"{\n"
"color:white;\n"
"background:transparent;\n"
"font:bold;\n"
"\n"
"\n"
"}#label_9\n"
"{\n"
"color:white;\n"
"background:transparent;\n"
"font:bold;\n"
"\n"
"\n"
"}#label_10\n"
"{\n"
"color:white;\n"
"background:transparent;\n"
"font:bold;\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton\n"
"{\n"
"color:white;\n"
"\n"
"border-r"
                        "aduis:15px;\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton#annulerreservation_btn:hover{\n"
"color: white;\n"
"border-radius:15px;\n"
"background:rgb(255, 85, 127);\n"
"}\n"
"\n"
"\n"
"QPushButton#modifierreservation_btn:hover{\n"
"color: white;\n"
"border-radius:15px;\n"
"background:rgb(255, 85, 127);\n"
"}\n"
"\n"
"\n"
"QPushButton#terminersejour_btn:hover{\n"
"color: white;\n"
"border-radius:15px;\n"
"background:rgb(255, 85, 127);\n"
"}\n"
"\n"
"\n"
"QPushButton:hover\n"
"{\n"
"color: white;\n"
"border-radius:15px;\n"
"background:rgb(255, 85, 127);\n"
"}\n"
"QLineEdit#cher_ch_cin1_txt\n"
"{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"border-bottom:1px solid #717072;\n"
"}"));
        widget = new QWidget(ReservationsEnCours);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 1511, 761));
        cher_ch_cin1_txt = new QLineEdit(widget);
        cher_ch_cin1_txt->setObjectName(QString::fromUtf8("cher_ch_cin1_txt"));
        cher_ch_cin1_txt->setGeometry(QRect(970, 110, 341, 22));
        typelogement_cb = new QComboBox(widget);
        typelogement_cb->setObjectName(QString::fromUtf8("typelogement_cb"));
        typelogement_cb->setGeometry(QRect(170, 520, 131, 22));
        Compteutili_btn = new QPushButton(widget);
        Compteutili_btn->setObjectName(QString::fromUtf8("Compteutili_btn"));
        Compteutili_btn->setGeometry(QRect(30, 40, 41, 31));
        Compteutili_btn->setFocusPolicy(Qt::NoFocus);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/projetimages/projetimages/aaa.png"), QSize(), QIcon::Normal, QIcon::Off);
        Compteutili_btn->setIcon(icon1);
        tableView = new QTableView(widget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(330, 170, 1141, 571));
        modifierreservation_btn = new QPushButton(widget);
        modifierreservation_btn->setObjectName(QString::fromUtf8("modifierreservation_btn"));
        modifierreservation_btn->setGeometry(QRect(20, 580, 141, 28));
        modifierreservation_btn->setFocusPolicy(Qt::NoFocus);
        annulerreservation_btn = new QPushButton(widget);
        annulerreservation_btn->setObjectName(QString::fromUtf8("annulerreservation_btn"));
        annulerreservation_btn->setGeometry(QRect(90, 640, 151, 28));
        annulerreservation_btn->setFocusPolicy(Qt::NoFocus);
        numchambre_cb = new QComboBox(widget);
        numchambre_cb->setObjectName(QString::fromUtf8("numchambre_cb"));
        numchambre_cb->setGeometry(QRect(170, 480, 131, 22));
        historique_btn = new QPushButton(widget);
        historique_btn->setObjectName(QString::fromUtf8("historique_btn"));
        historique_btn->setGeometry(QRect(540, 40, 201, 31));
        historique_btn->setFocusPolicy(Qt::NoFocus);
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(450, 120, 491, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("centry gothlic"));
        font.setBold(true);
        font.setItalic(true);
        label_5->setFont(font);
        terminersejour_btn = new QPushButton(widget);
        terminersejour_btn->setObjectName(QString::fromUtf8("terminersejour_btn"));
        terminersejour_btn->setGeometry(QRect(170, 580, 121, 28));
        terminersejour_btn->setFocusPolicy(Qt::NoFocus);
        datearrivee_edit = new QDateEdit(widget);
        datearrivee_edit->setObjectName(QString::fromUtf8("datearrivee_edit"));
        datearrivee_edit->setGeometry(QRect(170, 390, 131, 22));
        datedepart_edit = new QDateEdit(widget);
        datedepart_edit->setObjectName(QString::fromUtf8("datedepart_edit"));
        datedepart_edit->setGeometry(QRect(170, 430, 131, 22));
        client_btn = new QPushButton(widget);
        client_btn->setObjectName(QString::fromUtf8("client_btn"));
        client_btn->setGeometry(QRect(780, 40, 171, 31));
        client_btn->setFocusPolicy(Qt::NoFocus);
        chambreutil_btn = new QPushButton(widget);
        chambreutil_btn->setObjectName(QString::fromUtf8("chambreutil_btn"));
        chambreutil_btn->setGeometry(QRect(1240, 40, 181, 31));
        chambreutil_btn->setFocusPolicy(Qt::NoFocus);
        ajouterreservation_btn = new QPushButton(widget);
        ajouterreservation_btn->setObjectName(QString::fromUtf8("ajouterreservation_btn"));
        ajouterreservation_btn->setGeometry(QRect(280, 40, 221, 31));
        ajouterreservation_btn->setFocusPolicy(Qt::NoFocus);
        typelogutil_btn = new QPushButton(widget);
        typelogutil_btn->setObjectName(QString::fromUtf8("typelogutil_btn"));
        typelogutil_btn->setGeometry(QRect(990, 40, 211, 31));
        typelogutil_btn->setFocusPolicy(Qt::NoFocus);
        Nom = new QLabel(widget);
        Nom->setObjectName(QString::fromUtf8("Nom"));
        Nom->setGeometry(QRect(80, 40, 181, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("centry gothlic"));
        font1.setBold(true);
        Nom->setFont(font1);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 520, 131, 21));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 440, 101, 16));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 480, 141, 16));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 390, 81, 16));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(60, 140, 251, 31));
        label_6->setFont(font1);
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(70, 170, 201, 41));
        label_7->setFont(font1);
        quitterutil_btn = new QPushButton(widget);
        quitterutil_btn->setObjectName(QString::fromUtf8("quitterutil_btn"));
        quitterutil_btn->setGeometry(QRect(1440, 40, 61, 31));
        quitterutil_btn->setFocusPolicy(Qt::NoFocus);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/projetimages/projetimages/aa.png"), QSize(), QIcon::Normal, QIcon::Off);
        quitterutil_btn->setIcon(icon2);
        quitterutil_btn->setAutoDefault(true);
        quitterutil_btn->setFlat(false);
        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 330, 61, 21));
        nomresencours = new QLabel(widget);
        nomresencours->setObjectName(QString::fromUtf8("nomresencours"));
        nomresencours->setGeometry(QRect(130, 240, 151, 31));
        prenomresencours = new QLabel(widget);
        prenomresencours->setObjectName(QString::fromUtf8("prenomresencours"));
        prenomresencours->setGeometry(QRect(130, 290, 151, 21));
        cinresencours = new QLabel(widget);
        cinresencours->setObjectName(QString::fromUtf8("cinresencours"));
        cinresencours->setGeometry(QRect(130, 340, 161, 20));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 240, 61, 31));
        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 290, 71, 21));

        retranslateUi(ReservationsEnCours);

        QMetaObject::connectSlotsByName(ReservationsEnCours);
    } // setupUi

    void retranslateUi(QDialog *ReservationsEnCours)
    {
        ReservationsEnCours->setWindowTitle(QCoreApplication::translate("ReservationsEnCours", " Hotel", nullptr));
        Compteutili_btn->setText(QString());
        modifierreservation_btn->setText(QCoreApplication::translate("ReservationsEnCours", "Modifier r\303\251servation", nullptr));
        annulerreservation_btn->setText(QCoreApplication::translate("ReservationsEnCours", "Annuler r\303\251servation", nullptr));
        historique_btn->setText(QCoreApplication::translate("ReservationsEnCours", "Historique", nullptr));
        label_5->setText(QCoreApplication::translate("ReservationsEnCours", "Entrer le num\303\251ro de chambre ou le CIN de client \303\240 chercher :", nullptr));
        terminersejour_btn->setText(QCoreApplication::translate("ReservationsEnCours", "Terminer s\303\251jour", nullptr));
        client_btn->setText(QCoreApplication::translate("ReservationsEnCours", "Clients", nullptr));
        chambreutil_btn->setText(QCoreApplication::translate("ReservationsEnCours", "Chambres", nullptr));
        ajouterreservation_btn->setText(QCoreApplication::translate("ReservationsEnCours", "Ajouter r\303\251servation", nullptr));
        typelogutil_btn->setText(QCoreApplication::translate("ReservationsEnCours", "Types de logements", nullptr));
        Nom->setText(QString());
        label_4->setText(QCoreApplication::translate("ReservationsEnCours", "Type de logement", nullptr));
        label_2->setText(QCoreApplication::translate("ReservationsEnCours", "Date d\303\251part", nullptr));
        label_3->setText(QCoreApplication::translate("ReservationsEnCours", "Num\303\251ro de chambre", nullptr));
        label->setText(QCoreApplication::translate("ReservationsEnCours", "Date arriv\303\251e", nullptr));
        label_6->setText(QCoreApplication::translate("ReservationsEnCours", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("ReservationsEnCours", "TextLabel", nullptr));
        quitterutil_btn->setText(QString());
        label_8->setText(QCoreApplication::translate("ReservationsEnCours", "CIN :", nullptr));
        nomresencours->setText(QCoreApplication::translate("ReservationsEnCours", "TextLabel", nullptr));
        prenomresencours->setText(QCoreApplication::translate("ReservationsEnCours", "TextLabel", nullptr));
        cinresencours->setText(QCoreApplication::translate("ReservationsEnCours", "TextLabel", nullptr));
        label_9->setText(QCoreApplication::translate("ReservationsEnCours", "Nom :", nullptr));
        label_10->setText(QCoreApplication::translate("ReservationsEnCours", "Pr\303\251nom :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReservationsEnCours: public Ui_ReservationsEnCours {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESERVATIONSENCOURS_H

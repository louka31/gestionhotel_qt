/********************************************************************************
** Form generated from reading UI file 'nouveaumotdepasse.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOUVEAUMOTDEPASSE_H
#define UI_NOUVEAUMOTDEPASSE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_NouveauMotDePasse
{
public:
    QFrame *frame;
    QLineEdit *nouvmdp_txt;
    QLabel *label_3;
    QLineEdit *nouvmdp2_txt;
    QLabel *label;
    QPushButton *modifmdp_btn;

    void setupUi(QDialog *NouveauMotDePasse)
    {
        if (NouveauMotDePasse->objectName().isEmpty())
            NouveauMotDePasse->setObjectName(QString::fromUtf8("NouveauMotDePasse"));
        NouveauMotDePasse->resize(648, 230);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/projetimages/projetimages/e.png"), QSize(), QIcon::Normal, QIcon::Off);
        NouveauMotDePasse->setWindowIcon(icon);
        NouveauMotDePasse->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"border-bottom:1px solid #717072;\n"
"}\n"
"QDialog#NouveauMotDePasse\n"
"{\n"
"		background-image: url(:/projetimages/projetimages/a.jpg);\n"
"\n"
"}\n"
"\n"
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
"\n"
"\n"
"\n"
"\n"
"\n"
"#label_3{\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}\n"
"\n"
"#label{\n"
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
"color: white;\n"
"border-radius:15px;\n"
"background:rgb(255, 85, 127);\n"
"}\n"
""));
        frame = new QFrame(NouveauMotDePasse);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(19, 19, 601, 191));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        nouvmdp_txt = new QLineEdit(frame);
        nouvmdp_txt->setObjectName(QString::fromUtf8("nouvmdp_txt"));
        nouvmdp_txt->setGeometry(QRect(310, 20, 251, 22));
        nouvmdp_txt->setEchoMode(QLineEdit::Password);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 80, 281, 16));
        nouvmdp2_txt = new QLineEdit(frame);
        nouvmdp2_txt->setObjectName(QString::fromUtf8("nouvmdp2_txt"));
        nouvmdp2_txt->setGeometry(QRect(310, 70, 251, 22));
        nouvmdp2_txt->setEchoMode(QLineEdit::Password);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 251, 16));
        modifmdp_btn = new QPushButton(frame);
        modifmdp_btn->setObjectName(QString::fromUtf8("modifmdp_btn"));
        modifmdp_btn->setGeometry(QRect(210, 110, 93, 28));

        retranslateUi(NouveauMotDePasse);

        QMetaObject::connectSlotsByName(NouveauMotDePasse);
    } // setupUi

    void retranslateUi(QDialog *NouveauMotDePasse)
    {
        NouveauMotDePasse->setWindowTitle(QCoreApplication::translate("NouveauMotDePasse", " Hotel", nullptr));
        label_3->setText(QCoreApplication::translate("NouveauMotDePasse", "Confirmer votre nouveau mot de passe :", nullptr));
        label->setText(QCoreApplication::translate("NouveauMotDePasse", "Saissir vote nouveau mot de passse :", nullptr));
        modifmdp_btn->setText(QCoreApplication::translate("NouveauMotDePasse", "Enregistrer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NouveauMotDePasse: public Ui_NouveauMotDePasse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOUVEAUMOTDEPASSE_H

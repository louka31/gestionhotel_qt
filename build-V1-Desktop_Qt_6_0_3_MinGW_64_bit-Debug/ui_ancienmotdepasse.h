/********************************************************************************
** Form generated from reading UI file 'ancienmotdepasse.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANCIENMOTDEPASSE_H
#define UI_ANCIENMOTDEPASSE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AncienMotDePasse
{
public:
    QFrame *frame;
    QLineEdit *ancienmdp_txt;
    QLabel *label_2;
    QPushButton *ancienmdp_btn;
    QLabel *label;

    void setupUi(QDialog *AncienMotDePasse)
    {
        if (AncienMotDePasse->objectName().isEmpty())
            AncienMotDePasse->setObjectName(QString::fromUtf8("AncienMotDePasse"));
        AncienMotDePasse->resize(684, 249);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/projetimages/projetimages/e.png"), QSize(), QIcon::Normal, QIcon::Off);
        AncienMotDePasse->setWindowIcon(icon);
        AncienMotDePasse->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"border-bottom:1px solid #717072;\n"
"}\n"
"QDialog#AncienMotDePasse\n"
"{\n"
"	background-image:url(:/projetimages/projetimages/a.jpg);\n"
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
"#label_2{\n"
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
"QPushButton#ancienmdp_btn:hover\n"
"{\n"
"\n"
"color: white;\n"
"border-radius:15px;\n"
"background:rgb(255, 85, 127);\n"
"}\n"
""));
        frame = new QFrame(AncienMotDePasse);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(50, 40, 601, 161));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        ancienmdp_txt = new QLineEdit(frame);
        ancienmdp_txt->setObjectName(QString::fromUtf8("ancienmdp_txt"));
        ancienmdp_txt->setGeometry(QRect(300, 50, 251, 22));
        ancienmdp_txt->setEchoMode(QLineEdit::Password);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(224, 60, 191, 20));
        ancienmdp_btn = new QPushButton(frame);
        ancienmdp_btn->setObjectName(QString::fromUtf8("ancienmdp_btn"));
        ancienmdp_btn->setGeometry(QRect(220, 110, 93, 28));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 50, 241, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("centry gothlic"));
        font.setBold(true);
        label->setFont(font);

        retranslateUi(AncienMotDePasse);

        QMetaObject::connectSlotsByName(AncienMotDePasse);
    } // setupUi

    void retranslateUi(QDialog *AncienMotDePasse)
    {
        AncienMotDePasse->setWindowTitle(QCoreApplication::translate("AncienMotDePasse", "Hotel", nullptr));
        label_2->setText(QString());
        ancienmdp_btn->setText(QCoreApplication::translate("AncienMotDePasse", "Ok", nullptr));
        label->setText(QCoreApplication::translate("AncienMotDePasse", "Saisir l'ancien mot de passe :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AncienMotDePasse: public Ui_AncienMotDePasse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANCIENMOTDEPASSE_H

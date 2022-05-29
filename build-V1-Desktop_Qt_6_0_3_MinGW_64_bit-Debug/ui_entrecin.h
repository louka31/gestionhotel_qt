/********************************************************************************
** Form generated from reading UI file 'entrecin.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTRECIN_H
#define UI_ENTRECIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_entrecin
{
public:
    QFrame *frame;
    QLabel *label;
    QLineEdit *cince_txt;
    QPushButton *affectereservation2_btn;

    void setupUi(QDialog *entrecin)
    {
        if (entrecin->objectName().isEmpty())
            entrecin->setObjectName(QString::fromUtf8("entrecin"));
        entrecin->resize(752, 191);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/projetimages/projetimages/e.png"), QSize(), QIcon::Normal, QIcon::Off);
        entrecin->setWindowIcon(icon);
        entrecin->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"border-bottom:1px solid #717072;\n"
"}\n"
"QDialog#entrecin\n"
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
"QPushButton:hover\n"
"{\n"
"\n"
"	color: white;\n"
"border-radius:15px;\n"
"background:rgb(255, 85, 127);\n"
"}"));
        frame = new QFrame(entrecin);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(60, 40, 641, 121));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 30, 231, 20));
        cince_txt = new QLineEdit(frame);
        cince_txt->setObjectName(QString::fromUtf8("cince_txt"));
        cince_txt->setGeometry(QRect(300, 30, 201, 22));
        affectereservation2_btn = new QPushButton(frame);
        affectereservation2_btn->setObjectName(QString::fromUtf8("affectereservation2_btn"));
        affectereservation2_btn->setGeometry(QRect(240, 80, 151, 28));

        retranslateUi(entrecin);

        QMetaObject::connectSlotsByName(entrecin);
    } // setupUi

    void retranslateUi(QDialog *entrecin)
    {
        entrecin->setWindowTitle(QCoreApplication::translate("entrecin", "Hotel", nullptr));
        label->setText(QCoreApplication::translate("entrecin", "Veuillez entrer le CIN du client :", nullptr));
        affectereservation2_btn->setText(QCoreApplication::translate("entrecin", "Affecter r\303\251servation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class entrecin: public Ui_entrecin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTRECIN_H

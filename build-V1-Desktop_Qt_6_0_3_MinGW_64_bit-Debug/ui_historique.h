/********************************************************************************
** Form generated from reading UI file 'historique.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORIQUE_H
#define UI_HISTORIQUE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Historique
{
public:
    QFrame *frame;
    QTableView *tableViewH;
    QLineEdit *cherhisresutil_txt;
    QLabel *label;

    void setupUi(QDialog *Historique)
    {
        if (Historique->objectName().isEmpty())
            Historique->setObjectName(QString::fromUtf8("Historique"));
        Historique->resize(1206, 545);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/projetimages/projetimages/e.png"), QSize(), QIcon::Normal, QIcon::Off);
        Historique->setWindowIcon(icon);
        Historique->setStyleSheet(QString::fromUtf8("#Historique \n"
"{\n"
"	background-image: url(:/projetimages/projetimages/a.jpg);\n"
"}"));
        frame = new QFrame(Historique);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(30, 20, 1151, 501));
        frame->setStyleSheet(QString::fromUtf8("QTableView {\n"
"selection-background-color:red;\n"
"border-radius:15px;\n"
"}\n"
"\n"
"#Historique\n"
"{\n"
"	background-image: url(:/projetimages/a.jpg);\n"
"}\n"
"*{\n"
"font-family:centry gothlic ;\n"
"font-size:15px;\n"
"}\n"
"#frame\n"
"{\n"
"\n"
"background:rgba(0,0,0,0.7);\n"
"border-radius:15px;\n"
"}\n"
"QLineEdit\n"
"{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"border-bottom:1px solid #717072;\n"
"}\n"
"#label{color:white;}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        tableViewH = new QTableView(frame);
        tableViewH->setObjectName(QString::fromUtf8("tableViewH"));
        tableViewH->setGeometry(QRect(50, 100, 1061, 361));
        cherhisresutil_txt = new QLineEdit(frame);
        cherhisresutil_txt->setObjectName(QString::fromUtf8("cherhisresutil_txt"));
        cherhisresutil_txt->setGeometry(QRect(510, 30, 291, 22));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 36, 421, 20));

        retranslateUi(Historique);

        QMetaObject::connectSlotsByName(Historique);
    } // setupUi

    void retranslateUi(QDialog *Historique)
    {
        Historique->setWindowTitle(QCoreApplication::translate("Historique", "Hotel", nullptr));
        label->setText(QCoreApplication::translate("Historique", "Saisir le num\303\251ro de chambre ou le CIN du client \303\240 chercher :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Historique: public Ui_Historique {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORIQUE_H

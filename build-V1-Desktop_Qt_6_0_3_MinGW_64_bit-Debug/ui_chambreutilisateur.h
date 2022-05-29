/********************************************************************************
** Form generated from reading UI file 'chambreutilisateur.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAMBREUTILISATEUR_H
#define UI_CHAMBREUTILISATEUR_H

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

class Ui_ChambreUtilisateur
{
public:
    QFrame *frame;
    QTableView *tableViewchutil;
    QLabel *label;
    QLineEdit *chambrechercher_txt;
    QLabel *label_2;
    QTableView *tableViewchdispoutil;

    void setupUi(QDialog *ChambreUtilisateur)
    {
        if (ChambreUtilisateur->objectName().isEmpty())
            ChambreUtilisateur->setObjectName(QString::fromUtf8("ChambreUtilisateur"));
        ChambreUtilisateur->resize(962, 488);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/projetimages/projetimages/e.png"), QSize(), QIcon::Normal, QIcon::Off);
        ChambreUtilisateur->setWindowIcon(icon);
        ChambreUtilisateur->setStyleSheet(QString::fromUtf8("QTableView {\n"
"selection-background-color:red;\n"
"border-radius:15px;\n"
"}\n"
"\n"
"QDialog\n"
"{\n"
"	background-image:url(:/projetimages/projetimages/a.jpg);\n"
"\n"
"}\n"
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
" \n"
"QLabel\n"
"{\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}\n"
"\n"
"\n"
"QLineEdit\n"
"{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"border-bottom:1px solid #717072;\n"
"}"));
        frame = new QFrame(ChambreUtilisateur);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(20, 20, 921, 451));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        tableViewchutil = new QTableView(frame);
        tableViewchutil->setObjectName(QString::fromUtf8("tableViewchutil"));
        tableViewchutil->setGeometry(QRect(100, 60, 301, 361));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 291, 16));
        chambrechercher_txt = new QLineEdit(frame);
        chambrechercher_txt->setObjectName(QString::fromUtf8("chambrechercher_txt"));
        chambrechercher_txt->setGeometry(QRect(290, 10, 291, 21));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(640, 30, 161, 16));
        tableViewchdispoutil = new QTableView(frame);
        tableViewchdispoutil->setObjectName(QString::fromUtf8("tableViewchdispoutil"));
        tableViewchdispoutil->setGeometry(QRect(580, 60, 291, 361));

        retranslateUi(ChambreUtilisateur);

        QMetaObject::connectSlotsByName(ChambreUtilisateur);
    } // setupUi

    void retranslateUi(QDialog *ChambreUtilisateur)
    {
        ChambreUtilisateur->setWindowTitle(QCoreApplication::translate("ChambreUtilisateur", " Hotel", nullptr));
        label->setText(QCoreApplication::translate("ChambreUtilisateur", "Saisir num\303\251ro de chambre \303\240 chercher :", nullptr));
        label_2->setText(QCoreApplication::translate("ChambreUtilisateur", "Chambres disponibles :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChambreUtilisateur: public Ui_ChambreUtilisateur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAMBREUTILISATEUR_H

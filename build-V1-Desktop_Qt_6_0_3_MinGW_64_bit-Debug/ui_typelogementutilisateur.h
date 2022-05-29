/********************************************************************************
** Form generated from reading UI file 'typelogementutilisateur.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TYPELOGEMENTUTILISATEUR_H
#define UI_TYPELOGEMENTUTILISATEUR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_TypeLogementUtilisateur
{
public:
    QFrame *frame;
    QTableView *tableViewtypelogutil;

    void setupUi(QDialog *TypeLogementUtilisateur)
    {
        if (TypeLogementUtilisateur->objectName().isEmpty())
            TypeLogementUtilisateur->setObjectName(QString::fromUtf8("TypeLogementUtilisateur"));
        TypeLogementUtilisateur->resize(516, 424);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/projetimages/projetimages/e.png"), QSize(), QIcon::Normal, QIcon::Off);
        TypeLogementUtilisateur->setWindowIcon(icon);
        TypeLogementUtilisateur->setStyleSheet(QString::fromUtf8("QTableView {\n"
" selection-background-color:red;\n"
"border-radius:15px;\n"
"}\n"
"\n"
"QDialog\n"
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
        frame = new QFrame(TypeLogementUtilisateur);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(30, 20, 451, 371));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        tableViewtypelogutil = new QTableView(frame);
        tableViewtypelogutil->setObjectName(QString::fromUtf8("tableViewtypelogutil"));
        tableViewtypelogutil->setGeometry(QRect(50, 30, 341, 311));

        retranslateUi(TypeLogementUtilisateur);

        QMetaObject::connectSlotsByName(TypeLogementUtilisateur);
    } // setupUi

    void retranslateUi(QDialog *TypeLogementUtilisateur)
    {
        TypeLogementUtilisateur->setWindowTitle(QCoreApplication::translate("TypeLogementUtilisateur", " Hotel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TypeLogementUtilisateur: public Ui_TypeLogementUtilisateur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TYPELOGEMENTUTILISATEUR_H

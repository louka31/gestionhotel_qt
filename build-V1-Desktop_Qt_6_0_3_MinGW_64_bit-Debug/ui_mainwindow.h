/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *Form;
    QFrame *frame;
    QLabel *label_2;
    QLineEdit *login_txt;
    QLabel *label_3;
    QLineEdit *mdp_txt;
    QPushButton *connecter_btn;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(480, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/projetimages/projetimages/e.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("#Form\n"
"{\n"
"		background-image: url(:/projetimages/projetimages/a.jpg);\n"
"\n"
"}\n"
"*{\n"
"font-family:centry gothlic ;\n"
"font-size:24px;\n"
"}\n"
"QFrame#frame\n"
"{\n"
"\n"
"	background:rgba(0,0,0,0.7);\n"
"border-radius:15px;\n"
"}\n"
" QPushButton#pushButton\n"
" {\n"
"     background-color: red;\n"
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
"\n"
" }\n"
"\n"
"QToolButton#toolButton\n"
"{\n"
"backgroun:red;\n"
"border-radius:60px;\n"
"}\n"
"QLabel#label\n"
"{\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}\n"
"QLabel#label_2\n"
"{\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}\n"
"QLabel#label_3\n"
"{\n"
"color:white;\n"
"background:transparent;\n"
"\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"color:white;\n"
"border-raduis:15px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color: white;\n"
"border-radius:15px;\n"
"background:rgb(255, 85, 127);\n"
"}\n"
"QLineEdit\n"
"{\n"
"backg"
                        "round:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"border-bottom:1px solid #717072;\n"
"}"));
        Form = new QWidget(MainWindow);
        Form->setObjectName(QString::fromUtf8("Form"));
        frame = new QFrame(Form);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(60, 90, 361, 461));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 110, 91, 51));
        login_txt = new QLineEdit(frame);
        login_txt->setObjectName(QString::fromUtf8("login_txt"));
        login_txt->setGeometry(QRect(70, 161, 241, 31));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 220, 181, 41));
        mdp_txt = new QLineEdit(frame);
        mdp_txt->setObjectName(QString::fromUtf8("mdp_txt"));
        mdp_txt->setGeometry(QRect(70, 270, 241, 22));
        mdp_txt->setEchoMode(QLineEdit::Password);
        connecter_btn = new QPushButton(frame);
        connecter_btn->setObjectName(QString::fromUtf8("connecter_btn"));
        connecter_btn->setGeometry(QRect(30, 367, 311, 41));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 50, 151, 20));
        pushButton = new QPushButton(Form);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(190, 20, 101, 101));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/projetimages/projetimages/b.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(40, 40));
        MainWindow->setCentralWidget(Form);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", " Hotel", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Mot de passe", nullptr));
        connecter_btn->setText(QCoreApplication::translate("MainWindow", "Se connecter", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "S'authentifier", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

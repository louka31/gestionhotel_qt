#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QDialog>

#include <QMainWindow>
#include<QtSql>
#include<QDebug>
#include<QFileInfo>
#include"reservationsencours.h"
#include"accueil.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    QSqlDatabase mydb;

    void connClose()
    {
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }

    bool connOpen()
    {
        mydb= QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("C:/Users/MSI/Desktop/db/hotel.db");
        if (!mydb.open())
         {
           qDebug()<<("Connexion échoué");
           return false;
         }else{
            qDebug()<<("Connexion réussite");
            return true;
         }
    }


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_connecter_btn_clicked();

private:
    Ui::MainWindow *ui;
    accueil *mDialog;
ReservationsEnCours *mDialog2;
};
#endif // MAINWINDOW_H

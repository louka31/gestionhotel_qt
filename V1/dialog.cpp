#include "dialog.h"
#include "ui_dialog.h"
#include "reservationsencours.h"
#include "ui_reservationsencours.h"
#include <string>
#include "mainwindow.h"
#include<QDate>
#include<QMessageBox>
#include "historique.h"
#include "sejourtermine.h"
#include "client.h"
#include "entrecin.h"
#include "ajoutclient.h"
#include "cinreservation.h"
#include "compte.h"
#include "chambreutilisateur.h"
#include "typelogementutilisateur.h"
#include<QDebug>
#include<QDateTime>
#include"dialog.h"
#include<QString>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    Dialog::makePlot();
}

Dialog::~Dialog()
{
    delete ui;
}
void Dialog::makePlot()
{

    MainWindow conn ;
    QSqlQueryModel * modal =new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery* qry2=new QSqlQuery(conn.mydb);

    qry2->prepare("select date_arrivee from reservation ");
    qry2->exec();


    int count=0;
    int count1=0;
    int count2=0;
    int count3=0;
    int count4=0;
    int x=0;
    QDateTime time = QDateTime::currentDateTime();
    QString textt = time.toString("dd.MM.yyyy");
    QString ch2=textt.mid(6,4);
  double a =ch2.toDouble();
            double  a2=a-1;
            int a3=a-2;
            int  a4=a-3;
            int a5=a-4;
            while(qry2->next())
    {
            QString ch=qry2->value(0).toString();
            QString ch1=ch.mid(0,4);
            x=ch1.toInt();
            if (x==a)
            count++;
            if (x==a2)
            count1++;
            if (x==a3)
            count2++;
            if (x==a4)
            count3++;
            if (x==a5)
            count4++;
}


            QCPBars *myBars = new QCPBars(ui->customPlot->xAxis, ui->customPlot->yAxis);
    QVector<double> keyData;

    QVector<double> valueData;
    myBars->setName("Nombre des réservation selon les années");

    keyData <<a<<a2<<a3<<a4<<a5 ;
    valueData << count<<count1<<count2<<count3<<count4;
    myBars->setData(keyData, valueData);
    myBars->setBrush(QBrush(Qt::red));
    myBars->setWidth(0.5);
       myBars->setPen(Qt::NoPen);
    ui->customPlot->rescaleAxes();
    ui->customPlot->replot();




}

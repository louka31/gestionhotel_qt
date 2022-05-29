#include "dialog1.h"
#include "ui_dialog1.h"
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
Dialog1::Dialog1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog1)
{
    ui->setupUi(this);
    Dialog1::makePlot();

}

Dialog1::~Dialog1()
{
    delete ui;
}
void Dialog1::makePlot()
{
    MainWindow conn ;
    QSqlQueryModel * modal =new QSqlQueryModel();
    conn.connOpen();
    QSqlQuery* qry2=new QSqlQuery(conn.mydb);
    qry2->prepare("select date_arrivee , frais from reservation ");
    qry2->exec();
    double count=0;
    double count1=0;
    double count2=0;
    double count3=0;
   double count4=0;
   double x=0;
    QDateTime time = QDateTime::currentDateTime();
    QString textt = time.toString("dd.MM.yyyy");
    QString ch2=textt.mid(6,4);
  double a =ch2.toDouble();
            double  a2=a-1;
           double a3=a-2;
            double  a4=a-3;
            double a5=a-4;
            while(qry2->next())
    {
            QString ch=qry2->value(0).toString();
            QString ch1=ch.mid(0,4);
            x=ch1.toInt();

            QString f=qry2->value(1).toString();
            double f1=f.toDouble();


            if (x==a)
            count=count+f1;
            if (x==a2)
            count1=count1+f1;
            if (x==a3)
            count2=count2+f1;
            if (x==a4)
            count3=count3+f1;
            if (x==a5)
            count4=count4+f1;
}

            QCPCurve *myBars = new QCPCurve(ui->customplot1->xAxis, ui->customplot1->yAxis);
    QVector<double> keyData;
    QVector<double> valueData;
    keyData <<a<<a2<<a3<<a4<<a5 ;
    valueData << count<<count1<<count2<<count3<<count4;
    myBars->setData(keyData, valueData);
    //myBars->setBrush(QBrush(Qt::black));
       //myBars->setPen(Qt::NoPen);
    myBars->setPen(QPen(Qt::red));
    ui->customplot1->rescaleAxes();
    ui->customplot1->replot();


}

#include "tableaudebord.h"
#include "ui_tableaudebord.h"
#include "reservationencoursadmin.h"
#include "historiqueadmin.h"
#include "clientadmin.h"
#include "chambreadmin.h"
#include "typelogementadmin.h"
#include "employe.h"
#include "mainwindow.h"
#include "hotel.h"
#include "compte.h"
#include "dialog.h"
#include "ui_dialog.h"
#include <QApplication>
#include <QMainWindow>
#include"QString"
TableauDeBord::TableauDeBord(QWidget *parent,QString idutili,QString idh) :
    QDialog(parent),idutilisateur(idutili),idhotel(idh),
    ui(new Ui::TableauDeBord)
{
    ui->setupUi(this);
    TableauDeBord::makePlot();
    TableauDeBord::makePlot1();
    MainWindow conn ;

    conn.connOpen();

    QSqlQuery* qry24=new QSqlQuery(conn.mydb);
    QSqlQuery* qry25=new QSqlQuery(conn.mydb);
    QSqlQuery* qry26=new QSqlQuery(conn.mydb);
    QSqlQuery* qry27=new QSqlQuery(conn.mydb);
    QSqlQuery* qry28=new QSqlQuery(conn.mydb);

    int nbrchambres=0;
    int nbrchambresdispo=0;
    int nbrreservationsencours=0;
    int nbrclients=0;
    int nbremployes=0;

    qry24->prepare("select count(*) from chambre where idhotel='"+idhotel+"'");
    qry24->exec();
    qry24->next();
    nbrchambres = qry24->value(0).toInt();
    ui->nbrchambretotale_txt->setText(QString::number(nbrchambres));

    qry25->prepare("select count(idchambre) from chambre where idhotel='"+idhotel+"' and reserve='0' and hors_service='0' ");
    qry25->exec();
    qry25->next();
    nbrchambresdispo = qry25->value(0).toInt();
    ui->nbrchambresdispo_txt->setText(QString::number(nbrchambresdispo));

    qry26->prepare("select count(*) from reservation where idhotel='"+idhotel+"' and sejour_termine='0'");
    qry26->exec();
    qry26->next();
    nbrreservationsencours = qry26->value(0).toInt();
    ui->nbrreservationsencours_txt->setText(QString::number(nbrreservationsencours));

    qry27->prepare("select count(*) from client_hotel where idhotel='"+idhotel+"'");
    qry27->exec();
    qry27->next();
    nbrclients = qry27->value(0).toInt();
    ui->nbrclientstotale_txt->setText(QString::number(nbrclients));

    qry28->prepare("select count(*) from utilisateur where idhotel='"+idhotel+"'");
    qry28->exec();
    qry28->next();
    nbremployes = qry28->value(0).toInt();
    ui->nbremployetotale_txt->setText(QString::number(nbremployes));


    QSqlQuery* qry23=new QSqlQuery(conn.mydb);

   QString idutilii=idutilisateur;
    qry23->prepare("select prenomutil from utilisateur where idutilisateur='"+ idutilii+"'");
    qry23->exec();
QString nom;
    while(qry23->next())
    {
        nom = qry23->value(0).toString();

    }
QString ch="Bonjour " ;
QString ch1= ch + nom ;
    ui->Nom->setText(ch1);

}
void TableauDeBord::makePlot1()
{
    MainWindow conn ;
    QSqlQueryModel * modal =new QSqlQueryModel();
    conn.connOpen();
    QSqlQuery* qry2=new QSqlQuery(conn.mydb);
    qry2->prepare("select date_arrivee , frais from reservation where idhotel='"+idhotel+"'");
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

            QCPCurve *myBars = new QCPCurve(ui->widget_2->xAxis, ui->widget_2->yAxis);
    QVector<double> keyData;
    QVector<double> valueData;
    keyData <<a<<a2<<a3<<a4<<a5 ;
    valueData << count<<count1<<count2<<count3<<count4;
    myBars->setData(keyData, valueData);
    //myBars->setBrush(QBrush(Qt::black));
       //myBars->setPen(Qt::NoPen);
    myBars->setPen(QPen(Qt::red));
    ui->widget_2->rescaleAxes();
    ui->widget_2->replot();


}

TableauDeBord::~TableauDeBord()
{
    delete ui;
}
void TableauDeBord::makePlot()
{

    MainWindow conn ;
    QSqlQueryModel * modal =new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery* qry2=new QSqlQuery(conn.mydb);

    qry2->prepare("select date_arrivee from reservation where idhotel='"+idhotel+"'");
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


            QCPBars *myBars = new QCPBars(ui->widget_3->xAxis, ui->widget_3->yAxis);
    QVector<double> keyData;

    QVector<double> valueData;
    myBars->setName("Nombre des réservation selon les années");

    keyData <<a<<a2<<a3<<a4<<a5 ;
    valueData << count<<count1<<count2<<count3<<count4;
    myBars->setData(keyData, valueData);
    myBars->setBrush(QBrush(Qt::red));
    myBars->setWidth(0.5);
       myBars->setPen(Qt::NoPen);
    ui->widget_3->rescaleAxes();
    ui->widget_3->replot();




}
void TableauDeBord::on_resencoursadmin_btn_clicked()
{
    ReservationEnCoursAdmin res(nullptr,idhotel);
    res.setModal(true);
    res.exec();
}

void TableauDeBord::on_historiqueadmin_btn_clicked()
{
    HistoriqueAdmin his(nullptr,idhotel);
    his.setModal(true);
    his.exec();
}

void TableauDeBord::on_clientadmin_btn_clicked()
{
    ClientAdmin cl(nullptr,idhotel);
    cl.setModal(true);
    cl.exec();

}

void TableauDeBord::on_chambreadmin_btn_clicked()
{
    ChambreAdmin ch(nullptr,idhotel);
    ch.setModal(true);
    ch.exec();
}

void TableauDeBord::on_typelogadmin_btn_clicked()
{
    TypeLogementAdmin log(nullptr);
    log.setModal(true);
    log.exec();
}

void TableauDeBord::on_employeadmin_btn_clicked()
{
    Employe emp(nullptr,idhotel);
    emp.setModal(true);
    emp.exec();
}


void TableauDeBord::on_hoteladmin_btn_clicked()
{
    MainWindow conn ;

    conn.connOpen();
    QSqlQuery* qry=new QSqlQuery(conn.mydb);

    qry->prepare("select nomhotel,adresse,categoriehotel from hotel where idhotel='"+idhotel+"'");
    qry->exec();

    QString nom;
    QString adresse;
    QString categorie;
    while(qry->next())
    {
       nom = qry->value(0).toString();
       adresse = qry->value(1).toString();
       categorie = qry->value(2).toString();
    }

    Hotel h(nullptr,idhotel,nom,adresse,categorie);
    h.setModal(true);
    h.exec();


}

void TableauDeBord::on_compteadmin_btn_clicked()
{
    Compte cpt(nullptr,idutilisateur);
    cpt.setModal(true);
    cpt.exec();

}

void TableauDeBord::on_quitteradmin_btn_clicked()
{

    this->hide();

    MainWindow *newmain= new MainWindow();
    newmain->show();

}

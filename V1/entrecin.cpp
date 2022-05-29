#include "entrecin.h"
#include "ui_entrecin.h"
#include <QMessageBox>
#include "mainwindow.h"
#include "ajoutreservationsansclient.h"

entrecin::entrecin(QWidget *parent,QString idutili,QString idh,ReservationsEnCours* res) :
    QDialog(parent),idutilisateur(idutili),idhotel(idh),reservationsencours(res),
    ui(new Ui::entrecin)
{
    ui->setupUi(this);
}

entrecin::~entrecin()
{
    delete ui;
}

void entrecin::on_affectereservation2_btn_clicked()
{


       QString cin=ui->cince_txt->text();


       MainWindow conn ;

       conn.connOpen();

       QSqlQuery* qry2=new QSqlQuery(conn.mydb);

       qry2->prepare("select client.idclient,nomclient,prenomclient from client join client_hotel on client.idclient=client_hotel.idclient where cinclient='"+cin+"' and idhotel='"+idhotel+"'");

       qry2->exec();



       if(qry2->next())
       {



           QString idclient;
           QString nomclient;
           QString prenomclient;

           idclient = qry2->value(0).toString();
           nomclient = qry2->value(1).toString();
           prenomclient = qry2->value(2).toString();



               this->hide();
               AjoutReservationSansClient ajoutres(nullptr,idutilisateur,idhotel,idclient,cin,nomclient,prenomclient,reservationsencours);
               ajoutres.setModal(true);
               ajoutres.exec();


       }
     else{

           QMessageBox::warning(this,tr("CIN incorrecte"),tr("Le CIN que vous avez saisie est incorrecte ."));

       }

       conn.close();




}

#include "ajoutclient.h"
#include "ui_ajoutclient.h"
#include <QMessageBox>
#include "mainwindow.h"
#include "ajoutreservationavecclient.h"

AjoutClient::AjoutClient(QWidget *parent,ReservationsEnCours* resencours, QString idutili,QString idh) :
    QDialog(parent),reservationsencours(resencours),idutilisateur(idutili),idhotel(idh),
    ui(new Ui::AjoutClient)
{
    ui->setupUi(this);

}

AjoutClient::~AjoutClient()
{
    delete ui;
}

void AjoutClient::on_affecterreservation_btn_clicked()
{


       QString cin=ui->cinac_txt->text();
       QString nom=ui->nomac_txt->text();
       QString prenom=ui->prenomac_txt->text();
       QString telephone=ui->telephoneac_txt->text();
       QString adresse=ui->adresseac_txt->text();
       QString datenaissance=ui->daitenaissanceac_txt->date().toString("yyyy-MM-dd");

       MainWindow conn ;

       conn.connOpen();
       QSqlQuery* qry=new QSqlQuery(conn.mydb);

       QSqlQuery* qry2=new QSqlQuery(conn.mydb);

       qry2->prepare("select cinclient from client join client_hotel on client.idclient=client_hotel.idclient where cinclient='"+cin+"' and idhotel='"+idhotel+"'");
       qry2->exec();

       if(qry2->next())
       {

             QMessageBox::warning(this,tr("Existence du client"),tr("Ce client existe déja"));
             this->hide();


       }else{
               QMessageBox::StandardButton reply;
               reply = QMessageBox::question(this, "Ajout d'un client", "Voulez vous vraiment ajouter ce client et lui affecter une réservation ? ",QMessageBox::Yes | QMessageBox::No);

               if (reply == QMessageBox::Yes)
               {

                   qry->prepare("insert into client(cinclient,nomclient,prenomclient,telephoneclient,adresseclient,datenaissanceclient) values ('"+cin+"', '"+nom+"', '"+prenom+"', '"+telephone+"', '"+adresse+"', '"+datenaissance+"' )");
                   qry->exec();


                   QSqlQuery* qry2=new QSqlQuery(conn.mydb);
                   qry2->prepare("select idclient from client where cinclient='"+cin+"'");
                   qry2->exec();
                   int idclient=0;
                   while(qry2->next())
                   {

                       idclient = qry2->value(0).toInt();
                   }

                   QSqlQuery* qry3=new QSqlQuery(conn.mydb);
                   qry3->prepare("insert into client_hotel(idclient,idhotel) values('"+QString::number(idclient)+"', '"+idhotel+"')");
                   qry3->exec();


                   this->hide();
                   AjoutReservationAvecClient ajoutres(nullptr,reservationsencours,idutilisateur,idhotel,QString::number(idclient));
                   ajoutres.setModal(true);
                   ajoutres.exec();
               }else{
               this->hide();
           }


       }

}

#include "cinreservation.h"
#include "ui_cinreservation.h"
#include "mainwindow.h"
#include <QMessageBox>
#include "ajoutreservationsansclient.h"

CinReservation::CinReservation(QWidget *parent,QString idutili,QString idh,ReservationsEnCours* res) :
    QDialog(parent),idutilisateur(idutili),idhotel(idh),reservationsencours(res),
    ui(new Ui::CinReservation)
{
    ui->setupUi(this);
}

CinReservation::~CinReservation()
{
    delete ui;
}

void CinReservation::on_affres2_btn_clicked()
{
     QString cin=ui->cinres2->text();

     MainWindow conn ;

     conn.connOpen();

     QSqlQuery* qry2=new QSqlQuery(conn.mydb);

     qry2->prepare("select idclient,nomclient,prenomclient from client join client_hotel on client.idclient=client_hotel.idclient where cinclient='"+cin+"' and idhotel='"+idhotel+"'");
     //qry2->prepare("select * from typelogement");
     qry2->exec();


     while(qry2->next())
     {



         QMessageBox::StandardButton reply;
         reply = QMessageBox::question(this, "Ajout d'une réservation", "Voulez vous vraiment affecter une réservation à ce client? ",QMessageBox::Yes | QMessageBox::No);

         if (reply == QMessageBox::Yes)
         {


             this->hide();
            // AjoutReservationSansClient ajoutres(nullptr,idutilisateur,idhotel,idclient,cin,nomclient,prenomclient,reservationsencours);
            // ajoutres.setModal(true);
            // ajoutres.exec();
         }else{
             this->hide();
         }


     }


}

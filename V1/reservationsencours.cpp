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
#include"dialog1.h"

ReservationsEnCours::ReservationsEnCours(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReservationsEnCours)
{
    ui->setupUi(this);


}

void ReservationsEnCours::myfunction()

{    QDateTime time = QDateTime::currentDateTime();
     QString textt = time.toString("dd.MM.yyyy");

    QTime timee = QTime::currentTime();
    QString text = timee.toString("hh:mm:ss");

ui->label_6->setText(textt);

ui->label_7->setText(text);

}



ReservationsEnCours::ReservationsEnCours(QWidget *parent,int idutil) :
    QDialog(parent),idutilisateur(idutil),
    ui(new Ui::ReservationsEnCours)
{
    ui->setupUi(this);
    QTimer *timer = new QTimer(this);
        connect(timer, &QTimer::timeout, this, &ReservationsEnCours::myfunction);
        timer->start(1000);

        myfunction();


    MainWindow conn ;

    conn.connOpen();
    QSqlQuery* qry23=new QSqlQuery(conn.mydb);

    QString idutilii=QString::number(idutilisateur);
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



    QSqlQueryModel * modal =new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery* qry=new QSqlQuery(conn.mydb);
    QSqlQuery* qry2=new QSqlQuery(conn.mydb);

    QString idutili=QString::number(idutilisateur);
    qry2->prepare("select idhotel from utilisateur where idutilisateur='"+ idutili+"'");
    qry2->exec();
    int count=0;
    int idh=0;
    while(qry2->next())
    {
        count++;
        idh = qry2->value(0).toInt();
    }


    qry->prepare("select date_arrivee,date_depart,num_chambre,nomclient,prenomclient,cinclient,datenaissanceclient,adresseclient,telephoneclient,typelog,nomutil,prenomutil from (((reservation join chambre on reservation.idchambre=chambre.idchambre) join typelogement on reservation.idlogement=typelogement.idlogement) join client on reservation.idclient=client.idclient) join utilisateur on reservation.idutilisateur=utilisateur.idutilisateur where reservation.idhotel='"+QString::number(idh)+"'and sejour_termine=0 ");
    qry->exec();
    modal->setQuery(*qry);

    modal->setHeaderData(0, Qt::Horizontal, QObject::tr("Date arrivée"));
    modal->setHeaderData(1, Qt::Horizontal, QObject::tr("Date départ"));
    modal->setHeaderData(2, Qt::Horizontal, QObject::tr("Num chambre"));
    modal->setHeaderData(3, Qt::Horizontal, QObject::tr("Nom"));
    modal->setHeaderData(4, Qt::Horizontal, QObject::tr("Prénom"));
    modal->setHeaderData(5, Qt::Horizontal, QObject::tr("Cin"));
    modal->setHeaderData(6, Qt::Horizontal, QObject::tr("Date Naissance"));
    modal->setHeaderData(7, Qt::Horizontal, QObject::tr("Adresse"));
    modal->setHeaderData(8, Qt::Horizontal, QObject::tr("Téléphone"));
    modal->setHeaderData(9, Qt::Horizontal, QObject::tr("Type logement"));
    modal->setHeaderData(10, Qt::Horizontal, QObject::tr("Nom agent"));
    modal->setHeaderData(11, Qt::Horizontal, QObject::tr("prénom agent"));

    ui->tableView->setModel(modal);

    conn.connClose();

    QString  dateauj= QDate::currentDate().toString("yyyy-MM-dd");

    ui->datearrivee_edit->setDate(QDate::fromString(dateauj, "yyyy-MM-dd"));
    ui->datedepart_edit->setDate(QDate::fromString(dateauj, "yyyy-MM-dd"));
    ui->nomresencours->setText("");
    ui->prenomresencours->setText("");
    ui->cinresencours->setText("");



}


ReservationsEnCours::~ReservationsEnCours()
{
    delete ui;
}

void ReservationsEnCours::on_reservationsencours_btn_clicked()
{

    MainWindow conn ;
    QSqlQueryModel * modal =new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery* qry=new QSqlQuery(conn.mydb);
    QSqlQuery* qry2=new QSqlQuery(conn.mydb);

    QString idutili=QString::number(idutilisateur);
    qry2->prepare("select idhotel from utilisateur where idutilisateur='"+ idutili+"'");
    qry2->exec();
    int count=0;
    int idh=0;
    while(qry2->next())
    {
        count++;
        idh = qry2->value(0).toInt();
    }


    qry->prepare("select date_arrivee,date_depart,num_chambre,nomclient,prenomclient,cinclient,datenaissanceclient,adresseclient,telephoneclient,typelog,nomutil,prenomutil from (((reservation join chambre on reservation.idchambre=chambre.idchambre) join typelogement on reservation.idlogement=typelogement.idlogement) join client on reservation.idclient=client.idclient) join utilisateur on reservation.idutilisateur=utilisateur.idutilisateur where reservation.idhotel='"+QString::number(idh)+"'and sejour_termine=0 ");
    qry->exec();
    modal->setQuery(*qry);

    modal->setHeaderData(0, Qt::Horizontal, QObject::tr("Date arrivée"));
    modal->setHeaderData(1, Qt::Horizontal, QObject::tr("Date départ"));
    modal->setHeaderData(2, Qt::Horizontal, QObject::tr("Num chambre"));
    modal->setHeaderData(3, Qt::Horizontal, QObject::tr("Nom"));
    modal->setHeaderData(4, Qt::Horizontal, QObject::tr("Prénom"));
    modal->setHeaderData(5, Qt::Horizontal, QObject::tr("Cin"));
    modal->setHeaderData(6, Qt::Horizontal, QObject::tr("Date Naissance"));
    modal->setHeaderData(7, Qt::Horizontal, QObject::tr("Adresse"));
    modal->setHeaderData(8, Qt::Horizontal, QObject::tr("Téléphone"));
    modal->setHeaderData(9, Qt::Horizontal, QObject::tr("Type logement"));
    modal->setHeaderData(10, Qt::Horizontal, QObject::tr("Nom agent"));
    modal->setHeaderData(11, Qt::Horizontal, QObject::tr("prénom agent"));

    ui->tableView->setModel(modal);

    conn.connClose();

}


void ReservationsEnCours::on_tableView_activated(const QModelIndex &index)
{

    int ligne = ui->tableView->currentIndex().row();

    QString val=ui->tableView->model()->data(ui->tableView->model()->index(ligne,2)).toString();
    QString nom=ui->tableView->model()->data(ui->tableView->model()->index(ligne,3)).toString();
    QString prenom=ui->tableView->model()->data(ui->tableView->model()->index(ligne,4)).toString();
     QString cin=ui->tableView->model()->data(ui->tableView->model()->index(ligne,5)).toString();


    ui->nomresencours->setText(nom);
    ui->prenomresencours->setText(prenom);
    ui->cinresencours->setText(cin);

    MainWindow conn ;

    conn.connOpen();
    QSqlQuery* qry=new QSqlQuery(conn.mydb);
    QSqlQuery* qry2=new QSqlQuery(conn.mydb);

    QString idutili=QString::number(idutilisateur);
    qry2->prepare("select idhotel from utilisateur where idutilisateur='"+ idutili+"'");
    qry2->exec();
    int count=0;
    int idh=0;
    while(qry2->next())
    {
        count++;
        idh = qry2->value(0).toInt();
    }


    qry->prepare("select date_arrivee,date_depart,num_chambre,typelog from (reservation join chambre on reservation.idchambre=chambre.idchambre) join typelogement on reservation.idlogement=typelogement.idlogement where (num_chambre='"+val+"' and reservation.sejour_termine='0' and reservation.idhotel='"+QString::number(idh)+"')");
    qry->exec();
    QString da;
    QString dp;
    QString numch;
    QString typelog;
    while(qry->next())
    {
       da = qry->value(0).toString();
       dp = qry->value(1).toString();
       numch = qry->value(2).toString();
       typelog = qry->value(3).toString();
    }




     ui->datearrivee_edit->setDate(QDate::fromString(da, "yyyy-MM-dd"));
     ui->datedepart_edit->setDate(QDate::fromString(dp, "yyyy-MM-dd"));



     QSqlQuery* qry3=new QSqlQuery(conn.mydb);
     qry3->prepare("select num_chambre from chambre where reserve='0' and hors_service='0' and idhotel='"+QString::number(idh)+"'");
     qry3->exec();

     ui->numchambre_cb->clear();
     ui->numchambre_cb->addItem(numch);
     int count2=0;
     while(qry3->next())
     {
         count2++;
         ui->numchambre_cb->addItem(qry3->value(0).toString());
     }


     QSqlQuery* qry4=new QSqlQuery(conn.mydb);
     qry4->prepare("select typelog from typelogement");
     qry4->exec();

     ui->typelogement_cb->clear();
     int count3=0;
     while(qry4->next())
     {
         count3++;
         ui->typelogement_cb->addItem(qry4->value(0).toString());
     }
     ui->typelogement_cb->setCurrentText(typelog);

       conn.connClose();

}



//******************************Bouton modifier********************************

void ReservationsEnCours::on_modifierreservation_btn_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Modification réservation", "Voulez-vous vraiment modifier cette réservation? ",QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes)
    {
        QString  da= ui->datearrivee_edit->date().toString("yyyy-MM-dd");

        QString  dp= ui->datedepart_edit->date().toString("yyyy-MM-dd");

        QString numch=ui->numchambre_cb->currentText();
        QString typelog=ui->typelogement_cb->currentText();
        QString numchanc=ui->numchambre_cb->itemText(0);


        QString idutili=QString::number(idutilisateur);

        MainWindow conn ;

        conn.connOpen();

        QSqlQuery* qry1=new QSqlQuery(conn.mydb);
        qry1->prepare("select idhotel from utilisateur where idutilisateur='"+ idutili+"'");
        qry1->exec();
        int idh=0;
        while(qry1->next())
        {
            idh = qry1->value(0).toInt();
        }



        QSqlQuery* qry2=new QSqlQuery(conn.mydb);
        qry2->prepare("select idchambre from chambre where num_chambre='"+numch+"'and idhotel='"+QString::number(idh)+"'");
        qry2->exec();
        int idchn=0;
        while(qry2->next())
        {
            idchn= qry2->value(0).toInt();
        }

        QSqlQuery* qry3=new QSqlQuery(conn.mydb);
        qry3->prepare("select idchambre from chambre where num_chambre='"+numchanc+"'and idhotel='"+QString::number(idh)+"'");
        qry3->exec();
        int idchanc=0;
        while(qry3->next())
        {
            idchanc=qry3->value(0).toInt();
        }


        QSqlQuery* qry4=new QSqlQuery(conn.mydb);
        qry4->prepare("select idlogement from typelogement where typelog='"+typelog+"'");
        qry4->exec();
        int idlog=0;
        while(qry4->next())
        {
            idlog=qry4->value(0).toInt();
        }

        if(idchanc != idchn){
            QSqlQuery* qry5=new QSqlQuery(conn.mydb);
            qry5->prepare("update chambre set reserve='0' where idchambre='"+QString::number(idchanc)+"' and idhotel='"+QString::number(idh)+"'");
            qry5->exec();

            QSqlQuery* qry6=new QSqlQuery(conn.mydb);
            qry6->prepare("update chambre set reserve='1' where idchambre='"+QString::number(idchn)+"' and idhotel='"+QString::number(idh)+"'");
            qry6->exec();

        }

        QSqlQuery* qry7=new QSqlQuery(conn.mydb);
        qry7->prepare("update reservation set date_arrivee='"+da+"', date_depart='"+dp+"', idchambre='"+QString::number(idchn)+"' ,idlogement='"+QString::number(idlog)+"' ,idutilisateur='"+idutili+"' where idchambre='"+QString::number(idchanc)+"' and sejour_termine='0' and idhotel='"+QString::number(idh)+"'");
        qry7->exec();

         ui->numchambre_cb->clear();
         ui->typelogement_cb->clear();
         ui->nomresencours->setText("");
         ui->prenomresencours->setText("");
         ui->cinresencours->setText("");


         QString  dateauj= QDate::currentDate().toString("yyyy-MM-dd");

         ui->datearrivee_edit->setDate(QDate::fromString(dateauj, "yyyy-MM-dd"));
         ui->datedepart_edit->setDate(QDate::fromString(dateauj, "yyyy-MM-dd"));


         QSqlQueryModel * modal =new QSqlQueryModel();
         QSqlQuery* qry8=new QSqlQuery(conn.mydb);
         qry8->prepare("select date_arrivee,date_depart,num_chambre,nomclient,prenomclient,cinclient,datenaissanceclient,adresseclient,telephoneclient,typelog,nomutil,prenomutil from (((reservation join chambre on reservation.idchambre=chambre.idchambre) join typelogement on reservation.idlogement=typelogement.idlogement) join client on reservation.idclient=client.idclient) join utilisateur on reservation.idutilisateur=utilisateur.idutilisateur where reservation.idhotel='"+QString::number(idh)+"'and sejour_termine=0 ");
         qry8->exec();
         modal->setQuery(*qry8);

         modal->setHeaderData(0, Qt::Horizontal, QObject::tr("Date arrivée"));
         modal->setHeaderData(1, Qt::Horizontal, QObject::tr("Date départ"));
         modal->setHeaderData(2, Qt::Horizontal, QObject::tr("Num chambre"));
         modal->setHeaderData(3, Qt::Horizontal, QObject::tr("Nom"));
         modal->setHeaderData(4, Qt::Horizontal, QObject::tr("Prénom"));
         modal->setHeaderData(5, Qt::Horizontal, QObject::tr("Cin"));
         modal->setHeaderData(6, Qt::Horizontal, QObject::tr("Date Naissance"));
         modal->setHeaderData(7, Qt::Horizontal, QObject::tr("Adresse"));
         modal->setHeaderData(8, Qt::Horizontal, QObject::tr("Téléphone"));
         modal->setHeaderData(9, Qt::Horizontal, QObject::tr("Type logement"));
         modal->setHeaderData(10, Qt::Horizontal, QObject::tr("Nom agent"));
         modal->setHeaderData(11, Qt::Horizontal, QObject::tr("prénom agent"));

         ui->tableView->setModel(modal);

         conn.connClose();

   }
}



//******************************Bouton annuler********************************

void ReservationsEnCours::on_annulerreservation_btn_clicked()
{
    MainWindow conn ;

      conn.connOpen();
      int ligne = ui->tableView->currentIndex().row();
         if (ligne != -1)
         {
             QVariant alpha(ui->tableView->model()->data(ui->tableView->model()->index(ligne,2)));
             QMessageBox::StandardButton reply;
             reply = QMessageBox::question(this, "Suppression d'une réservation", "Voulez-vous vraiment supprimer cette réservation ? ",QMessageBox::Yes | QMessageBox::No);

             if (reply == QMessageBox::Yes)

             {
                 QSqlQuery* qry1=new QSqlQuery(conn.mydb);

                 QString idutili=QString::number(idutilisateur);
                 qry1->prepare("select idhotel from utilisateur where idutilisateur='"+ idutili+"'");
                 qry1->exec();

                 int idh=0;
                 while(qry1->next())
                 {
                     idh = qry1->value(0).toInt();
                 }

                 QSqlQuery query(conn.mydb);
                 query.prepare("delete from reservation where idchambre=(select idchambre from chambre where num_chambre=:alpha ) and  sejour_termine=0 and idhotel='"+QString::number(idh)+"' ");
                 query.bindValue(":alpha" , alpha);
                 query.exec();

                 QSqlQuery qry3(conn.mydb);
                 qry3.prepare("update chambre set reserve='0' where idchambre=(select idchambre from chambre where num_chambre=:alpha )");
                 qry3.bindValue(":alpha" , alpha);
                 qry3.exec();

                  QSqlQueryModel * modal =new QSqlQueryModel();


                  QSqlQuery* qry=new QSqlQuery(conn.mydb);

                  qry->prepare("select date_arrivee,date_depart,num_chambre,nomclient,prenomclient,cinclient,datenaissanceclient,adresseclient,telephoneclient,typelog,nomutil,prenomutil from (((reservation join chambre on reservation.idchambre=chambre.idchambre) join typelogement on reservation.idlogement=typelogement.idlogement) join client on reservation.idclient=client.idclient) join utilisateur on reservation.idutilisateur=utilisateur.idutilisateur where reservation.idhotel='"+QString::number(idh)+"'and sejour_termine=0 ");
                  qry->exec();
                  modal->setQuery(*qry);

                  modal->setHeaderData(0, Qt::Horizontal, QObject::tr("Date arrivée"));
                  modal->setHeaderData(1, Qt::Horizontal, QObject::tr("Date départ"));
                  modal->setHeaderData(2, Qt::Horizontal, QObject::tr("Num chambre"));
                  modal->setHeaderData(3, Qt::Horizontal, QObject::tr("Nom"));
                  modal->setHeaderData(4, Qt::Horizontal, QObject::tr("Prénom"));
                  modal->setHeaderData(5, Qt::Horizontal, QObject::tr("Cin"));
                  modal->setHeaderData(6, Qt::Horizontal, QObject::tr("Date Naissance"));
                  modal->setHeaderData(7, Qt::Horizontal, QObject::tr("Adresse"));
                  modal->setHeaderData(8, Qt::Horizontal, QObject::tr("Téléphone"));
                  modal->setHeaderData(9, Qt::Horizontal, QObject::tr("Type logement"));
                  modal->setHeaderData(10, Qt::Horizontal, QObject::tr("Nom agent"));
                  modal->setHeaderData(11, Qt::Horizontal, QObject::tr("prénom agent"));

                  ui->tableView->setModel(modal);

                  conn.connClose();

             }
         }

}

//******************************Bouton Historique********************************

void ReservationsEnCours::on_historique_btn_clicked()
{

            Historique historique(nullptr,idutilisateur);
            historique.setModal(true);
            historique.exec();

}

//******************************Bouton terminer sejour********************************

void ReservationsEnCours::on_terminersejour_btn_clicked()
{

      int ligne = ui->tableView->currentIndex().row();
      if (ligne != -1)
      {

         QString nom=ui->tableView->model()->data(ui->tableView->model()->index(ligne,3)).toString();
         QString prenom=ui->tableView->model()->data(ui->tableView->model()->index(ligne,4)).toString();
         QString cin=ui->tableView->model()->data(ui->tableView->model()->index(ligne,5)).toString();
         QString datearrivee=ui->tableView->model()->data(ui->tableView->model()->index(ligne,0)).toString();
         QString datedepart=ui->tableView->model()->data(ui->tableView->model()->index(ligne,1)).toString();
         QString numch=ui->tableView->model()->data(ui->tableView->model()->index(ligne,2)).toString();
         QString typelog=ui->tableView->model()->data(ui->tableView->model()->index(ligne,9)).toString();

         QDate da=QDate::fromString(datearrivee, "yyyy-MM-dd");
         QDate dp=QDate::fromString(datedepart, "yyyy-MM-dd");
         int nbrjours=0;
         nbrjours=da.daysTo(dp);

         MainWindow conn ;

         conn.connOpen();
         QSqlQuery* qry1=new QSqlQuery(conn.mydb);
         QSqlQuery* qry2=new QSqlQuery(conn.mydb);
         QSqlQuery* qry3=new QSqlQuery(conn.mydb);

         QString idutili=QString::number(idutilisateur);
         qry1->prepare("select idhotel from utilisateur where idutilisateur='"+ idutili+"'");
         qry1->exec();
         int idh=0;
         while(qry1->next())
         {
             idh = qry1->value(0).toInt();
         }

         qry2->prepare("select prix from chambre where num_chambre='"+numch+"' and idhotel='"+QString::number(idh)+"'");
         qry2->exec();
         int prixch=0;
         while(qry2->next())
         {
             prixch = qry2->value(0).toInt();
         }

         qry3->prepare("select prixlog from typelogement where typelog='"+typelog+"'");
         qry3->exec();
         float prixlog=0;
         while(qry3->next())
         {
             prixlog = qry3->value(0).toInt();
         }

         conn.connClose();

         float fraisjour=0;
         fraisjour= nbrjours*(prixch + prixlog);



         SejourTermine sejourtermine(nullptr,this,QString::number(idh),typelog,numch,nom,prenom,cin,datearrivee,datedepart,QString::number(nbrjours),QString::number(fraisjour));
         sejourtermine.setModal(true);
         sejourtermine.exec();



      }
}



void ReservationsEnCours::on_client_btn_clicked()
{

        MainWindow conn ;

        conn.connOpen();
        QSqlQuery* qry2=new QSqlQuery(conn.mydb);

        QString idutili=QString::number(idutilisateur);
        qry2->prepare("select idhotel from utilisateur where idutilisateur='"+ idutili+"'");
        qry2->exec();

        int idh=0;
        while(qry2->next())
        {

            idh = qry2->value(0).toInt();
        }

        conn.connClose();

        Client client(nullptr,QString::number(idh),this);
        client.setModal(true);
        client.exec();


}

void ReservationsEnCours::on_ajouterreservation_btn_clicked()
{

    MainWindow conn ;

    conn.connOpen();

    QSqlQuery* qry2=new QSqlQuery(conn.mydb);

    QString idutili=QString::number(idutilisateur);
    qry2->prepare("select idhotel from utilisateur where idutilisateur='"+ idutili+"'");
    qry2->exec();

    int idh=0;
    while(qry2->next())
    {

        idh = qry2->value(0).toInt();
    }
     conn.connClose();

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Ajout d'une réservation", "Le client que vous allez affectez une réservation existe déja? ? ",QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes)
    {


        entrecin entrecin(nullptr,idutili,QString::number(idh),this);
        entrecin.setModal(true);
        entrecin.exec();

     /*   CinReservation cinres(nullptr,idutili,QString::number(idh),this);
        cinres.setModal(true);
        cinres.exec(); */



     }else{

        AjoutClient ajoutclient(nullptr,this,idutili,QString::number(idh));
        ajoutclient.setModal(true);
        ajoutclient.exec();

    }
}


void ReservationsEnCours::on_Compteutili_btn_clicked()
{
    Compte cpt(nullptr,QString::number(idutilisateur));
    cpt.setModal(true);
    cpt.exec();

}

void ReservationsEnCours::on_chambreutil_btn_clicked()
{

    MainWindow conn ;

    conn.connOpen();

    QSqlQuery* qry2=new QSqlQuery(conn.mydb);

    QString idutili=QString::number(idutilisateur);
    qry2->prepare("select idhotel from utilisateur where idutilisateur='"+ idutili+"'");
    qry2->exec();

    int idh=0;
    while(qry2->next())
    {

        idh = qry2->value(0).toInt();
    }
     conn.connClose();

    ChambreUtilisateur ch(nullptr,QString::number(idh));
    ch.setModal(true);
    ch.exec();

}

void ReservationsEnCours::on_typelogutil_btn_clicked()
{
    TypeLogementUtilisateur log(nullptr);
    log.setModal(true);
    log.exec();
}

void ReservationsEnCours::on_cher_ch_cin1_txt_editingFinished()
{
    QString cher=ui->cher_ch_cin1_txt->text();

    MainWindow conn ;

    conn.connOpen();

    if(QString::compare(cher, "") == 0 )
    {
        QSqlQueryModel * modal =new QSqlQueryModel();

        QSqlQuery* qry=new QSqlQuery(conn.mydb);
        QSqlQuery* qry2=new QSqlQuery(conn.mydb);

        QString idutili=QString::number(idutilisateur);
        qry2->prepare("select idhotel from utilisateur where idutilisateur='"+ idutili+"'");
        qry2->exec();
        int count=0;
        int idh=0;
        while(qry2->next())
        {
            count++;
            idh = qry2->value(0).toInt();
        }


        qry->prepare("select date_arrivee,date_depart,num_chambre,nomclient,prenomclient,cinclient,datenaissanceclient,adresseclient,telephoneclient,typelog,nomutil,prenomutil from (((reservation join chambre on reservation.idchambre=chambre.idchambre) join typelogement on reservation.idlogement=typelogement.idlogement) join client on reservation.idclient=client.idclient) join utilisateur on reservation.idutilisateur=utilisateur.idutilisateur where reservation.idhotel='"+QString::number(idh)+"'and sejour_termine=0 ");
        qry->exec();
        modal->setQuery(*qry);

        modal->setHeaderData(0, Qt::Horizontal, QObject::tr("Date arrivée"));
        modal->setHeaderData(1, Qt::Horizontal, QObject::tr("Date départ"));
        modal->setHeaderData(2, Qt::Horizontal, QObject::tr("Num chambre"));
        modal->setHeaderData(3, Qt::Horizontal, QObject::tr("Nom"));
        modal->setHeaderData(4, Qt::Horizontal, QObject::tr("Prénom"));
        modal->setHeaderData(5, Qt::Horizontal, QObject::tr("Cin"));
        modal->setHeaderData(6, Qt::Horizontal, QObject::tr("Date Naissance"));
        modal->setHeaderData(7, Qt::Horizontal, QObject::tr("Adresse"));
        modal->setHeaderData(8, Qt::Horizontal, QObject::tr("Téléphone"));
        modal->setHeaderData(9, Qt::Horizontal, QObject::tr("Type logement"));
        modal->setHeaderData(10, Qt::Horizontal, QObject::tr("Nom agent"));
        modal->setHeaderData(11, Qt::Horizontal, QObject::tr("prénom agent"));

        ui->tableView->setModel(modal);

        conn.connClose();


    }else{


        QSqlQueryModel * modal2 =new QSqlQueryModel();

        QSqlQuery* qry1=new QSqlQuery(conn.mydb);
        QSqlQuery* qry2=new QSqlQuery(conn.mydb);

        QString idutili=QString::number(idutilisateur);
        qry2->prepare("select idhotel from utilisateur where idutilisateur='"+ idutili+"'");
        qry2->exec();
        int count=0;
        int idh=0;
        while(qry2->next())
        {
            count++;
            idh = qry2->value(0).toInt();
        }


        qry1->prepare("select date_arrivee,date_depart,num_chambre,nomclient,prenomclient,cinclient,datenaissanceclient,adresseclient,telephoneclient,typelog,nomutil,prenomutil from (((reservation join chambre on reservation.idchambre=chambre.idchambre) join typelogement on reservation.idlogement=typelogement.idlogement) join client on reservation.idclient=client.idclient) join utilisateur on reservation.idutilisateur=utilisateur.idutilisateur where reservation.idhotel='"+QString::number(idh)+"' and sejour_termine='0' and (cinclient='"+cher+"' or num_chambre='"+cher+"' )" );
     //  qry1->prepare("select * from chambre");
        qry1->exec();


        if(qry1->next())
        {
            modal2->setQuery(*qry1);
            modal2->setHeaderData(0, Qt::Horizontal, QObject::tr("Date arrivée"));
            modal2->setHeaderData(1, Qt::Horizontal, QObject::tr("Date départ"));
            modal2->setHeaderData(2, Qt::Horizontal, QObject::tr("Num chambre"));
            modal2->setHeaderData(3, Qt::Horizontal, QObject::tr("Nom"));
            modal2->setHeaderData(4, Qt::Horizontal, QObject::tr("Prénom"));
            modal2->setHeaderData(5, Qt::Horizontal, QObject::tr("Cin"));
            modal2->setHeaderData(6, Qt::Horizontal, QObject::tr("Date Naissance"));
            modal2->setHeaderData(7, Qt::Horizontal, QObject::tr("Adresse"));
            modal2->setHeaderData(8, Qt::Horizontal, QObject::tr("Téléphone"));
            modal2->setHeaderData(9, Qt::Horizontal, QObject::tr("Type logement"));
            modal2->setHeaderData(10, Qt::Horizontal, QObject::tr("Nom agent"));
            modal2->setHeaderData(11, Qt::Horizontal, QObject::tr("prénom agent"));

            ui->tableView->setModel(modal2);

            conn.connClose();


        }else {
            QMessageBox::warning(this,tr("Chambre ou client introuvale"),tr("La chambre ou le client que vous cherchez est introuvable."));
        }

    }




}



void ReservationsEnCours::on_quitterutil_btn_clicked()
{
    this->hide();

    MainWindow *newmain= new MainWindow();
    newmain->show();

}

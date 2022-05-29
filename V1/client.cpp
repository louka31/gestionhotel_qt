#include "client.h"
#include "ui_client.h"
#include "ui_reservationsencours.h"
#include "reservationsencours.h"
#include "mainwindow.h"
#include <QMessageBox>

Client::Client(QWidget *parent,QString idho,ReservationsEnCours* resencours) :
    QDialog(parent),idhotel(idho),reservationsencours(resencours),
    ui(new Ui::Client)
{
    ui->setupUi(this);



    MainWindow conn ;
    QSqlQueryModel * modal =new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery* qry=new QSqlQuery(conn.mydb);


    qry->prepare("select nomclient, prenomclient, cinclient, datenaissanceclient,adresseclient, telephoneclient from client join client_hotel on client.idclient=client_hotel.idclient where idhotel='"+idhotel+"'");

    qry->exec();
    modal->setQuery(*qry);

    modal->setHeaderData(0, Qt::Horizontal, QObject::tr("Nom"));
    modal->setHeaderData(1, Qt::Horizontal, QObject::tr("Prénom"));
    modal->setHeaderData(2, Qt::Horizontal, QObject::tr("CIN"));
    modal->setHeaderData(3, Qt::Horizontal, QObject::tr("Date naissance"));
    modal->setHeaderData(4, Qt::Horizontal, QObject::tr("Adresse"));
    modal->setHeaderData(5, Qt::Horizontal, QObject::tr("Téléphone"));

    ui->tableViewC->setModel(modal);

    conn.connClose();
}

Client::~Client()
{
    delete ui;
}

void Client::on_tableViewC_activated(const QModelIndex &index)
{
    int ligne = ui->tableViewC->currentIndex().row();

    QString nom=ui->tableViewC->model()->data(ui->tableViewC->model()->index(ligne,0)).toString();
    QString prenom=ui->tableViewC->model()->data(ui->tableViewC->model()->index(ligne,1)).toString();
    QString cin=ui->tableViewC->model()->data(ui->tableViewC->model()->index(ligne,2)).toString();
    QString datenaissance=ui->tableViewC->model()->data(ui->tableViewC->model()->index(ligne,3)).toString();
    QString adresse=ui->tableViewC->model()->data(ui->tableViewC->model()->index(ligne,4)).toString();
    QString telephone=ui->tableViewC->model()->data(ui->tableViewC->model()->index(ligne,5)).toString();

    ui->nomc_txt->setText(nom);
    ui->prenomc_txt->setText(prenom);
    ui->cinc_txt->setText(cin);
    ui->adressec_txt->setText(adresse);
    ui->telephonec_txt->setText(telephone);
    ui->datenaissancec_txt->setDate(QDate::fromString(datenaissance, "yyyy-MM-dd"));


}

void Client::on_modifierc_btn_clicked()
{

    int ligne = ui->tableViewC->currentIndex().row();

    QString cinanc=ui->tableViewC->model()->data(ui->tableViewC->model()->index(ligne,2)).toString();
    QString nom=ui->tableViewC->model()->data(ui->tableViewC->model()->index(ligne,0)).toString();
    QString prenom=ui->tableViewC->model()->data(ui->tableViewC->model()->index(ligne,1)).toString();


    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Modification client", "Voulez-vous vraiment modifier "+nom+" "+prenom+" ? ",QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes)
    {


       QString cin=ui->cinc_txt->text();
       QString nom=ui->nomc_txt->text();
       QString prenom=ui->prenomc_txt->text();
       QString datenaissance=ui->datenaissancec_txt->date().toString("yyyy-MM-dd");
       QString telephone=ui->telephonec_txt->text();
       QString adresse=ui->adressec_txt->text();



       MainWindow conn ;

       conn.connOpen();
       QSqlQuery* qry2=new QSqlQuery(conn.mydb);

       qry2->prepare("update client set nomclient='"+nom+"' ,prenomclient='"+prenom+"' ,adresseclient='"+adresse+"' ,telephoneclient='"+telephone+"' ,datenaissanceclient='"+datenaissance+"' , cinclient='"+cin+"' where cinclient='"+cinanc+"'");
       qry2->exec();


       QSqlQuery* qry=new QSqlQuery(conn.mydb);


       qry->prepare("select nomclient, prenomclient, cinclient, datenaissanceclient,adresseclient, telephoneclient from client join client_hotel on client.idclient=client_hotel.idclient where idhotel='"+idhotel+"'");
       qry->exec();

       QSqlQueryModel * modal =new QSqlQueryModel();

       modal->setQuery(*qry);

       modal->setHeaderData(0, Qt::Horizontal, QObject::tr("Nom"));
       modal->setHeaderData(1, Qt::Horizontal, QObject::tr("Prénom"));
       modal->setHeaderData(2, Qt::Horizontal, QObject::tr("CIN"));
       modal->setHeaderData(3, Qt::Horizontal, QObject::tr("Date naissance"));
       modal->setHeaderData(4, Qt::Horizontal, QObject::tr("Adresse"));
       modal->setHeaderData(5, Qt::Horizontal, QObject::tr("Téléphone"));

       ui->tableViewC->setModel(modal);

       QSqlQueryModel * modal2 =new QSqlQueryModel();

       qry->prepare("select date_arrivee,date_depart,num_chambre,nomclient,prenomclient,cinclient,datenaissanceclient,adresseclient,telephoneclient,typelog,nomutil,prenomutil from (((reservation join chambre on reservation.idchambre=chambre.idchambre) join typelogement on reservation.idlogement=typelogement.idlogement) join client on reservation.idclient=client.idclient) join utilisateur on reservation.idutilisateur=utilisateur.idutilisateur where reservation.idhotel='"+idhotel+"'and sejour_termine=0 ");
       qry->exec();
       modal2->setQuery(*qry);

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

      reservationsencours->ui->tableView->setModel(modal2);

       conn.connClose();



    }

}

void Client::on_cherclientutil_txt_editingFinished()
{
    QString cher=ui->cherclientutil_txt->text();

    MainWindow conn ;

    conn.connOpen();

    if(QString::compare(cher, "") == 0 )
    {
        MainWindow conn ;
        QSqlQueryModel * modal =new QSqlQueryModel();

        conn.connOpen();
        QSqlQuery* qry=new QSqlQuery(conn.mydb);


        qry->prepare("select nomclient, prenomclient, cinclient, datenaissanceclient,adresseclient, telephoneclient from client join client_hotel on client.idclient=client_hotel.idclient where idhotel='"+idhotel+"'");

        qry->exec();
        modal->setQuery(*qry);

        modal->setHeaderData(0, Qt::Horizontal, QObject::tr("Nom"));
        modal->setHeaderData(1, Qt::Horizontal, QObject::tr("Prénom"));
        modal->setHeaderData(2, Qt::Horizontal, QObject::tr("CIN"));
        modal->setHeaderData(3, Qt::Horizontal, QObject::tr("Date naissance"));
        modal->setHeaderData(4, Qt::Horizontal, QObject::tr("Adresse"));
        modal->setHeaderData(5, Qt::Horizontal, QObject::tr("Téléphone"));

        ui->tableViewC->setModel(modal);

        conn.connClose();

    }else{


        MainWindow conn ;
        QSqlQueryModel * modal =new QSqlQueryModel();

        conn.connOpen();
        QSqlQuery* qry=new QSqlQuery(conn.mydb);


        qry->prepare("select nomclient, prenomclient, cinclient, datenaissanceclient,adresseclient, telephoneclient from client join client_hotel on client.idclient=client_hotel.idclient where idhotel='"+idhotel+"' and cinclient='"+cher+"'");

        qry->exec();
        if(qry->next())
        {
            modal->setQuery(*qry);

            modal->setHeaderData(0, Qt::Horizontal, QObject::tr("Nom"));
            modal->setHeaderData(1, Qt::Horizontal, QObject::tr("Prénom"));
            modal->setHeaderData(2, Qt::Horizontal, QObject::tr("CIN"));
            modal->setHeaderData(3, Qt::Horizontal, QObject::tr("Date naissance"));
            modal->setHeaderData(4, Qt::Horizontal, QObject::tr("Adresse"));
            modal->setHeaderData(5, Qt::Horizontal, QObject::tr("Téléphone"));

            ui->tableViewC->setModel(modal);

            conn.connClose();
        }else {
            QMessageBox::warning(this,tr("Client introuvale"),tr("Le client que vous cherchez est introuvable."));
        }


    }
}

void Client::on_supprimer_btn_clicked()
{

    int ligne = ui->tableViewC->currentIndex().row();

    QString cin=ui->tableViewC->model()->data(ui->tableViewC->model()->index(ligne,2)).toString();

    QString nom=ui->tableViewC->model()->data(ui->tableViewC->model()->index(ligne,0)).toString();

    QString prenom=ui->tableViewC->model()->data(ui->tableViewC->model()->index(ligne,1)).toString();



    MainWindow conn ;

    conn.connOpen();
    QSqlQuery* qry=new QSqlQuery(conn.mydb);


    qry->prepare("select * from reservation join client on reservation.idclient=client.idclient where cinclient='"+cin+"'");

    qry->exec();
    if(!qry->next())
    {

        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Supression du client", "Voulez-vous vraiment supprimer "+nom+" "+prenom+" ? ",QMessageBox::Yes | QMessageBox::No);

        if (reply == QMessageBox::Yes)
        {

            QSqlQuery* qry2=new QSqlQuery(conn.mydb);


            qry2->prepare("delete from client where cinclient='"+cin+"'");

            qry2->exec();


            QSqlQueryModel * modal =new QSqlQueryModel();


            QSqlQuery* qry3=new QSqlQuery(conn.mydb);


            qry3->prepare("select nomclient, prenomclient, cinclient, datenaissanceclient,adresseclient, telephoneclient from client join client_hotel on client.idclient=client_hotel.idclient where idhotel='"+idhotel+"'");

            qry3->exec();
            modal->setQuery(*qry3);

            modal->setHeaderData(0, Qt::Horizontal, QObject::tr("Nom"));
            modal->setHeaderData(1, Qt::Horizontal, QObject::tr("Prénom"));
            modal->setHeaderData(2, Qt::Horizontal, QObject::tr("CIN"));
            modal->setHeaderData(3, Qt::Horizontal, QObject::tr("Date naissance"));
            modal->setHeaderData(4, Qt::Horizontal, QObject::tr("Adresse"));
            modal->setHeaderData(5, Qt::Horizontal, QObject::tr("Téléphone"));

            ui->tableViewC->setModel(modal);

            conn.connClose();



        }

    }else{

        QMessageBox::warning(this,tr(""),tr("Vous ne pouvez pas supprimer ce client, il a déja des reservation."));
    }

}

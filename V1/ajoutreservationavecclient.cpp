#include "ajoutreservationavecclient.h"
#include "ui_ajoutreservationavecclient.h"
#include <QMessageBox>
#include "mainwindow.h"
#include "ui_reservationsencours.h"


AjoutReservationAvecClient::AjoutReservationAvecClient(QWidget *parent,ReservationsEnCours* resencours,QString idutili,QString idh,QString idcl) :
    QDialog(parent),reservationsencours(resencours),idutilisateur(idutili),idhotel(idh),idclient(idcl),
    ui(new Ui::AjoutReservationAvecClient)
{
    ui->setupUi(this);

    QString  dateauj= QDate::currentDate().toString("yyyy-MM-dd");

    ui->datearrivear1_txt->setDate(QDate::fromString(dateauj, "yyyy-MM-dd"));
    ui->datedepartar1_txt->setDate(QDate::fromString(dateauj, "yyyy-MM-dd"));

    MainWindow conn ;

    conn.connOpen();

    QSqlQuery* qry1=new QSqlQuery(conn.mydb);
    qry1->prepare("select num_chambre from chambre where reserve='0' and hors_service='0' and idhotel='"+idhotel+"'");
    qry1->exec();


    int count1=0;
    while(qry1->next())
    {
        count1++;
        ui->numchar1_cb->addItem(qry1->value(0).toString());
    }


    QSqlQuery* qry2=new QSqlQuery(conn.mydb);
    qry2->prepare("select typelog from typelogement");
    qry2->exec();


    int count2=0;
    while(qry2->next())
    {
        count2++;
        ui->typelogar1_cb->addItem(qry2->value(0).toString());
    }

      conn.connClose();


}

AjoutReservationAvecClient::~AjoutReservationAvecClient()
{
    delete ui;
}

void AjoutReservationAvecClient::on_ajouterreservation1_btn_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Ajout d'un client", "Voulez vous vraiment ajouter cette réservation ? ",QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes)
    {
        QString datearrivee =ui->datearrivear1_txt->date().toString("yyyy-MM-dd");
        QString datedepart =ui->datedepartar1_txt->date().toString("yyyy-MM-dd");

        QString numch=ui->numchar1_cb->currentText();
        QString typelog=ui->typelogar1_cb->currentText();

        MainWindow conn ;

        conn.connOpen();

        QSqlQuery* qry1=new QSqlQuery(conn.mydb);
        qry1->prepare("select idchambre from chambre where num_chambre='"+numch+"'and idhotel='"+idhotel+"'");
        qry1->exec();
        int idch=0;
        while(qry1->next())
        {
            idch= qry1->value(0).toInt();
        }


        QSqlQuery* qry2=new QSqlQuery(conn.mydb);
        qry2->prepare("select idlogement from typelogement where typelog='"+typelog+"'");
        qry2->exec();
        int idlog=0;
        while(qry2->next())
        {
            idlog=qry2->value(0).toInt();
        }

        QSqlQuery* qry3=new QSqlQuery(conn.mydb);
        qry3->prepare("update chambre set reserve='1' where idchambre='"+QString::number(idch)+"' and idhotel='"+idhotel+"'");
        qry3->exec();



        QSqlQuery* qry4=new QSqlQuery(conn.mydb);
        qry4->prepare("insert into reservation(date_arrivee,date_depart,sejour_termine,idchambre,idlogement,idclient,idutilisateur,idhotel) values ('"+datearrivee+"' ,'" +datedepart+"' ,'0', '"+QString::number(idch) +"' ,'"+QString::number(idlog)+"' ,'"+idclient+"' , '"+idutilisateur+"' , '"+idhotel+"')");
        qry4->exec();

        QSqlQueryModel * modal =new QSqlQueryModel();

        QSqlQuery* qry5=new QSqlQuery(conn.mydb);
        qry5->prepare("select date_arrivee,date_depart,num_chambre,nomclient,prenomclient,cinclient,datenaissanceclient,adresseclient,telephoneclient,typelog,nomutil,prenomutil from (((reservation join chambre on reservation.idchambre=chambre.idchambre) join typelogement on reservation.idlogement=typelogement.idlogement) join client on reservation.idclient=client.idclient) join utilisateur on reservation.idutilisateur=utilisateur.idutilisateur where reservation.idhotel='"+idhotel+"'and sejour_termine=0 ");
        qry5->exec();
        modal->setQuery(*qry5);

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

        reservationsencours->ui->tableView->setModel(modal);

        conn.connClose();


        this->hide();
    }
    else {
        this->hide();
    }

}

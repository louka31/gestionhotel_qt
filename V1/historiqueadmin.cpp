#include "historiqueadmin.h"
#include "ui_historiqueadmin.h"
#include "mainwindow.h"
#include <QMessageBox>

HistoriqueAdmin::HistoriqueAdmin(QWidget *parent,QString idh) :
    QDialog(parent),idhotel(idh),
    ui(new Ui::HistoriqueAdmin)
{
    ui->setupUi(this);

    MainWindow conn ;
    QSqlQueryModel * modal =new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery* qry=new QSqlQuery(conn.mydb);


    qry->prepare("select date_arrivee,date_depart,num_chambre,nomclient,prenomclient,cinclient,datenaissanceclient,adresseclient,telephoneclient,typelog,frais,nomutil,prenomutil from (((reservation join chambre on reservation.idchambre=chambre.idchambre) join typelogement on reservation.idlogement=typelogement.idlogement) join client on reservation.idclient=client.idclient) join utilisateur on reservation.idutilisateur=utilisateur.idutilisateur where reservation.idhotel='"+idhotel+"'and sejour_termine=1 ");
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
    modal->setHeaderData(10, Qt::Horizontal, QObject::tr("Frais"));
    modal->setHeaderData(11, Qt::Horizontal, QObject::tr("Nom agent"));
    modal->setHeaderData(12, Qt::Horizontal, QObject::tr("prénom agent"));

    ui->tableViewHistoriqueAdmin->setModel(modal);

    conn.connClose();
}

HistoriqueAdmin::~HistoriqueAdmin()
{
    delete ui;
}

void HistoriqueAdmin::on_cherhisresadmin_txt_editingFinished()
{
    QString cher=ui->cherhisresadmin_txt ->text();


    if(QString::compare(cher, "") == 0 )
    {
        MainWindow conn ;
        QSqlQueryModel * modal =new QSqlQueryModel();

        conn.connOpen();
        QSqlQuery* qry=new QSqlQuery(conn.mydb);


        qry->prepare("select date_arrivee,date_depart,num_chambre,nomclient,prenomclient,cinclient,datenaissanceclient,adresseclient,telephoneclient,typelog,frais,nomutil,prenomutil from (((reservation join chambre on reservation.idchambre=chambre.idchambre) join typelogement on reservation.idlogement=typelogement.idlogement) join client on reservation.idclient=client.idclient) join utilisateur on reservation.idutilisateur=utilisateur.idutilisateur where reservation.idhotel='"+idhotel+"'and sejour_termine=1 ");
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
        modal->setHeaderData(10, Qt::Horizontal, QObject::tr("Frais"));
        modal->setHeaderData(11, Qt::Horizontal, QObject::tr("Nom agent"));
        modal->setHeaderData(12, Qt::Horizontal, QObject::tr("prénom agent"));

        ui->tableViewHistoriqueAdmin->setModel(modal);

        conn.connClose();
    }else{

        MainWindow conn ;
        QSqlQueryModel * modal =new QSqlQueryModel();

        conn.connOpen();
        QSqlQuery* qry=new QSqlQuery(conn.mydb);


        qry->prepare("select date_arrivee,date_depart,num_chambre,nomclient,prenomclient,cinclient,datenaissanceclient,adresseclient,telephoneclient,typelog,frais,nomutil,prenomutil from (((reservation join chambre on reservation.idchambre=chambre.idchambre) join typelogement on reservation.idlogement=typelogement.idlogement) join client on reservation.idclient=client.idclient) join utilisateur on reservation.idutilisateur=utilisateur.idutilisateur where reservation.idhotel='"+idhotel+"'and sejour_termine=1 and (cinclient='"+cher+"' or num_chambre='"+cher+"' ) ");
        qry->exec();


        if(qry->next())
        {
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
            modal->setHeaderData(10, Qt::Horizontal, QObject::tr("Frais"));
            modal->setHeaderData(11, Qt::Horizontal, QObject::tr("Nom agent"));
            modal->setHeaderData(12, Qt::Horizontal, QObject::tr("prénom agent"));

            ui->tableViewHistoriqueAdmin->setModel(modal);

            conn.connClose();
        }else {
            QMessageBox::warning(this,tr(""),tr("Aucun résultat."));
        }


    }

}

#include "clientadmin.h"
#include "ui_clientadmin.h"
#include "mainwindow.h"
#include <QMessageBox>

ClientAdmin::ClientAdmin(QWidget *parent,QString idh) :
    QDialog(parent),idhotel(idh),
    ui(new Ui::ClientAdmin)
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

    ui->tableViewClientAdmin->setModel(modal);

    conn.connClose();
}

ClientAdmin::~ClientAdmin()
{
    delete ui;
}

void ClientAdmin::on_cherclientadmin_txt_editingFinished()
{

    QString cher=ui->cherclientadmin_txt->text();


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

        ui->tableViewClientAdmin->setModel(modal);

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

            ui->tableViewClientAdmin->setModel(modal);

            conn.connClose();

        }else {
            QMessageBox::warning(this,tr(""),tr("Aucun résultat."));
        }


    }




}

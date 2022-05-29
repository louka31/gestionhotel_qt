#include "gestionhotel.h"
#include "ui_gestionhotel.h"
#include "mainwindow.h"
#include "ajouthotel.h"
#include <QMessageBox>

GestionHotel::GestionHotel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GestionHotel)
{
    ui->setupUi(this);

    MainWindow conn ;
    QSqlQueryModel * modal =new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery* qry=new QSqlQuery(conn.mydb);

    qry->prepare("select nomhotel,adresse,categoriehotel,nomutil,prenomutil,cinutil from hotel join utilisateur on hotel.idhotel=utilisateur.idhotel where role='2'");
    qry->exec();
    modal->setQuery(*qry);

    modal->setHeaderData(0, Qt::Horizontal, QObject::tr("Nom de l'hôtel"));
    modal->setHeaderData(1, Qt::Horizontal, QObject::tr("Adresse"));
    modal->setHeaderData(2, Qt::Horizontal, QObject::tr("categoriehotel"));
    modal->setHeaderData(3, Qt::Horizontal, QObject::tr("Nom administrateur"));
    modal->setHeaderData(4, Qt::Horizontal, QObject::tr("Prénom administrateur"));
    modal->setHeaderData(5, Qt::Horizontal, QObject::tr("CIN administrateur"));


    ui->tableViewGestionHotel->setModel(modal);

    conn.connClose();

}

GestionHotel::~GestionHotel()
{
    delete ui;
}

void GestionHotel::on_ajouterhotel_btn_clicked()
{

    AjoutHotel h(nullptr,this);
    h.setModal(true);
    h.exec();

}

void GestionHotel::on_tableViewGestionHotel_activated(const QModelIndex &index)
{

    int ligne = ui->tableViewGestionHotel->currentIndex().row();

    QString nomhotel=ui->tableViewGestionHotel->model()->data(ui->tableViewGestionHotel->model()->index(ligne,0)).toString();

    MainWindow conn;
    conn.connOpen();

    QSqlQuery* qry=new QSqlQuery(conn.mydb);


    qry->prepare("select idhotel from hotel where nomhotel='"+nomhotel+"'");
    qry->exec();

    int idh=0;
    while(qry->next())
    {

        idh = qry->value(0).toInt();
    }

    QSqlQuery* qry2=new QSqlQuery(conn.mydb);
    qry2->prepare("select * from reservation where idhotel='"+QString::number(idh)+"'");
    qry2->exec();

    int count=0;
    while(qry2->next())
    {
        count++;
    }

    if(count==0)
    {

        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "", "Voulez-vous vraiment supprimer cet hôtel ?" ,QMessageBox::Yes | QMessageBox::No);

        if (reply == QMessageBox::Yes)
        {


            QSqlQuery* qry3=new QSqlQuery(conn.mydb);
            qry3->prepare("delete from hotel where idhotel='"+QString::number(idh)+"'");
            qry3->exec();

            QSqlQueryModel * modal =new QSqlQueryModel();


            QSqlQuery* qry4=new QSqlQuery(conn.mydb);

            qry4->prepare("select nomhotel,adresse,categoriehotel,nomutil,prenomutil,cinutil from hotel join utilisateur on hotel.idhotel=utilisateur.idhotel where role='2'");

            qry4->exec();
            modal->setQuery(*qry4);

            modal->setHeaderData(0, Qt::Horizontal, QObject::tr("Nom de l'hôtel"));
            modal->setHeaderData(1, Qt::Horizontal, QObject::tr("Adresse"));
            modal->setHeaderData(2, Qt::Horizontal, QObject::tr("categoriehotel"));
            modal->setHeaderData(3, Qt::Horizontal, QObject::tr("Nom administrateur"));
            modal->setHeaderData(4, Qt::Horizontal, QObject::tr("Prénom administrateur"));
            modal->setHeaderData(5, Qt::Horizontal, QObject::tr("CIN administrateur"));

            ui->tableViewGestionHotel->setModel(modal);

            conn.connClose();


         }



    }else{

         QMessageBox::warning(this,tr(""),tr("Des réservations affectées à cet hôtel, vous ne pouvez pas le supprimer ."));
    }



}

void GestionHotel::on_quittersuperadmin_btn_clicked()
{
    this->hide();
    MainWindow *newmain= new MainWindow();
    newmain->show();
}

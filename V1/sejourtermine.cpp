#include "sejourtermine.h"
#include "ui_sejourtermine.h"
#include <QMessageBox>
#include "mainwindow.h"
#include "ui_reservationsencours.h"
#include "reservationsencours.h"
#include<QPrintDialog>
#include<QPrinter>
#include<QDebug>
#include<QDateTime>
SejourTermine::SejourTermine(QWidget *parent,ReservationsEnCours* resencours,QString idh, QString tylog,QString nch,QString nm,QString prm, QString cn,QString da,QString dp,QString nbrj,QString frj) :
    QDialog(parent),reservationsencours(resencours),idhotel(idh),typelog(tylog),numch(nch),nom(nm),prenom(prm),cin(cn),datearrivee(da),datedepart(dp),nbrjours(nbrj),fraisejour(frj),
    ui(new Ui::SejourTermine)
{
    ui->setupUi(this);

    ui->numchts_txt->setText(nch);
    ui->typelogts_txt->setText(tylog);
    ui->nomts_txt->setText(nm);
    ui->prenomts_txt->setText(prm);
    ui->cints_txt->setText(cn);
    ui->dats_txt->setText(da);
    ui->dpts_txt->setText(dp);
    ui->nbrsejour_txt->setText(nbrj);
    ui->fraisejour_txt->setText(frj);
    QTimer *timer = new QTimer(this);
        connect(timer, &QTimer::timeout, this, &SejourTermine::myfunction);

        myfunction();


}
void SejourTermine::myfunction()
{
   QDateTime time = QDateTime::currentDateTime();
   QString text = time.toString("dd.MM.yyyy");
 ui->label_12->setText(text);

}

SejourTermine::~SejourTermine()
{
    delete ui;
}

void SejourTermine::on_confirmerts_btn_clicked()
{

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Terminer séjour", "Voulez-vous vraiment terminer ce séjour ? ",QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes)
    {

        MainWindow conn ;

        conn.connOpen();
        QSqlQuery* qry1=new QSqlQuery(conn.mydb);
        QSqlQuery* qry2=new QSqlQuery(conn.mydb);
        QSqlQuery* qry=new QSqlQuery(conn.mydb);
        QSqlQuery* qry4=new QSqlQuery(conn.mydb);

        qry4->prepare("update reservation set frais='"+fraisejour+"' where idchambre=(select idchambre from chambre where num_chambre='"+numch+"' and idhotel='"+idhotel+"') and sejour_termine='0'");
        qry4->exec();

        qry1->prepare("update reservation set sejour_termine='1' where idchambre=(select idchambre from chambre where num_chambre='"+numch+"' and idhotel='"+idhotel+"') and sejour_termine='0'");
        qry1->exec();

        qry2->prepare("update chambre set reserve='0' where idchambre=(select idchambre from chambre where num_chambre='"+numch+"' and idhotel='"+idhotel+"')");
        qry2->exec();

        QSqlQueryModel * modal =new QSqlQueryModel();

        qry->prepare("select date_arrivee,date_depart,num_chambre,nomclient,prenomclient,cinclient,datenaissanceclient,adresseclient,telephoneclient,typelog,nomutil,prenomutil from (((reservation join chambre on reservation.idchambre=chambre.idchambre) join typelogement on reservation.idlogement=typelogement.idlogement) join client on reservation.idclient=client.idclient) join utilisateur on reservation.idutilisateur=utilisateur.idutilisateur where reservation.idhotel='"+idhotel+"'and sejour_termine=0 ");
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

       reservationsencours->ui->tableView->setModel(modal);

        this->hide();

         QPrinter printer ;
         printer.setPrinterName("Facture");
         QPrintDialog dialog(&printer,this);
         if(dialog.exec()==QDialog::Rejected) return;
         conn.connClose();





    }



}

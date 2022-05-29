#include "chambreutilisateur.h"
#include "ui_chambreutilisateur.h"
#include "mainwindow.h"
#include <QMessageBox>

ChambreUtilisateur::ChambreUtilisateur(QWidget *parent,QString idh) :
    QDialog(parent),idhotel(idh),
    ui(new Ui::ChambreUtilisateur)
{
    ui->setupUi(this);

    MainWindow conn ;
    QSqlQueryModel * modal1 =new QSqlQueryModel();
    QSqlQueryModel * modal2 =new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery* qry1=new QSqlQuery(conn.mydb);
    QSqlQuery* qry2=new QSqlQuery(conn.mydb);

    qry1->prepare("select num_chambre,prix from chambre where hors_service='0' and idhotel='"+ idhotel+"'");
    qry2->prepare("select num_chambre,prix from chambre where hors_service='0' and reserve='0' and idhotel='"+ idhotel+"'");

    qry1->exec();
    qry2->exec();

    modal1->setQuery(*qry1);
    modal2->setQuery(*qry2);

    modal1->setHeaderData(0, Qt::Horizontal, QObject::tr("Numéro de chambre"));
    modal1->setHeaderData(1, Qt::Horizontal, QObject::tr("Prix"));

    modal2->setHeaderData(0, Qt::Horizontal, QObject::tr("Numéro de chambre"));
    modal2->setHeaderData(1, Qt::Horizontal, QObject::tr("Prix"));

    ui->tableViewchutil->setModel(modal1);
    ui->tableViewchdispoutil->setModel(modal2);


    conn.connClose();

}

ChambreUtilisateur::~ChambreUtilisateur()
{
    delete ui;

}

void ChambreUtilisateur::on_chambrechercher_txt_editingFinished()
{
    QString cher=ui->chambrechercher_txt->text();

    MainWindow conn ;

    conn.connOpen();

    if(QString::compare(cher, "") == 0 )
    {
        QSqlQuery* qry1=new QSqlQuery(conn.mydb);

        qry1->prepare("select num_chambre,prix from chambre where hors_service='0' and idhotel='"+ idhotel+"'");
         QSqlQueryModel * modal1 =new QSqlQueryModel();

        qry1->exec();

        modal1->setQuery(*qry1);


        modal1->setHeaderData(0, Qt::Horizontal, QObject::tr("Numéro de chambre"));
        modal1->setHeaderData(1, Qt::Horizontal, QObject::tr("Prix"));

        ui->tableViewchutil->setModel(modal1);

    }else{

        QSqlQuery* qry2=new QSqlQuery(conn.mydb);

        qry2->prepare("select num_chambre,prix from chambre where hors_service='0' and idhotel='"+ idhotel+"' and num_chambre='"+cher+"'");
        QSqlQueryModel * modal2 =new QSqlQueryModel();

        qry2->exec();

        if(qry2->next())
        {
            modal2->setQuery(*qry2);


            modal2->setHeaderData(0, Qt::Horizontal, QObject::tr("Numéro de chambre"));
            modal2->setHeaderData(1, Qt::Horizontal, QObject::tr("Prix"));

            ui->tableViewchutil->setModel(modal2);
        }else {
            QMessageBox::warning(this,tr("Chambre introuvale"),tr("La chambre que vous cherchez est introuvable."));
        }


    }

}

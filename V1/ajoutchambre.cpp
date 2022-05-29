#include "ajoutchambre.h"
#include "ui_ajoutchambre.h"
#include "mainwindow.h"
#include "ui_chambreadmin.h"
#include <QMessageBox>

AjoutChambre::AjoutChambre(QWidget *parent,ChambreAdmin* chambread,QString idh) :
    QDialog(parent),chambredmin(chambread),idhotel(idh),
    ui(new Ui::AjoutChambre)
{
    ui->setupUi(this);
}

AjoutChambre::~AjoutChambre()
{
    delete ui;
}

void AjoutChambre::on_ajouterch_btn_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Ajout d'une chambre", "Voulez-vous vraiment ajouter cette chambre ? ",QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes)
    {
        QString numch=ui->numchaj_txt->text();
        QString prix=ui->prixchaj_txt->text();

        MainWindow conn ;

        conn.connOpen();

        QSqlQuery* qry=new QSqlQuery(conn.mydb);
        qry->prepare("insert into chambre(num_chambre,reserve,prix,idhotel,hors_service) values ('"+numch+"', '0', '"+prix+"', '"+idhotel+"', '0')" );
        qry->exec();

        QSqlQueryModel * modal1 =new QSqlQueryModel();
        QSqlQueryModel * modal2 =new QSqlQueryModel();

        conn.connOpen();
        QSqlQuery* qry1=new QSqlQuery(conn.mydb);
        QSqlQuery* qry2=new QSqlQuery(conn.mydb);

        qry1->prepare("select num_chambre,prix from chambre where idhotel='"+ idhotel+"'");
        qry2->prepare("select num_chambre,prix from chambre where hors_service='0' and reserve='0' and idhotel='"+ idhotel+"'");

        qry1->exec();
        qry2->exec();

        modal1->setQuery(*qry1);
        modal2->setQuery(*qry2);

        modal1->setHeaderData(0, Qt::Horizontal, QObject::tr("Numéro de chambre"));
        modal1->setHeaderData(1, Qt::Horizontal, QObject::tr("Prix"));

        modal2->setHeaderData(0, Qt::Horizontal, QObject::tr("Numéro de chambre"));
        modal2->setHeaderData(1, Qt::Horizontal, QObject::tr("Prix"));

        chambredmin->ui->tableViewchambreadmin->setModel(modal1);
        chambredmin->ui->tableViewchdispoadmin->setModel(modal2);


        conn.connClose();
        this->hide();

    }else{
        this->hide();
    }

}

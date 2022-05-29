#include "chambreadmin.h"
#include "ui_chambreadmin.h"
#include "mainwindow.h"
#include "modifchambre.h"
#include "ajoutchambre.h"
#include <QMessageBox>

ChambreAdmin::ChambreAdmin(QWidget *parent,QString idh) :
    QDialog(parent),idhotel(idh),
    ui(new Ui::ChambreAdmin)
{
    ui->setupUi(this);

    MainWindow conn ;
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

    ui->tableViewchambreadmin->setModel(modal1);
    ui->tableViewchdispoadmin->setModel(modal2);


    conn.connClose();

}

ChambreAdmin::~ChambreAdmin()
{
    delete ui;
}

void ChambreAdmin::on_tableViewchambreadmin_activated(const QModelIndex &index)
{
    int ligne = ui->tableViewchambreadmin->currentIndex().row();

    QString numch=ui->tableViewchambreadmin->model()->data(ui->tableViewchambreadmin->model()->index(ligne,0)).toString();
    QString prixch=ui->tableViewchambreadmin->model()->data(ui->tableViewchambreadmin->model()->index(ligne,1)).toString();


    MainWindow conn ;

    conn.connOpen();
    QSqlQuery* qry=new QSqlQuery(conn.mydb);


    qry->prepare("select hors_service from chambre where num_chambre='"+numch+"' and idhotel='"+idhotel+"'");
    qry->exec();

    int hs=0;
    while(qry->next())
    {
        hs = qry->value(0).toInt();
    }


    ModifChambre mch(nullptr,this,idhotel,numch,prixch,hs);
    mch.setModal(true);
    mch.exec();


}

void ChambreAdmin::on_ajouterchambre_btn_clicked()
{

    AjoutChambre ajch(nullptr,this,idhotel);
    ajch.setModal(true);
    ajch.exec();

}

void ChambreAdmin::on_cherchambreadmin_txt_editingFinished()
{
    QString cher=ui->cherchambreadmin_txt->text();


    if(QString::compare(cher, "") == 0 )
    {

        MainWindow conn ;
        QSqlQueryModel * modal1 =new QSqlQueryModel();

        conn.connOpen();
        QSqlQuery* qry1=new QSqlQuery(conn.mydb);

        qry1->prepare("select num_chambre,prix from chambre where idhotel='"+ idhotel+"'");

        qry1->exec();

        modal1->setQuery(*qry1);

        modal1->setHeaderData(0, Qt::Horizontal, QObject::tr("Numéro de chambre"));
        modal1->setHeaderData(1, Qt::Horizontal, QObject::tr("Prix"));


        ui->tableViewchambreadmin->setModel(modal1);

        conn.connClose();

    }else{
        MainWindow conn ;
        QSqlQueryModel * modal1 =new QSqlQueryModel();

        conn.connOpen();
        QSqlQuery* qry1=new QSqlQuery(conn.mydb);

        qry1->prepare("select num_chambre,prix from chambre where idhotel='"+ idhotel+"' and num_chambre='"+cher+"'");

        qry1->exec();

        if(qry1->next())
        {
            modal1->setQuery(*qry1);

            modal1->setHeaderData(0, Qt::Horizontal, QObject::tr("Numéro de chambre"));
            modal1->setHeaderData(1, Qt::Horizontal, QObject::tr("Prix"));


            ui->tableViewchambreadmin->setModel(modal1);

            conn.connClose();
        }else {
            QMessageBox::warning(this,tr("Aucun résultat."),tr("Aucun résultat."));
        }


    }


}

#include "modifchambre.h"
#include "ui_modifchambre.h"
#include <QMessageBox>
#include "mainwindow.h"
#include "ui_chambreadmin.h"

ModifChambre::ModifChambre(QWidget *parent,ChambreAdmin* chad,QString idh,QString numch,QString pr,int hs) :
    QDialog(parent),idhotel(idh),numchambre(numch),prix(pr),horservice(hs),chambreadmin(chad),
    ui(new Ui::ModifChambre)
{
    ui->setupUi(this);

    ui->numchmc_txt->setText(numch);
    ui->prixchambremc_txt->setText(prix);

    if(horservice == 0)
    {
        ui->statutchambre_txt->setText("La chambre est en service");
    }else{
         ui->statutchambre_txt->setText("La chambre est hors service");
    }

}

ModifChambre::~ModifChambre()
{
    delete ui;
}

void ModifChambre::on_modifierprixchambre_btn_clicked()
{

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Modification Prix", "Voulez-vous vraiment modifier le prix de cette chambre ? ",QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes)
    {
        QString prix=ui->prixchambremc_txt->text();
        MainWindow conn ;

        conn.connOpen();

        QSqlQuery* qry=new QSqlQuery(conn.mydb);

        qry->prepare("update chambre set prix='"+prix+"' where num_chambre='"+numchambre+"' and idhotel='"+idhotel+"'");
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

        chambreadmin->ui->tableViewchambreadmin->setModel(modal1);
        chambreadmin->ui->tableViewchdispoadmin->setModel(modal2);


        this->hide();


    }else{
        this->hide();
    }

}

void ModifChambre::on_modfifierstatutchambre_btn_clicked()
{
    QString msg;

    if(horservice == 0 ){
       msg="Voulez-vous vraiment mettre cette chambre hors service ? ";

    }else{
        msg="Voulez-vous vraiment mettre cette chambre en service ? ";
    }

    MainWindow conn ;
    conn.connOpen();

    QSqlQuery* qry2=new QSqlQuery(conn.mydb);
    qry2->prepare("select reserve from chambre where num_chambre='"+numchambre+"' and idhotel='"+idhotel+"'");
    qry2->exec();

    int res=0;
    while(qry2->next())
    {
        res= qry2->value(0).toInt();
    }

    if(res == 0)
    {

        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Modification statut du chambre", msg ,QMessageBox::Yes | QMessageBox::No);

        if (reply == QMessageBox::Yes)
        {

            QSqlQuery* qry=new QSqlQuery(conn.mydb);


            if(horservice == 0)
            {

                    qry->prepare("update chambre set hors_service='1' where num_chambre='"+numchambre+"' and idhotel='"+idhotel+"'");
                    qry->exec();
                    this->hide();


            }else{

                qry->prepare("update chambre set hors_service='0' where num_chambre='"+numchambre+"' and idhotel='"+idhotel+"'");
                qry->exec();
                this->hide();
            }

        }else{
            this->hide();
        }

    }else {
        QMessageBox::warning(this,tr(""),tr("Vous ne pouvez pas mettre cette chambre hors service car elle est déja reservée ."));
    }

}

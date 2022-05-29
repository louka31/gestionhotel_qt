#include "ajouthotel.h"
#include "ui_ajouthotel.h"
#include "mainwindow.h"
#include <QMessageBox>
#include "ui_gestionhotel.h"


AjoutHotel::AjoutHotel(QWidget *parent,GestionHotel* gestionho) :
    QDialog(parent),gestionhotel(gestionho),
    ui(new Ui::AjoutHotel)
{
    ui->setupUi(this);
}

AjoutHotel::~AjoutHotel()
{
    delete ui;
}

void AjoutHotel::on_ajouterhotel2_btn_clicked()
{

    QString nomhotel=ui->nomhotel_txt->text();
    QString adressehotel=ui->adressehotel_txt->text();
    QString categorie=ui->categoriehotel_txt->text();
    QString nom=ui->nomadmin_txt->text();
    QString prenom=ui->prenomadmin_txt->text();
    QString cin=ui->cinadmin_txt->text();
    QString datenaissance =ui->datenaissance_txt->date().toString("yyyy-MM-dd");
    QString adresse=ui->adresseadmin_txt->text();
    QString login=ui->loginadmin_txt->text();
    QString mdp1=ui->mdpadmin1_txt->text();
    QString mdp2=ui->mdpadmin2_txt->text();


    if(QString::compare(mdp1, mdp2) == 0)
    {

        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "", "Voulez-vous vraiment ajouter cet hôtel ?" ,QMessageBox::Yes | QMessageBox::No);

        if (reply == QMessageBox::Yes)
        {

            MainWindow conn ;
            conn.connOpen();

            QSqlQuery* qry=new QSqlQuery(conn.mydb);

            qry->prepare("insert into hotel(nomhotel,adresse,categoriehotel) values('"+nomhotel+"', '"+adressehotel+"', '"+categorie+"')");
            qry->exec();

            QSqlQuery* qry2=new QSqlQuery(conn.mydb);
            qry2->prepare("select idhotel from hotel where nomhotel='"+nomhotel+"'");
            qry2->exec();

            int idh=0;
            while(qry2->next())
            {

                idh = qry2->value(0).toInt();
            }

            QSqlQuery* qry3=new QSqlQuery(conn.mydb);
            qry3->prepare("insert into utilisateur(nomutil,prenomutil,adresseutil,cinutil,datenaissanceutil,login,mdputil,idhotel,role,etat) values ('"+nom+"', '"+prenom+"', '"+adresse+"', '"+cin+"', '"+datenaissance+"', '"+login+"', '"+mdp1+"' ,'"+QString::number(idh)+"', '2','1')");
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


            gestionhotel->ui->tableViewGestionHotel->setModel(modal);
            this->hide();

            conn.connClose();


         }else{

            this->hide();

         }
    }else{

        QMessageBox::warning(this,tr(""),tr("Les deux mots de passe ne sont pas identiques"));

    }

}

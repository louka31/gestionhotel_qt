#include "ajoutemploye.h"
#include "ui_ajoutemploye.h"
#include "ui_employe.h"
#include "mainwindow.h"
#include <QMessageBox>


AjoutEmploye::AjoutEmploye(QWidget *parent,Employe* emp,QString idh) :
    QDialog(parent),employe(emp),idhotel(idh),
    ui(new Ui::AjoutEmploye)
{
    ui->setupUi(this);
}

AjoutEmploye::~AjoutEmploye()
{
    delete ui;
}



void AjoutEmploye::on_ajouteremp_btn_clicked()
{

    QString mdp1=ui->mdp1emaj_txt->text();
    QString mdp2=ui->mdp2empaj_txt->text();

   if(QString::compare(mdp1, mdp2) == 0)
   {

       QMessageBox::StandardButton reply;
       reply = QMessageBox::question(this, "Ajout d'un nouveau utilisateur", "Voulez-vous vraiment ajouter cet utilisateur ? ",QMessageBox::Yes | QMessageBox::No);

       if (reply == QMessageBox::Yes)
       {

           QString nom=ui->nomempaj_ttxt->text();
           QString prenom=ui->prenomempaji_txt->text();
           QString cin=ui->cinempaj_txt->text();
           QString adresse=ui->adresseempajout_txt->text();
           QString login=ui->loginempaj_txt->text();
           QString mdp=ui->mdp1emaj_txt->text();
           QString datenaissance =ui->datenaissanceemaj_txt->date().toString("yyyy-MM-dd");


           MainWindow conn ;

           conn.connOpen();

           QSqlQuery* qry=new QSqlQuery(conn.mydb);
           qry->prepare("insert into utilisateur(nomutil,prenomutil,adresseutil,cinutil,datenaissanceutil,login,mdputil,idhotel,role,etat) values ('"+nom+"', '"+prenom+"', '"+adresse+"', '"+cin+"', '"+datenaissance+"', '"+login+"', '"+mdp+"' ,'"+idhotel+"', '1','1')");
           qry->exec();

           QSqlQueryModel * modal =new QSqlQueryModel();


           QSqlQuery* qry2=new QSqlQuery(conn.mydb);

           qry2->prepare("select nomutil,prenomutil,cinutil,datenaissanceutil,adresseutil from utilisateur where idhotel='"+idhotel+"' and role='1'");
           qry2->exec();
           modal->setQuery(*qry2);

           modal->setHeaderData(0, Qt::Horizontal, QObject::tr("Nom"));
           modal->setHeaderData(1, Qt::Horizontal, QObject::tr("Prénom"));
           modal->setHeaderData(2, Qt::Horizontal, QObject::tr("CIN"));
           modal->setHeaderData(3, Qt::Horizontal, QObject::tr("Date naissance"));
           modal->setHeaderData(4, Qt::Horizontal, QObject::tr("Adresse"));

           employe->ui->tableViewEmploye->setModel(modal);


           this->hide();

      }else{

           this->hide();
       }


   }else{

        QMessageBox::warning(this,tr(""),tr("Les deux mots de passe ne sont pas identiques."));

   }


}

#include "compte.h"
#include "ui_compte.h"
#include "mainwindow.h"
#include <QMessageBox>
#include "ancienmotdepasse.h"

Compte::Compte(QWidget *parent, QString idutili) :
    QDialog(parent),idutilisateur(idutili),
    ui(new Ui::Compte)
{
    ui->setupUi(this);


    MainWindow conn ;

    conn.connOpen();
    QSqlQuery* qry=new QSqlQuery(conn.mydb);


    qry->prepare("select nomutil,prenomutil,adresseutil,cinutil,datenaissanceutil,login from utilisateur where idutilisateur='"+idutilisateur+"'");
    qry->exec();

    QString nom;
    QString prenom;
    QString adresse;
    QString cin;
    QString login;
    QString datenaissance;

    while(qry->next())
    {

      nom= qry->value(0).toString();
      prenom= qry->value(1).toString();
      adresse= qry->value(2).toString();
      cin= qry->value(3).toString();
      datenaissance= qry->value(4).toString();
      login= qry->value(5).toString();
    }

    ui->nomc_txt->setText(nom);
    ui->prenomc_txt->setText(prenom);
    ui->adressec_txt->setText(adresse);
    ui->cinc_txt->setText(cin);
    ui->loginc_txt->setText(login);

    ui->datenaissancec_txt->setDate(QDate::fromString(datenaissance, "yyyy-MM-dd"));

    conn.close();

}

Compte::~Compte()
{
    delete ui;
}

void Compte::on_modifiercompte_btn_clicked()
{

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Modification du profil", "Voulez-vous vraiment enregistrer ces modifications ? ",QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes)
    {
        QString nom=ui->nomc_txt->text();
        QString prenom=ui->prenomc_txt->text();
        QString adresse=ui->adressec_txt->text();
        QString cin=ui->cinc_txt->text();
        QString login=ui->loginc_txt->text();
       QString datenaissance=ui->datenaissancec_txt->date().toString("yyyy-MM-dd");

        MainWindow conn ;

        conn.connOpen();
        QSqlQuery* qry=new QSqlQuery(conn.mydb);


        qry->prepare("update utilisateur set nomutil='"+nom+"', prenomutil='"+prenom+"', adresseutil='"+adresse+"', cinutil='"+cin+"', datenaissanceutil='"+datenaissance+"', login='"+login+"' where idutilisateur='"+idutilisateur+"'");
        qry->exec();

        this->hide();


    }else{
        this->hide();
    }
}

void Compte::on_changermdp_btn_clicked()
{
    AncienMotDePasse amdp(nullptr,idutilisateur);
    amdp.setModal(true);
    amdp.exec();
    this->hide();

}

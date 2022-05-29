#include "modifemploye.h"
#include "ui_modifemploye.h"
#include <QMessageBox>
#include "mainwindow.h"

ModifEmploye::ModifEmploye(QWidget *parent,QString nomemp,QString prenomemp,QString cinemp,int eta) :
    QDialog(parent),nomemploye(nomemp),prenomemploye(prenomemp),cinemploye(cinemp),etat(eta),
    ui(new Ui::ModifEmploye)
{
    ui->setupUi(this);

    if(etat==1){
        ui->etatcompte_txt->setText("Le compte de "+nomemploye+" "+prenomemp+" est activé.");
        ui->activer_desactiver_btn->setText("Désactiver");
    }else{

        ui->etatcompte_txt->setText("Le compte de "+nomemploye+" "+prenomemp+" est désactivé");
        ui->activer_desactiver_btn->setText("Activer");
    }

}

ModifEmploye::~ModifEmploye()
{
    delete ui;
}

void ModifEmploye::on_activer_desactiver_btn_clicked()
{
    QString msg="";

    if(etat==0)
    {
        msg="Voulez-vous vraiment activer le compte de "+nomemploye+" "+prenomemploye+" ?";
    }else{
        msg="Voulez-vous vraiment désactiver le compte de "+nomemploye+" "+prenomemploye+" ?";
    }

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "", msg ,QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes)
    {

        MainWindow conn ;
        conn.connOpen();

        QSqlQuery* qry=new QSqlQuery(conn.mydb);
        if(etat==1){

            qry->prepare("update utilisateur set etat='0' where cinutil='"+cinemploye+"'");
            qry->exec();
            this->hide();

        }else{

            qry->prepare("update utilisateur set etat='1' where cinutil='"+cinemploye+"'");
            qry->exec();
            this->hide();

        }



    }else{
        this->hide();
    }

}

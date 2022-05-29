#include "nouveaumotdepasse.h"
#include "ui_nouveaumotdepasse.h"
#include "mainwindow.h"
#include <QMessageBox>


NouveauMotDePasse::NouveauMotDePasse(QWidget *parent,QString idutili) :
    QDialog(parent),idutilisateur(idutili),
    ui(new Ui::NouveauMotDePasse)
{
    ui->setupUi(this);
}

NouveauMotDePasse::~NouveauMotDePasse()
{
    delete ui;
}

void NouveauMotDePasse::on_modifmdp_btn_clicked()
{

    QString nouvmdp=ui->nouvmdp_txt->text();

    QString nouvmdp2=ui->nouvmdp2_txt->text();

    if( QString::compare(nouvmdp, nouvmdp2) == 0 )
    {

            QMessageBox::StandardButton reply;
            reply = QMessageBox::question(this, "Changement du mot de passe", "Voulez-vous vraiment enregistrer ce nouveau mot de passe? ",QMessageBox::Yes | QMessageBox::No);

            if (reply == QMessageBox::Yes)
            {

                MainWindow conn ;

                conn.connOpen();
                QSqlQuery* qry=new QSqlQuery(conn.mydb);

                qry->prepare("update utilisateur set mdputil='"+nouvmdp+"' where idutilisateur='"+idutilisateur+"'");
                qry->exec();

                 conn.close();
                 this->hide();

              }else{

                this->hide();

              }
    }else{
        QMessageBox::warning(this,tr("Mots de passe incompatibles"),tr("Les mots de passe saisis ne sont pas identiques."));
    }




}

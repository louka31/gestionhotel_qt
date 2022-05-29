#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "tableaudebord.h"
#include "gestionhotel.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}
MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_connecter_btn_clicked()
{
    QString username , password ;
    username=ui->login_txt->text();
    password=ui->mdp_txt->text();

    if( QString::compare(username, "superadmin") == 0 and QString::compare(username, "supernadmin") )
    {
        this->hide();
        GestionHotel gh;
        gh.setModal(true);
        gh.exec();


    }else{
        connOpen();
        QSqlQuery qry;
        qry.prepare("select idutilisateur,idhotel,role,etat from utilisateur where login='"+username+"' and mdputil ='"+password+"' ");


        if(qry.exec())
        {

            int count=0 ;
            int idutil=0;
            int idh=0;
            int role=0;
            int etat=0;
            while(qry.next())
            {
                count++;
                idutil = qry.value(0).toInt();
                idh = qry.value(1).toInt();
                role = qry.value(2).toInt();
                etat = qry.value(3).toInt();
            }

            if(count==1)
            {
                if(etat==1)
                {

                   if(role == 1)
                   {
                       this->hide();
                       ReservationsEnCours reservationsencours(nullptr,idutil);
                       reservationsencours.setModal(true);
                       reservationsencours.exec();
                   }else {
                       this->hide();
                       TableauDeBord tb(nullptr,QString::number(idutil),QString::number(idh));
                       tb.setModal(true);
                       tb.exec();
                   }

                }else {

                   QMessageBox::warning(this,tr(""),tr("Votre compte est désactivé."));

                }

            }
            else
                QMessageBox::warning(this,tr("Login et mot de passes incorrctes"),tr("Le login et le mot de passe sont incorrectes"));

            }

    }
}

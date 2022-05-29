#include "ancienmotdepasse.h"
#include "ui_ancienmotdepasse.h"
#include "mainwindow.h"
#include <QMessageBox>
#include "nouveaumotdepasse.h"

AncienMotDePasse::AncienMotDePasse(QWidget *parent,QString idutili) :
    QDialog(parent),idutilisateur(idutili),
    ui(new Ui::AncienMotDePasse)
{
    ui->setupUi(this);
}

AncienMotDePasse::~AncienMotDePasse()
{
    delete ui;
}


void AncienMotDePasse::on_ancienmdp_btn_clicked()
{
    QString ancienmdp=ui->ancienmdp_txt->text();
    MainWindow conn ;

    conn.connOpen();
    QSqlQuery* qry=new QSqlQuery(conn.mydb);

    qry->prepare("select * from utilisateur where idutilisateur='"+idutilisateur+"' and mdputil='"+ancienmdp+"'");
    qry->exec();


    if(qry->next())
    {

        NouveauMotDePasse nvmdp(nullptr,idutilisateur);
        nvmdp.setModal(true);
        this->hide();
        nvmdp.exec();


    }
  else{

        QMessageBox::warning(this,tr("Mot de passe incorrecte"),tr("Votre mot de passe est incorrecte ."));

    }

    conn.close();


}

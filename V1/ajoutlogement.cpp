#include "ajoutlogement.h"
#include "ui_ajoutlogement.h"
#include "mainwindow.h"
#include "ui_typelogementadmin.h"
#include <QMessageBox>

AjoutLogement::AjoutLogement(QWidget *parent,TypeLogementAdmin* typelogadmin) :
    QDialog(parent),typelogementadmin(typelogadmin),
    ui(new Ui::AjoutLogement)
{
    ui->setupUi(this);
}

AjoutLogement::~AjoutLogement()
{
    delete ui;
}

void AjoutLogement::on_ajouterlogement_btn_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "", "Voulez-vous vraiment ajouter ce type de logement ?" ,QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes)
    {
        QString tylg=ui->typelogaj_txt->text();
        QString prixlog=ui->prixlogaj_txt->text();

        MainWindow conn ;
        conn.connOpen();

        QSqlQuery* qry=new QSqlQuery(conn.mydb);

        qry->prepare("insert into typelogement(typelog, prixlog) values('"+tylg+"', '"+prixlog+"' )" );
        qry->exec();

        QSqlQueryModel * modal1 =new QSqlQueryModel();

        QSqlQuery* qry1=new QSqlQuery(conn.mydb);

        qry1->prepare("select typelog,prixlog from typelogement");

        qry1->exec();

        modal1->setQuery(*qry1);


        modal1->setHeaderData(0, Qt::Horizontal, QObject::tr("Type de logement"));
        modal1->setHeaderData(1, Qt::Horizontal, QObject::tr("Prix"));

        typelogementadmin->ui->tableViewtypelogadmin->setModel(modal1);

        this->hide();


    }else{
        this->hide();
    }
}

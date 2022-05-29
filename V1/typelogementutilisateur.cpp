#include "typelogementutilisateur.h"
#include "ui_typelogementutilisateur.h"
#include "mainwindow.h"

TypeLogementUtilisateur::TypeLogementUtilisateur(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TypeLogementUtilisateur)
{
    ui->setupUi(this);

    MainWindow conn ;
    QSqlQueryModel * modal1 =new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery* qry1=new QSqlQuery(conn.mydb);

    qry1->prepare("select typelog,prixlog from typelogement");

    qry1->exec();

    modal1->setQuery(*qry1);


    modal1->setHeaderData(0, Qt::Horizontal, QObject::tr("Type de logement"));
    modal1->setHeaderData(1, Qt::Horizontal, QObject::tr("Prix"));

    ui->tableViewtypelogutil->setModel(modal1);


}

TypeLogementUtilisateur::~TypeLogementUtilisateur()
{
    delete ui;
}

#include "typelogementadmin.h"
#include "ui_typelogementadmin.h"
#include "mainwindow.h"
#include "modiflog.h"
#include "ajoutlogement.h"

TypeLogementAdmin::TypeLogementAdmin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TypeLogementAdmin)
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

    ui->tableViewtypelogadmin->setModel(modal1);

}

TypeLogementAdmin::~TypeLogementAdmin()
{
    delete ui;
}

void TypeLogementAdmin::on_tableViewtypelogadmin_activated(const QModelIndex &index)
{
    int ligne = ui->tableViewtypelogadmin->currentIndex().row();

    QString typelog=ui->tableViewtypelogadmin->model()->data(ui->tableViewtypelogadmin->model()->index(ligne,0)).toString();
    QString prix=ui->tableViewtypelogadmin->model()->data(ui->tableViewtypelogadmin->model()->index(ligne,1)).toString();

    ModifLog mdlog(nullptr,this,typelog,prix);
    mdlog.setModal(true);
    mdlog.exec();



}

void TypeLogementAdmin::on_ajouterlog_btn_clicked()
{
    AjoutLogement ajlog(nullptr,this);
    ajlog.setModal(true);
    ajlog.exec();

}

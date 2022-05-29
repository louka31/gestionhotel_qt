#include "employe.h"
#include "ui_employe.h"
#include "mainwindow.h"
#include "modifemploye.h"
#include "ajoutemploye.h"
#include <QMessageBox>

Employe::Employe(QWidget *parent,QString idh) :
    QDialog(parent),idhotel(idh),
    ui(new Ui::Employe)
{
    ui->setupUi(this);

    MainWindow conn ;
    QSqlQueryModel * modal =new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery* qry=new QSqlQuery(conn.mydb);

    qry->prepare("select nomutil,prenomutil,cinutil,datenaissanceutil,adresseutil from utilisateur where idhotel='"+idhotel+"' and role=1");
    qry->exec();
    modal->setQuery(*qry);

    modal->setHeaderData(0, Qt::Horizontal, QObject::tr("Nom"));
    modal->setHeaderData(1, Qt::Horizontal, QObject::tr("Prénom"));
    modal->setHeaderData(2, Qt::Horizontal, QObject::tr("CIN"));
    modal->setHeaderData(3, Qt::Horizontal, QObject::tr("Date naissance"));
    modal->setHeaderData(4, Qt::Horizontal, QObject::tr("Adresse"));

    ui->tableViewEmploye->setModel(modal);

    conn.connClose();


}

Employe::~Employe()
{
    delete ui;
}

void Employe::on_tableViewEmploye_activated(const QModelIndex &index)
{
    int ligne = ui->tableViewEmploye->currentIndex().row();

    QString nom=ui->tableViewEmploye->model()->data(ui->tableViewEmploye->model()->index(ligne,0)).toString();
    QString prenom=ui->tableViewEmploye->model()->data(ui->tableViewEmploye->model()->index(ligne,1)).toString();
    QString cin=ui->tableViewEmploye->model()->data(ui->tableViewEmploye->model()->index(ligne,2)).toString();


    MainWindow conn ;

    conn.connOpen();
    QSqlQuery* qry=new QSqlQuery(conn.mydb);


    qry->prepare("select etat from utilisateur where cinutil='"+cin+"'");
    qry->exec();

    int etat=0;
    while(qry->next())
    {
        etat = qry->value(0).toInt();
    }


    ModifEmploye emp(nullptr,nom,prenom,cin,etat);
    emp.setModal(true);
    emp.exec();


}

void Employe::on_ajouteremp_btn_clicked()
{
    AjoutEmploye emp(nullptr,this,idhotel);
    emp.setModal(true);
    emp.exec();
}

void Employe::on_cheremployeadmin_txt_editingFinished()
{

    QString cher=ui->cheremployeadmin_txt->text();


    if(QString::compare(cher, "") == 0 )
    {

        MainWindow conn ;
        QSqlQueryModel * modal =new QSqlQueryModel();

        conn.connOpen();
        QSqlQuery* qry=new QSqlQuery(conn.mydb);

        qry->prepare("select nomutil,prenomutil,cinutil,datenaissanceutil,adresseutil from utilisateur where idhotel='"+idhotel+"' and role=1");
        qry->exec();
        modal->setQuery(*qry);

        modal->setHeaderData(0, Qt::Horizontal, QObject::tr("Nom"));
        modal->setHeaderData(1, Qt::Horizontal, QObject::tr("Prénom"));
        modal->setHeaderData(2, Qt::Horizontal, QObject::tr("CIN"));
        modal->setHeaderData(3, Qt::Horizontal, QObject::tr("Date naissance"));
        modal->setHeaderData(4, Qt::Horizontal, QObject::tr("Adresse"));

        ui->tableViewEmploye->setModel(modal);

        conn.connClose();

    }else{
        MainWindow conn ;
        QSqlQueryModel * modal =new QSqlQueryModel();

        conn.connOpen();
        QSqlQuery* qry=new QSqlQuery(conn.mydb);

        qry->prepare("select nomutil,prenomutil,cinutil,datenaissanceutil,adresseutil from utilisateur where idhotel='"+idhotel+"' and role=1 and cinutil='"+cher+"'");
        qry->exec();

        if(qry->next())
        {

            modal->setQuery(*qry);

            modal->setHeaderData(0, Qt::Horizontal, QObject::tr("Nom"));
            modal->setHeaderData(1, Qt::Horizontal, QObject::tr("Prénom"));
            modal->setHeaderData(2, Qt::Horizontal, QObject::tr("CIN"));
            modal->setHeaderData(3, Qt::Horizontal, QObject::tr("Date naissance"));
            modal->setHeaderData(4, Qt::Horizontal, QObject::tr("Adresse"));

            ui->tableViewEmploye->setModel(modal);

            conn.connClose();

        }else {
            QMessageBox::warning(this,tr(""),tr("Aucun résultat."));
        }


    }

}

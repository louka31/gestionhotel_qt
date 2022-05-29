#include "modiflog.h"
#include "ui_modiflog.h"
#include "ui_typelogementadmin.h"
#include <QMessageBox>
#include "mainwindow.h"

ModifLog::ModifLog(QWidget *parent,TypeLogementAdmin* typelogementad,QString tylog,QString prlog) :
    QDialog(parent),typelogementadmin(typelogementad),typelog(tylog),prixlog(prlog),
    ui(new Ui::ModifLog)
{
    ui->setupUi(this);

    ui->typelogmodfi_txt->setText(typelog);
    ui->prixlogmodif_txt->setText(prixlog);
}

ModifLog::~ModifLog()
{
    delete ui;
}

void ModifLog::on_modifiertypelog_btn_clicked()
{

        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "", "Voulez-vous vraiment modifier ce type de logement ?" ,QMessageBox::Yes | QMessageBox::No);

        if (reply == QMessageBox::Yes)
        {
            QString tylg=ui->typelogmodfi_txt->text();
            QString prixlog=ui->prixlogmodif_txt->text();

            MainWindow conn ;
            conn.connOpen();

            QSqlQuery* qry=new QSqlQuery(conn.mydb);

            qry->prepare("update typelogement set typelog='"+tylg+"', prixlog='"+prixlog+"' where typelog='"+typelog+"'");
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

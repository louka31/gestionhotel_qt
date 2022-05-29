#include "hotel.h"
#include "ui_hotel.h"
#include <QMessageBox>
#include "mainwindow.h"

Hotel::Hotel(QWidget *parent,QString idh,QString nomh,QString adresseh,QString categorieh) :
    QDialog(parent),idhotel(idh),nomhotel(nomh),adressehotel(adresseh),categoriehotel(categorieh),
    ui(new Ui::Hotel)
{
    ui->setupUi(this);

    ui->nomhotel->setText(nomhotel);
    ui->adressehotel->setText(adressehotel);
    ui->categoriehotel->setText(categoriehotel);

}

Hotel::~Hotel()
{
    delete ui;
}

void Hotel::on_modifierhotel_btn_clicked()
{

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "","Voulez-vous vraiment enregistrer ces modifications ? " ,QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes)
    {

        QString nom=ui->nomhotel->text();
        QString adresse=ui->adressehotel->text();
        QString categorie=ui->categoriehotel->text();

        MainWindow conn ;
        conn.connOpen();

        QSqlQuery* qry=new QSqlQuery(conn.mydb);
        qry->prepare("update hotel set nomhotel='"+nom+"', adresse='"+adresse+"', categoriehotel='"+categorie+"' where idhotel='"+idhotel+"'");
        qry->exec();

        conn.close();
        this->hide();

    }else{
        this->hide();
    }

}

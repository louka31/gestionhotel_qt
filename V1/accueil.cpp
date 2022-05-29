#include "accueil.h"
#include "ui_accueil.h"
#include"mainwindow.h"
accueil::accueil(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::accueil)
{
    ui->setupUi(this);
}

accueil::~accueil()
{
    delete ui;
}

void accueil::on_pushButton_clicked()
{ this->hide();
    MainWindow *mDialog = new MainWindow(this);
           mDialog->show();
}

#ifndef SEJOURTERMINE_H
#define SEJOURTERMINE_H

#include <QDialog>
#include <QString>
#include <reservationsencours.h>
#include<QTimer>
namespace Ui {
class SejourTermine;
}

class SejourTermine : public QDialog
{
    Q_OBJECT
public slots :
    void myfunction();
public:
    explicit SejourTermine(QWidget *parent = nullptr,ReservationsEnCours* reservationsencours=nullptr, QString idhotel="", QString typelog="",QString numch="", QString nom="",QString prenom="",QString cin="",QString datearrivee="",QString datedepart="",QString nbrjours="",QString fraisejour="");
    ~SejourTermine();

    ReservationsEnCours* reservationsencours;
    QString idhotel;
    QString typelog;
    QString numch;
    QString nom;
    QString prenom;
    QString cin;
    QString datearrivee;
    QString datedepart;
    QString nbrjours;
    QString fraisejour;


private slots:
    void on_confirmerts_btn_clicked();

private:
    Ui::SejourTermine *ui;
    QTimer *timer;

};

#endif // SEJOURTERMINE_H

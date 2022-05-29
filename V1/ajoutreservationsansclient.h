#ifndef AJOUTRESERVATIONSANSCLIENT_H
#define AJOUTRESERVATIONSANSCLIENT_H
#include "reservationsencours.h"
#include <QDialog>

namespace Ui {
class AjoutReservationSansClient;
}

class AjoutReservationSansClient : public QDialog
{
    Q_OBJECT

public:
    explicit AjoutReservationSansClient(QWidget *parent = nullptr,QString idutilisateur="",QString idhotel="",QString idclient="",QString cinclient="",QString nomclient="",QString prenomclient="",ReservationsEnCours* reservationsencours=nullptr);
    ~AjoutReservationSansClient();

    QString idutilisateur;
    QString idhotel;
    QString idclient;
    QString cinclient;
    QString nomclient;
    QString prenomclient;
    ReservationsEnCours* reservationsencours;

private slots:
    void on_ajouterreservatioar2_btn_clicked();

private:
    Ui::AjoutReservationSansClient *ui;
};

#endif // AJOUTRESERVATIONSANSCLIENT_H

#ifndef AJOUTRESERVATIONAVECCLIENT_H
#define AJOUTRESERVATIONAVECCLIENT_H

#include <QDialog>
#include "reservationsencours.h"

namespace Ui {
class AjoutReservationAvecClient;
}

class AjoutReservationAvecClient : public QDialog
{
    Q_OBJECT

public:
    explicit AjoutReservationAvecClient(QWidget *parent = nullptr,ReservationsEnCours* reservationsencours=nullptr,QString idutilisateur="",QString idhotel="",QString idclient="");
    ~AjoutReservationAvecClient();

    ReservationsEnCours* reservationsencours;
    QString idutilisateur="";
    QString idhotel="";
    QString idclient="";

private slots:
    void on_ajouterreservation1_btn_clicked();

private:
    Ui::AjoutReservationAvecClient *ui;
};

#endif // AJOUTRESERVATIONAVECCLIENT_H

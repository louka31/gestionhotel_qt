#ifndef CINRESERVATION_H
#define CINRESERVATION_H

#include <QDialog>
#include <reservationsencours.h>

namespace Ui {
class CinReservation;
}

class CinReservation : public QDialog
{
    Q_OBJECT

public:
    explicit CinReservation(QWidget *parent = nullptr,QString idutilisateur="",QString idhotel="",ReservationsEnCours* reservationsencours=nullptr);
    ~CinReservation();

    QString idutilisateur;
    QString idhotel;
    ReservationsEnCours* reservationsencours;

private slots:
    void on_affres2_btn_clicked();

private:
    Ui::CinReservation *ui;
};

#endif // CINRESERVATION_H

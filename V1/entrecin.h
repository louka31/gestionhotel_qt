#ifndef ENTRECIN_H
#define ENTRECIN_H

#include <QDialog>
#include <reservationsencours.h>

namespace Ui {
class entrecin;
}

class entrecin : public QDialog
{
    Q_OBJECT

public:
    explicit entrecin(QWidget *parent = nullptr,QString idutilisateur="",QString idhotel="",ReservationsEnCours* reservationsencours=nullptr);
    ~entrecin();

    QString idutilisateur;
    QString idhotel;
    ReservationsEnCours* reservationsencours;

private slots:
    void on_affectereservation2_btn_clicked();

private:
    Ui::entrecin *ui;
};

#endif // ENTRECIN_H

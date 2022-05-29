#ifndef AJOUTCLIENT_H
#define AJOUTCLIENT_H

#include <QDialog>
#include "reservationsencours.h"

namespace Ui {
class AjoutClient;
}

class AjoutClient : public QDialog
{
    Q_OBJECT

public:
    explicit AjoutClient(QWidget *parent = nullptr,ReservationsEnCours* reservationsencours=nullptr, QString idutilisateur="",QString idhotel="");
    ~AjoutClient();

    ReservationsEnCours* reservationsencours;
    QString idutilisateur;
    QString idhotel;

private slots:
    void on_affecterreservation_btn_clicked();

private:
    Ui::AjoutClient *ui;
};

#endif // AJOUTCLIENT_H

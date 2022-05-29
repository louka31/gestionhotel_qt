#ifndef CLIENT_H
#define CLIENT_H

#include <QDialog>
#include "reservationsencours.h"

namespace Ui {
class Client;
}

class Client : public QDialog
{
    Q_OBJECT

public:
    explicit Client(QWidget *parent = nullptr,QString idhotel="",ReservationsEnCours* reservationsencours=nullptr);
    ~Client();

private slots:
    void on_tableViewC_activated(const QModelIndex &index);

    void on_modifierc_btn_clicked();

    void on_cherclientutil_txt_editingFinished();

    void on_supprimer_btn_clicked();

private:
    QString idhotel;
    ReservationsEnCours* reservationsencours;
    Ui::Client *ui;
};

#endif // CLIENT_H

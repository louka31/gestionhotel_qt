#ifndef GESTIONHOTEL_H
#define GESTIONHOTEL_H

#include <QDialog>

namespace Ui {
class GestionHotel;
}

class GestionHotel : public QDialog
{
    Q_OBJECT

public:
    explicit GestionHotel(QWidget *parent = nullptr);
    ~GestionHotel();

private slots:
    void on_ajouterhotel_btn_clicked();

    void on_tableViewGestionHotel_activated(const QModelIndex &index);

    void on_quittersuperadmin_btn_clicked();

public:
    Ui::GestionHotel *ui;
};

#endif // GESTIONHOTEL_H

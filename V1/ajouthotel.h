#ifndef AJOUTHOTEL_H
#define AJOUTHOTEL_H

#include <QDialog>
#include "gestionhotel.h"

namespace Ui {
class AjoutHotel;
}

class AjoutHotel : public QDialog
{
    Q_OBJECT

public:
    explicit AjoutHotel(QWidget *parent = nullptr,GestionHotel* gestionhotel=nullptr);
    ~AjoutHotel();

    GestionHotel* gestionhotel;


private slots:
    void on_ajouterhotel2_btn_clicked();

private:
    Ui::AjoutHotel *ui;
};

#endif // AJOUTHOTEL_H

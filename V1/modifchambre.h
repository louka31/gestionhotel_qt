#ifndef MODIFCHAMBRE_H
#define MODIFCHAMBRE_H

#include <QDialog>
#include "chambreadmin.h"

namespace Ui {
class ModifChambre;
}

class ModifChambre : public QDialog
{
    Q_OBJECT

public:
    explicit ModifChambre(QWidget *parent = nullptr,ChambreAdmin* chambredmin=nullptr, QString idhotel="",QString numchambre="",QString prix="",int horservice=0);
    ~ModifChambre();

    ChambreAdmin* chambreadmin;
    QString idhotel;
    QString numchambre;
    QString prix;
    int horservice;

private slots:
    void on_modifierprixchambre_btn_clicked();

    void on_modfifierstatutchambre_btn_clicked();

private:
    Ui::ModifChambre *ui;
};

#endif // MODIFCHAMBRE_H

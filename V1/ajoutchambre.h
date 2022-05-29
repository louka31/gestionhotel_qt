#ifndef AJOUTCHAMBRE_H
#define AJOUTCHAMBRE_H

#include <QDialog>
#include "chambreadmin.h"

namespace Ui {
class AjoutChambre;
}

class AjoutChambre : public QDialog
{
    Q_OBJECT

public:
    explicit AjoutChambre(QWidget *parent = nullptr,ChambreAdmin* chambredmin=nullptr,QString idhotel="");
    ~AjoutChambre();

    ChambreAdmin* chambredmin=nullptr;
    QString idhotel;


private slots:
    void on_ajouterch_btn_clicked();

private:
    Ui::AjoutChambre *ui;
};

#endif // AJOUTCHAMBRE_H

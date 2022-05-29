#ifndef AJOUTLOGEMENT_H
#define AJOUTLOGEMENT_H

#include <QDialog>
#include "typelogementadmin.h"

namespace Ui {
class AjoutLogement;
}

class AjoutLogement : public QDialog
{
    Q_OBJECT

public:
    explicit AjoutLogement(QWidget *parent = nullptr,TypeLogementAdmin* typelogementadmin=nullptr);
    ~AjoutLogement();

    TypeLogementAdmin* typelogementadmin;



private slots:
    void on_ajouterlogement_btn_clicked();

private:
    Ui::AjoutLogement *ui;
};

#endif // AJOUTLOGEMENT_H

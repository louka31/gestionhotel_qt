#ifndef AJOUTEMPLOYE_H
#define AJOUTEMPLOYE_H

#include <QDialog>
#include "employe.h"

namespace Ui {
class AjoutEmploye;
}

class AjoutEmploye : public QDialog
{
    Q_OBJECT

public:
    explicit AjoutEmploye(QWidget *parent = nullptr,Employe* employe=nullptr,QString idhotel="");
    ~AjoutEmploye();

    Employe* employe;
    QString idhotel;


private slots:

    void on_ajouteremp_btn_clicked();

private:
    Ui::AjoutEmploye *ui;
};

#endif // AJOUTEMPLOYE_H

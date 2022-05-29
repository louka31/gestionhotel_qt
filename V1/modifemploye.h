#ifndef MODIFEMPLOYE_H
#define MODIFEMPLOYE_H

#include <QDialog>

namespace Ui {
class ModifEmploye;
}

class ModifEmploye : public QDialog
{
    Q_OBJECT

public:
    explicit ModifEmploye(QWidget *parent = nullptr,QString nomemploye="",QString prenomemploye="",QString cinemploye="",int etat=0);
    ~ModifEmploye();

    QString nomemploye;
    QString prenomemploye;
    QString cinemploye;
    int etat;
private slots:
    void on_activer_desactiver_btn_clicked();

private:
    Ui::ModifEmploye *ui;
};

#endif // MODIFEMPLOYE_H

#ifndef COMPTE_H
#define COMPTE_H

#include <QDialog>

namespace Ui {
class Compte;
}

class Compte : public QDialog
{
    Q_OBJECT

public:
    explicit Compte(QWidget *parent = nullptr,QString idutilisateur="");
    ~Compte();

    QString idutilisateur;

private slots:
    void on_modifiercompte_btn_clicked();

    void on_changermdp_btn_clicked();

private:
    Ui::Compte *ui;
};

#endif // COMPTE_H

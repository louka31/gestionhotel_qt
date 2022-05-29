#ifndef NOUVEAUMOTDEPASSE_H
#define NOUVEAUMOTDEPASSE_H

#include <QDialog>

namespace Ui {
class NouveauMotDePasse;
}

class NouveauMotDePasse : public QDialog
{
    Q_OBJECT

public:
    explicit NouveauMotDePasse(QWidget *parent = nullptr,QString idutilisateur="");
    ~NouveauMotDePasse();

    QString idutilisateur;

private slots:
    void on_modifmdp_btn_clicked();

private:
    Ui::NouveauMotDePasse *ui;
};

#endif // NOUVEAUMOTDEPASSE_H

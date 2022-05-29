#ifndef ANCIENMOTDEPASSE_H
#define ANCIENMOTDEPASSE_H

#include <QDialog>

namespace Ui {
class AncienMotDePasse;
}

class AncienMotDePasse : public QDialog
{
    Q_OBJECT

public:
    explicit AncienMotDePasse(QWidget *parent = nullptr,QString idutilisateur="");
    ~AncienMotDePasse();

    QString idutilisateur;

private slots:

    void on_ancienmdp_btn_clicked();

private:
    Ui::AncienMotDePasse *ui;
};

#endif // ANCIENMOTDEPASSE_H

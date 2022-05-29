#ifndef HISTORIQUE_H
#define HISTORIQUE_H

#include <QDialog>

namespace Ui {
class Historique;
}

class Historique : public QDialog
{
    Q_OBJECT

public:
    explicit Historique(QWidget *parent = nullptr,int idutilisateur=0);
    ~Historique();

    int idutilisateur;

private slots:


    void on_cherhisresutil_txt_editingFinished();

private:
    Ui::Historique *ui;
};

#endif // HISTORIQUE_H

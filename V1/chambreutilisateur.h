#ifndef CHAMBREUTILISATEUR_H
#define CHAMBREUTILISATEUR_H

#include <QDialog>

namespace Ui {
class ChambreUtilisateur;
}

class ChambreUtilisateur : public QDialog
{
    Q_OBJECT

public:
    explicit ChambreUtilisateur(QWidget *parent = nullptr,QString idhotel="");
    ~ChambreUtilisateur();

    QString idhotel;

private slots:
    void on_chambrechercher_txt_editingFinished();

private:
    Ui::ChambreUtilisateur *ui;
};

#endif // CHAMBREUTILISATEUR_H

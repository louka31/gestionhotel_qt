#ifndef RESERVATIONSENCOURS_H
#define RESERVATIONSENCOURS_H

#include <QDialog>
#include<string>
#include <QTimer>
namespace Ui {
class ReservationsEnCours;
}

class ReservationsEnCours : public QDialog
{  
    Q_OBJECT

public:

    explicit ReservationsEnCours(QWidget *parent = nullptr);
    explicit ReservationsEnCours(QWidget *parent = nullptr,int idutilisateur=0);
    ~ReservationsEnCours();

    int idutilisateur;

public slots :
    void myfunction();

private slots:
    void on_reservationsencours_btn_clicked();

    void on_tableView_activated(const QModelIndex &index);

    void on_modifierreservation_btn_clicked();

    void on_annulerreservation_btn_clicked();

    void on_historique_btn_clicked();

    void on_terminersejour_btn_clicked();


    void on_client_btn_clicked();

    void on_ajouterreservation_btn_clicked();



    void on_Compteutili_btn_clicked();

    void on_chambreutil_btn_clicked();

    void on_typelogutil_btn_clicked();

    void on_cher_ch_cin1_txt_editingFinished();



    void on_quitterutil_btn_clicked();

public:
    Ui::ReservationsEnCours *ui;
      QTimer *timer;

};

#endif // RESERVATIONSENCOURS_H

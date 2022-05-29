#ifndef RESERVATIONENCOURSADMIN_H
#define RESERVATIONENCOURSADMIN_H

#include <QDialog>

namespace Ui {
class ReservationEnCoursAdmin;
}

class ReservationEnCoursAdmin : public QDialog
{
    Q_OBJECT

public:
    explicit ReservationEnCoursAdmin(QWidget *parent = nullptr,QString idhotel="");
    ~ReservationEnCoursAdmin();

    QString idhotel;

private slots:


    void on_rechresencoursadmin_txt_editingFinished();

private:
    Ui::ReservationEnCoursAdmin *ui;
};

#endif // RESERVATIONENCOURSADMIN_H

#ifndef HOTEL_H
#define HOTEL_H

#include <QDialog>

namespace Ui {
class Hotel;
}

class Hotel : public QDialog
{
    Q_OBJECT

public:
    explicit Hotel(QWidget *parent = nullptr,QString idhotel="",QString nomhotel="",QString adressehotel="",QString categoriehotel="");
    ~Hotel();

    QString idhotel;
    QString nomhotel;
    QString adressehotel;
    QString categoriehotel;

private slots:
    void on_modifierhotel_btn_clicked();

private:
    Ui::Hotel *ui;
};

#endif // HOTEL_H

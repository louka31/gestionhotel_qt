#ifndef TABLEAUDEBORD_H
#define TABLEAUDEBORD_H

#include <QDialog>

namespace Ui {
class TableauDeBord;
}

class TableauDeBord : public QDialog
{
    Q_OBJECT

public:
    explicit TableauDeBord(QWidget *parent = nullptr,QString idutilisateur="",QString idhotel="");
    ~TableauDeBord();

    QString idutilisateur;
    QString idhotel;

private slots:
    void on_resencoursadmin_btn_clicked();

    void on_historiqueadmin_btn_clicked();

    void on_clientadmin_btn_clicked();

    void on_chambreadmin_btn_clicked();

    void on_typelogadmin_btn_clicked();

    void on_employeadmin_btn_clicked();

    void on_hoteladmin_btn_clicked();

    void on_compteadmin_btn_clicked();

    void on_quitteradmin_btn_clicked();
private slots :
    void makePlot();
    void makePlot1();

private:
    Ui::TableauDeBord *ui;
};

#endif // TABLEAUDEBORD_H

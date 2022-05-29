#ifndef CHAMBREADMIN_H
#define CHAMBREADMIN_H

#include <QDialog>

namespace Ui {
class ChambreAdmin;
}

class ChambreAdmin : public QDialog
{
    Q_OBJECT

public:
    explicit ChambreAdmin(QWidget *parent = nullptr,QString idhotel="");
    ~ChambreAdmin();

    QString idhotel;


private slots:
    void on_tableViewchambreadmin_activated(const QModelIndex &index);

    void on_ajouterchambre_btn_clicked();

    void on_cherchambreadmin_txt_editingFinished();

public:
    Ui::ChambreAdmin *ui;
};

#endif // CHAMBREADMIN_H

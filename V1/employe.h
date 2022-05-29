#ifndef EMPLOYE_H
#define EMPLOYE_H

#include <QDialog>

namespace Ui {
class Employe;
}

class Employe : public QDialog
{
    Q_OBJECT

public:
    explicit Employe(QWidget *parent = nullptr,QString idhotel="");
    ~Employe();

    QString idhotel;


private slots:
    void on_tableViewEmploye_activated(const QModelIndex &index);

    void on_ajouteremp_btn_clicked();

    void on_cheremployeadmin_txt_editingFinished();

public:
    Ui::Employe *ui;
};

#endif // EMPLOYE_H

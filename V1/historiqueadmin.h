#ifndef HISTORIQUEADMIN_H
#define HISTORIQUEADMIN_H

#include <QDialog>

namespace Ui {
class HistoriqueAdmin;
}

class HistoriqueAdmin : public QDialog
{
    Q_OBJECT

public:
    explicit HistoriqueAdmin(QWidget *parent = nullptr,QString idhotel="");
    ~HistoriqueAdmin();

    QString idhotel;

private slots:
    void on_cherhisresadmin_txt_editingFinished();

private:
    Ui::HistoriqueAdmin *ui;
};

#endif // HISTORIQUEADMIN_H

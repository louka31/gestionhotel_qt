#ifndef CLIENTADMIN_H
#define CLIENTADMIN_H

#include <QDialog>

namespace Ui {
class ClientAdmin;
}

class ClientAdmin : public QDialog
{
    Q_OBJECT

public:
    explicit ClientAdmin(QWidget *parent = nullptr,QString idhotel="");
    ~ClientAdmin();

    QString idhotel;

private slots:
    void on_cherclientadmin_txt_editingFinished();

private:
    Ui::ClientAdmin *ui;
};

#endif // CLIENTADMIN_H

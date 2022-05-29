#ifndef TYPELOGEMENTADMIN_H
#define TYPELOGEMENTADMIN_H

#include <QDialog>

namespace Ui {
class TypeLogementAdmin;
}

class TypeLogementAdmin : public QDialog
{
    Q_OBJECT

public:
    explicit TypeLogementAdmin(QWidget *parent = nullptr);
    ~TypeLogementAdmin();

private slots:
    void on_tableViewtypelogadmin_activated(const QModelIndex &index);

    void on_ajouterlog_btn_clicked();

public:
    Ui::TypeLogementAdmin *ui;
};

#endif // TYPELOGEMENTADMIN_H

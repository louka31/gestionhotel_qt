#ifndef MODIFLOG_H
#define MODIFLOG_H

#include <QDialog>
#include "typelogementadmin.h"

namespace Ui {
class ModifLog;
}

class ModifLog : public QDialog
{
    Q_OBJECT

public:
    explicit ModifLog(QWidget *parent = nullptr,TypeLogementAdmin* typelogementadmin=nullptr,QString typelog="",QString prixlog="");
    ~ModifLog();

    TypeLogementAdmin* typelogementadmin;
    QString typelog ;
    QString prixlog ;

private slots:
    void on_modifiertypelog_btn_clicked();

private:
    Ui::ModifLog *ui;
};

#endif // MODIFLOG_H

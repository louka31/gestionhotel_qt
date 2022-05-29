#ifndef TYPELOGEMENTUTILISATEUR_H
#define TYPELOGEMENTUTILISATEUR_H

#include <QDialog>

namespace Ui {
class TypeLogementUtilisateur;
}

class TypeLogementUtilisateur : public QDialog
{
    Q_OBJECT

public:
    explicit TypeLogementUtilisateur(QWidget *parent = nullptr);
    ~TypeLogementUtilisateur();

private:
    Ui::TypeLogementUtilisateur *ui;
};

#endif // TYPELOGEMENTUTILISATEUR_H

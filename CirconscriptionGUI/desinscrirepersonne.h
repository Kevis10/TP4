#ifndef DESINSCRIREPERSONNE_H
#define DESINSCRIREPERSONNE_H

#include <QtGui/QDialog>
#include "ui_desinscrirepersonne.h"

class DesinscrirePersonne : public QDialog
{
    Q_OBJECT;

public:
    DesinscrirePersonne(QWidget *parent = 0);
    ~DesinscrirePersonne();
    QString reqNas() const;

private slots :

	void valideSuppression();

private:
    Ui::DesinscrirePersonneClass ui;
};

#endif // DESINSCRIREPERSONNE_H

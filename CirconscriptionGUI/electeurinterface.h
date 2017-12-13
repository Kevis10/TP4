#ifndef ELECTEURINTERFACE_H
#define ELECTEURINTERFACE_H

#include <QtGui/QDialog>
#include "ui_electeurinterface.h"
#include "Date.h"
#include "Adresse.h"

class ElecteurInterface : public QDialog
{
    Q_OBJECT

public:
    ElecteurInterface(QWidget *parent = 0);
    ~ElecteurInterface();
    void ajouterElecteur();

    QString reqNas() const;
    QString reqNom() const;
    QString reqPrenom() const;
    util::Date reqDateNaissance() const;
    util::Adresse reqAdresse() const;

private slots:

    	void validerElecteur();

private:
    Ui::ElecteurInterfaceClass ui;
    util::Date m_dateNaissance;
};

#endif // ELECTEURINTERFACE_H

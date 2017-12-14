#ifndef CANDIDATINTERFACE_H
#define CANDIDATINTERFACE_H

#include <QtGui/QDialog>
#include "ui_candidatinterface.h"
#include "Date.h"
#include "Adresse.h"

class CandidatInterface : public QDialog
{
    Q_OBJECT

public:
    CandidatInterface(QWidget *parent = 0);
    ~CandidatInterface();


    QString reqNas() const;
    QString reqNom() const;
    QString reqPrenom() const;
    util::Date reqDateNaissance() const;
    util::Adresse reqAdresse() const;
    int reqParti() const;


private slots:

	void validerCandidat();

private:
    Ui::CandidatInterfaceClass ui;
    util::Date m_dateNaissance;



};

#endif // CANDIDATINTERFACE_H

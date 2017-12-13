#ifndef CIRCONSCRIPTIONGUI_H
#define CIRCONSCRIPTIONGUI_H

#include <QtGui/QMainWindow>
#include "ui_circonscriptiongui.h"
#include "Circonscription.h"
#include <string>
#include <vector>
#include "Personne.h"




using namespace elections;
using namespace std;

class CirconscriptionGUI : public QMainWindow
{
    Q_OBJECT

public:
    CirconscriptionGUI(QWidget *parent = 0);
    ~CirconscriptionGUI();
    void ajouterCandidat(const std::string& p_nas,
			const std::string& p_prenom,
			const std::string& p_nom,
			const util::Date& p_dateNaissance,
			const util::Adresse& p_adresse,
			int p_parti);

    void ajouterElecteur(const std::string& p_nas,
   			const std::string& p_prenom,
   			const std::string& p_nom,
   			const util::Date& p_dateNaissance,
   			const util::Adresse& p_adresse
   			);



    void desinscrirepersonne(const string& p_nas);

    string reqListeFormate() const;

private slots :

void dialogCandidat();
void dialogElecteur();
void dialogDesinscrirePersonne();

private:
    Ui::CirconscriptionGUIClass ui;
    Circonscription m_circonscription;


};

#endif // CIRCONSCRIPTIONGUI_H

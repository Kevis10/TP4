
#include "circonscriptiongui.h"
#include "candidatinterface.h"
#include "Personne.h"
#include "Circonscription.h"
#include "electeurinterface.h"
#include "Electeur.h"
#include "desinscrirepersonne.h"
#include "Date.h"
#include "Adresse.h"
#include <string>
#include <QMessageBox>
#include <sstream>
#include <iostream>



using namespace util;
using namespace std;


CirconscriptionGUI::CirconscriptionGUI(QWidget *parent)
    : QMainWindow(parent),m_circonscription("Circonscription No1",Candidat
    		("000 000 000","Maxime","Landry",Date(20,12,1989),Adresse("rue Langelier","Saint-Amable","J7H K8H","QC",1000),2))
{
	ui.setupUi(this);

	QObject::connect(ui.actionCandidat,SIGNAL(triggered()),this,SLOT(dialogCandidat()));
	QObject::connect(ui.actionElecteur_2,SIGNAL(triggered()),this,SLOT(dialogElecteur()));
	QObject::connect(ui.actionDesinscrire_personne,SIGNAL(triggered()),this,SLOT(dialogDesinscrirePersonne()));

}

CirconscriptionGUI::~CirconscriptionGUI()
{

}

void  CirconscriptionGUI::desinscrirepersonne(const string& p_nas){
	if (Circonscription.personneEstDejaPresente(p_nas)){
		throw PersonneAbsenteException("Impossible de supprimer une personne qui n'existe pas dans la "
				"liste");
	}
	vector<Personne*>::iterator it;
	for(it = m_vInscrits.begin(); it < m_vInscrits.end(); it++){
		if((*it)->reqNas() == p_nas){
			delete (*it);
			it = m_vInscrits.erase(it);
		}
	}
}


void CirconscriptionGUI::dialogDesinscrirePersonne(){ //suppression d'un personne voir tp11

	DesinscrirePersonne desinscriptionPersonne(this);
	if(desinscriptionPersonne.exec()){
		if (desinscriptionPersonne.reqNas().isEmpty()){
			desinscrirepersonne(desinscriptionPersonne.reqNas().toStdString());
		}
		else if
			(desinscrirepersonne(desinscriptionPersonne.reqNas().toStdString())){
		afficherListePersonnes();

	}


}



void CirconscriptionGUI::ajouterCandidat(const std::string& p_nas,
			const std::string& p_prenom,
			const std::string& p_nom,
			const util::Date& p_dateNaissance,
			const util::Adresse& p_adresse,
			int p_parti){


	Candidat personne_candidat(p_nas,p_nom,p_prenom,p_dateNaissance,p_adresse,p_parti);
	if (!this -> m_circonscription.personneDejaPresente(personne_candidat.reqNas())){
	m_vInscrits.push_back(new Candidat(personne_candidat));
}
}

void CirconscriptionGUI::ajouterElecteur(const std::string& p_nas,
			const std::string& p_prenom,
			const std::string& p_nom,
			const util::Date& p_dateNaissance,
			const util::Adresse& p_adresse){


	Electeur personne_electeur(p_nas,p_nom,p_prenom,p_dateNaissance,p_adresse);
	//if (!this -> PersonneDejaPresent(personne_candidat.reqNas())){
	m_vInscrits.push_back(new Electeur(personne_electeur)); }
}

void CirconscriptionGUI::dialogCandidat(){
	CandidatInterface saisieCandidat(this);
	if (saisieCandidat.exec()){
		Circonscription::inscrire(saisieCandidat.reqNas().toStdString(),saisieCandidat.reqPrenom().toStdString(),saisieCandidat.reqNom().toStdString(),saisieCandidat.reqDateNaissance(),saisieCandidat.reqAdresse(),saisieCandidat.reqParti());
		ui.affichage->setText(this->reqListeFormate().c_str()); // affiche la personne
	}

}

void CirconscriptionGUI::dialogElecteur(){
	ElecteurInterface saisieElecteur(this);
	if (saisieElecteur.exec()){
		ajouterElecteur(saisieElecteur.reqNas().toStdString(),saisieElecteur.reqPrenom().toStdString(),saisieElecteur.reqNom().toStdString(),saisieElecteur.reqDateNaissance(),saisieElecteur.reqAdresse());
		ui.affichage->setText(this->reqListeFormate().c_str()); // affiche aussi la personne, changer pour mettre dans le vecteur puis faire une methode pour afficher le vecteur ?
	}

}

string CirconscriptionGUI::reqListeFormate() const { // a transformer en -- afficher liste personnes ( utiliser tableWidget peut etre)
	                                                 // raison probable du bug de l'inscription d'un electeur
	ostringstream os;
	os << "Liste de la circonscription : "<<endl;
	m_circonscription.reqCirconscriptionFormate();
	return os.str();

}

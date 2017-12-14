/*
 * Electeur.cpp
 *
 *  Created on: 2017-11-27
 *      Author: etudiant
 */

#include "Electeur.h"
#include <sstream>

using namespace std;
using namespace util;

namespace elections {


/**
 * \brief Contructeur avec parametres
 *		On construit un objet Electeur avec les valeurs passees en parametres
 *\param[in] p_nas est un string qui represente le numero d'assurance sociale de la personne
 *\param[in] p_prenom est un string qui represente le prenom de la personne
 *\param[in] p_nom est un string qui represente le nom de la personne
 *\param[in] p_dateNaissance est un objet de type date qui represente la date de naissance de la personne
 *\param[in] p_adresse est un string qui represente l'adresse de residence de la personne
 */

Electeur::Electeur(const std::string& p_nas, const std::string& p_prenom, const std::string& p_nom,
		const util::Date& p_dateNaissance, const util::Adresse& p_adresse):Personne(p_nas,p_prenom,p_nom,p_dateNaissance,p_adresse) {


}

/**
 * \brief Retourne dans un flux un electeur formate pour etre facilement lisible
 */


std::string Electeur::reqPersonneFormate() const {
	ostringstream sortie;
	sortie<<"Electeur"<<endl;
	sortie<<"----------------------------------------------"<<endl;
	Personne::reqPersonneFormate();


}

Electeur::~Electeur() {
}

Personne* Electeur::clone() const {
	return new Electeur(*this);
}

void Electeur::verifieInvariant() const {
}

} /* namespace elections */

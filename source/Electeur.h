/*
 * Electeur.h
 *
 *  Created on: 2017-11-27
 *      Author: etudiant
 */

#ifndef ELECTEUR_H_
#define ELECTEUR_H_
#include <string>
#include <iostream>
#include "Personne.h"
#include "Adresse.h"

namespace elections {


/**
 *\class Electeur
 *\brief Cette classe sert au maintien et a la manipulations des electeurs
 *				Attributs: m_nom   Nom de la personne\n
 *				m_prenom prenom de la personne\n
 *				m_nas   numero d'assurance social de la personne, peut etre valide
 *				a l'aide de la fonction validerNAS du namespace util\n
 *				m_dateNaissance objet Date du namespace util representant la date de naissance de la personne\n
 *				m_adresse adresse de la residence de la personne,
 *
 */






class Electeur: public Personne{
public:
	Electeur(const std::string& p_nas, const std::string& p_prenom, const std::string& p_nom,
	const util::Date& p_dateNaissance, const util::Adresse& p_adresse);

	virtual std::string reqPersonneFormate() const;
	virtual Personne* clone() const;
	virtual ~Electeur();

private:
	void verifieInvariant() const;
};

} /* namespace elections */

#endif /* ELECTEUR_H_ */

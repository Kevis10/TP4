/*
 * Candidat.h
 *
 *  Created on: 2017-11-25
 *      Author: etudiant
 */

#ifndef CANDIDAT_H_
#define CANDIDAT_H_
#include <string>
#include "Date.h"
#include "Adresse.h"
#include "Personne.h"
enum PartisPolitiques {BLOC_QUEBECOIS, CONSERVATEUR, INDEPENDANT, LIBERAL,
NOUVEAU_PARTI_DEMOCRATIQUE};

namespace elections {


/**
 *\class candidat
 *\brief Cette classe sert au maintien et a la manipulations des candidats
 *				Attributs: m_nom   Nom de la personne\n
 *				m_prenom prenom de la personne\n
 *				m_nas   numero d'assurance social de la personne, peut etre valide
 *				a l'aide de la fonction validerNAS du namespace util\n
 *				m_dateNaissance objet Date du namespace util representant la date de naissance de la personne\n
 *				m_adresse adresse de la residence de la personne,
 *				m_partipolitique parti politique
 */

class Candidat : public Personne{
public:
	Candidat(const std::string& p_nas,
			const std::string& p_prenom,
			const std::string& p_nom,
			const util::Date& p_dateNaissance,
			const util::Adresse& p_adresse,
			int p_parti);
	std::string reqPartiPolitiqueString() const;
	virtual Personne* clone() const;
	virtual std::string reqPersonneFormate() const ;
private:
	void verifieInvariant() const;
	int m_partipolitique;


};

} /* namespace elections */

#endif /* CANDIDAT_H_ */

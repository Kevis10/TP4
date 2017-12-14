/*
 * Circonscription.h
 *
 *  Created on: 2017-11-29
 *      Author: etudiant
 */

#ifndef CIRCONSCRIPTION_H_
#define CIRCONSCRIPTION_H_
#include <string>
#include <vector>
#include "Candidat.h"


namespace elections {

/**
 *\class Personne
 *\brief Cette classe sert au maintien et a la manipulations des circonscriptions
 *	     elle permet d'inscrire et de desinscrire des personnes (candidats et electeurs)
 *	   	 et de retourner de facon formatee et lisible la liste des personnes
 *	   	 dans cette circonscription ainsi que le depute elu sortant
 *
 *				Attributs: m_nom   Nom de la circonscription\n
 *						   m_deputeElu objet candidat representant la derniere personne elu
 *						   m_vInscrits vecteur comportant les inscrits (candidats et electeurs) de la circonscription
 */



class Circonscription {
public:
	Circonscription(const std::string& p_nom, const Candidat& p_depute);
	~Circonscription();
	std::string reqNom() const;
	Candidat reqDeputeElu() const;
	std::string reqCirconscriptionFormate() const;
	void inscrire(const Personne& p_nouvelInscrit) ;
	void desinscrire(const Personne& p_nouvelInscrit) ;
private:
	bool personneEstDejaPresente(const std::string& p_nas) const;
	void verifieInvariant() const;
	std::string m_nom;
	std::vector<Personne*> m_vInscrits;
	Candidat m_deputeElu;
};

} /* namespace elections */

#endif /* CIRCONSCRIPTION_H_ */

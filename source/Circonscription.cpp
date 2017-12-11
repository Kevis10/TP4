/*
 * Circonscription.cpp
 *
 *  Created on: 2017-11-29
 *      Author: etudiant
 */

#include "Circonscription.h"
#include <sstream>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>



using namespace std;

namespace elections {



Circonscription::~Circonscription() {
	m_vInscrits.clear();
}

Circonscription::Circonscription(const std::string& p_nom,
		const Candidat& p_depute):m_nom(p_nom), m_deputeElu(p_depute){
	PRECONDITION(!(p_nom.empty()));
	POSTCONDITION(m_nom == p_nom);
	INVARIANTS();
}

std::string Circonscription::reqNom() const {
	return m_nom;
}

Candidat Circonscription::reqDeputeElu() const {
	return m_deputeElu;
}

std::string Circonscription::reqCirconscriptionFormate() const {
	ostringstream sortie;
	sortie<<"circonscription : "<<reqNom()<<endl;
	sortie<<"Depute sortant :"<<endl;
	sortie<<m_deputeElu.reqPersonneFormate();
	sortie<<"Liste des inscrits : "<<endl;

	for(int i = 0; i < m_vInscrits.size();i++){
		sortie<<m_vInscrits.at(i)->reqPersonneFormate();
	}
	return sortie.str();
}

void Circonscription::inscrire(const Personne& p_nouvelInscrit) {
	if(personneEstDejaPresente(p_nouvelInscrit.reqNas()) == false){
		m_vInscrits.push_back(p_nouvelInscrit.clone());
	}
	else{
		//throw PersonneDejaPresentException(p_nouvelInscrit.reqPersonneFormate());
	}
}

void Circonscription::verifieInvariant() const {
	INVARIANT(!(m_nom.empty()));
}

void Circonscription::desinscrire(const Personne& p_nouvelInscrit) {
	if(personneEstDejaPresente(p_nouvelInscrit.reqNas()) == false){
		//throw personne est absente
	}
	else{
		std::vector<Personne*>::iterator iter;
		for(iter = m_vInscrits.begin() ;  iter != m_vInscrits.end() ; ++iter){
			{
				if((*iter)->reqNas()==p_nouvelInscrit.reqNas()){
					delete *iter;
					m_vInscrits.erase (iter) ;
				}
			}
		}
	}

}

bool Circonscription::personneEstDejaPresente(const std::string& p_nas) const {
	bool validation = false;
	std::vector<Personne*>::const_iterator iter;
	for(iter = m_vInscrits.begin() ;  iter != m_vInscrits.end() ; ++iter){
		if((*iter)->reqNas() == p_nas){
			validation = true;
			break;
		}
	}
	return validation;
}



} /* namespace elections */



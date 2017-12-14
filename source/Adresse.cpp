/**
 * \file Adresse.cpp
 * \brief classe adresse
 * à modifier
 * \author the
 * \version 0.1
 * \date 2017-10-15
 */
#include <sstream>
#include <iostream>
#include "Adresse.h"
using namespace std;

namespace util
{
/*
 * \brief constructeur
 * \param[in] p_nom rue est un string qui represente le nom de la rue
 * \param[in] p_ville est un string qui represente le nom de la ville
 * \param[in] p_code postal est un string qui represente le code postal de la personne
 * \param[in] p_province est un string qui represente le nom de la province
 * \param[in] p_numerorue rue est un int qui represente le numero de la rue
 * \precondtion : aucun de ces parametres ne doit etre vide
 * 				  le numero de la rue ne doit pas etre negatif
 */

Adresse::Adresse(const std::string& p_nomrue,const std::string& p_ville,
			const std::string& p_codepostal,
			const std::string& p_province, int p_numerorue):m_nomrue(p_nomrue),
			m_ville(p_ville),m_codepostal(p_codepostal),m_province(p_province),m_numerorue(p_numerorue)
{
	PRECONDITION(p_numerorue > 0);
	PRECONDITION(!(p_nomrue.empty()));
	PRECONDITION(!(p_ville.empty()));
	PRECONDITION(!(p_codepostal.empty()));
	PRECONDITION(!(p_province.empty()));

	POSTCONDITION(m_codepostal == p_codepostal);
	POSTCONDITION(m_nomrue == p_nomrue);
	POSTCONDITION(m_ville == p_ville);
	POSTCONDITION(m_numerorue == p_numerorue);
	POSTCONDITION(m_province == p_province);


	INVARIANTS();
}

/**
 *\brief retourne le nom de rue de la personne
 *\return un string qui represente le nom de rue de la personne
 */
std::string Adresse::reqNomRue() const {
	return m_nomrue;
}


/**
 *\brief retourne le nom de la ville
 *\return un string qui represente le nom de la ville
 */
std::string Adresse::reqVille() const {
	return m_ville;
}


/**
 *\brief retourne le code postal de la personne
 *\return un string qui represente le code postal de la personne
 */

std::string Adresse::reqCodePostal() const {
	return m_codepostal;
}


/**
 *\brief retourne le nom de la province
 *\return un string qui represente le nom de la province
 */

std::string Adresse::reqProvince() const {
	return m_province;
}


/**
 *\brief retourne le numero de rue de la personne
 *\return un int qui represente le nom de la personne
 */
int Adresse::reqNumeroRue() const {
	return m_numerorue;
}


/**
 * \brief Assigne les differents attributs de l'adresse a l'objet adresse courant
 * \param[in] p_nom rue est un string qui represente le nom de la rue
 * \param[in] p_ville est un string qui represente le nom de la ville
 * \param[in] p_code postal est un string qui represente le code postal de la personne
 * \param[in] p_province est un string qui represente le nom de la province
 * \param[in] p_numerorue est un int qui represente le numero de la rue
 */

void Adresse::asgAdresse(const std::string& p_nomrue,
		const std::string& p_ville, const std::string& p_codepostal,
		const std::string& p_province, int p_numerorue) {

	PRECONDITION(p_numerorue > 0);
	PRECONDITION(!(p_nomrue.empty()));
	PRECONDITION(!(p_ville.empty()));
	PRECONDITION(!(p_codepostal.empty()));
	PRECONDITION(!(p_province.empty()));

	m_nomrue = p_nomrue;
	m_numerorue = p_numerorue;
	m_ville = p_ville;
	m_province = p_province;
	m_codepostal = p_codepostal;





	POSTCONDITION(m_codepostal == p_codepostal);
	POSTCONDITION(m_nomrue == p_nomrue);
	POSTCONDITION(m_ville == p_ville);
	POSTCONDITION(m_numerorue == p_numerorue);
	POSTCONDITION(m_province == p_province);
	INVARIANTS();




}



/**
 *\brief retourne les informations de l'adresse formatees dans une chaine de caracteres
*/

std::string Adresse::reqAdresseFormate() const {
	ostringstream p_os;
	p_os<<m_numerorue<<", ";
	p_os<<m_nomrue<<", ";
	p_os<<m_ville<<", ";
	p_os<<m_codepostal<<", ";
	p_os<<m_province<<endl;
	return p_os.str();


}


/**
 * \brief surcharge de l'operateur ==
 * \param[in] p_adresse un objet de type adresse valide
 * \return un booleen qui indique si les deux adresse compares sont egales sur la base de tous leurs attributs
 *
 */

bool Adresse::operator ==(const Adresse& p_adresse) const {
	return(p_adresse.m_codepostal==m_codepostal and p_adresse.m_nomrue==m_nomrue and p_adresse.m_numerorue ==m_numerorue
			and p_adresse.m_province==m_province and p_adresse.m_ville==m_ville);
}


/**
 * \brief Surchage de la fonction << d'ecriture dans un ostream
 * \param[in] p_os un ostream vide dans lequel on va ecrire
 * \param[in] p_adrsse est une adresse valide
 * \return un stream dans lequelle on ecrit l'adresse
 */
std::ostream& operator <<(std::ostream& p_os, const Adresse& p_adresse)
{
	p_os<<p_adresse.m_numerorue<<endl;
	p_os<<p_adresse.m_nomrue<<endl;
	p_os<<p_adresse.m_codepostal<<endl;
	p_os<<p_adresse.m_ville<<endl;
	p_os<<p_adresse.m_province<<endl;
	return p_os;

}



void Adresse::verifieInvariant() const {
	INVARIANT(m_numerorue>0);
	INVARIANT(!(m_codepostal.empty()));
	INVARIANT(!(m_nomrue.empty()));
	INVARIANT(!(m_ville .empty()));
	INVARIANT(!(m_province.empty()));

}

} //namespace util


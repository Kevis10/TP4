/*
 * PersonneTesteur.cpp
 *
 *  Created on: 2017-11-28
 *      Author: etudiant
 */

#include <gtest/gtest.h>
#include "Personne.h"
#include "Adresse.h"

using namespace util;
using namespace elections;
using namespace std;

class PersonneTest:public Personne{
public:
	PersonneTest(const std::string& p_nas,
	const std::string& p_prenom,
	const std::string& p_nom,
	const util::Date& p_dateNaissance,
	const util::Adresse& p_adresse):Personne(p_nas,p_prenom,p_nom,p_dateNaissance,p_adresse){

	}
	;
	virtual std::string reqPersonneFormate() const{
		return Personne::reqPersonneFormate();
	}
	virtual Personne* clone() const{

	}

};

class UnePersonne: public ::testing::Test{
public:
	UnePersonne():
		t_personne("309 306 108","Samuel","Bouchard",Date(),Adresse("rue Denault","Beloeil","J3G3V5","QC",1092)){

	}
	PersonneTest t_personne;

}
;

TEST(PersonneTest,testConstructeur){
	PersonneTest p_personne("046 454 286","Samuel","Bouchard",Date(7,12,1996),Adresse("rue Denault","Beloeil","J3G3V5","QC",1092));
	ASSERT_EQ("046 454 286",p_personne.reqNas());
	ASSERT_EQ("Samuel",p_personne.reqPrenom());
	ASSERT_EQ("Bouchard",p_personne.reqNom());
	ASSERT_EQ(Date(7,12,1996),p_personne.reqDateNaissance());
	ASSERT_EQ(Adresse("rue Denault","Beloeil","J3G3V5","QC",1092),p_personne.reqAdresse());
}

TEST_F(UnePersonne,testAsgAdresseValide){
	t_personne.asgAdresse(Adresse("rue D","B","J","Q",1090));
	ASSERT_EQ(Adresse("rue D","B","J","Q",1090),t_personne.reqAdresse());
}

TEST_F(UnePersonne,testreqNas){
	ASSERT_EQ("309 306 108",t_personne.reqNas());
}
TEST_F(UnePersonne,testreqNom){
	ASSERT_EQ("Bouchard",t_personne.reqNom());
}

TEST_F(UnePersonne,testreqPrenom){
	ASSERT_EQ("Samuel",t_personne.reqPrenom());
}
TEST_F(UnePersonne,testreqdateNaissance){
	ASSERT_EQ(Date(),t_personne.reqDateNaissance());
}
TEST_F(UnePersonne,testreqAdressse){
	ASSERT_EQ(Adresse("rue Denault","Beloeil","J3G3V5","QC",1092),t_personne.reqAdresse());
}

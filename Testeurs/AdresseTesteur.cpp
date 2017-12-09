/*
 * AdresseTesteur.cpp
 *
 *  Created on: 2017-11-30
 *      Author: etudiant
 */

#include "Adresse.h"
#include <gtest/gtest.h>

using namespace util;



TEST(Adresse,TestConstructeurParametrevalide){
	Adresse Adressetest("rue Denault","Beloeil","J3G3V5","QC",1092);

	ASSERT_EQ("rue Denault",Adressetest.reqNomRue());

	ASSERT_EQ("Beloeil",Adressetest.reqVille());

	ASSERT_EQ("J3G3V5", Adressetest.reqCodePostal());

	ASSERT_EQ("QC",Adressetest.reqProvince());

	ASSERT_EQ(1092, Adressetest.reqNumeroRue());

}
TEST(Adresse,constructeurParametreNomRueInvalide){
	ASSERT_THROW(Adresse Adressetest("","Beloeil","J3G3V5","QC",1092),PreconditionException)<<
			"Le nom de la rue ne doit pas etre vide";
}

TEST(Adresse,constructeurParametreVilleInvalide){
	ASSERT_THROW(Adresse Adressetest("asdasd","","J3G3V5","QC",1092),PreconditionException)<<
			"Le nom de la ville ne doit pas etre vide";
}
TEST(Adresse,constructeurParametreCodePostalInvalide){
	ASSERT_THROW(Adresse Adressetest("asdasd","agdfgfdg","","QC",1092),PreconditionException)<<
			"Le code postal ne doit pas etre vide";
}

TEST(Adresse,constructeurParametreProvinceInvalide){
	ASSERT_THROW(Adresse Adressetest("asdasd","sdfsdfsdf","J3G3V5","",1092),PreconditionException)<<
			"La province ne doit pas etre vide";
}

TEST(Adresse,constructeurParametreNumeroRueInvalide){
	ASSERT_THROW(Adresse Adressetest("asdasd","sdfsdfsdf","J3G3V5","asdasd",-100),PreconditionException)<<
			"Le numero de rue doit etre positif";
}





class UneAdresse: public::testing::Test{
public:
	UneAdresse():
		t_adresse("rue Denault","Beloeil","J3G3V5","QC",1092){

	};

	Adresse t_adresse;
};

TEST_F(UneAdresse,reqNomRue){
	ASSERT_EQ("rue Denault",t_adresse.reqNomRue());
}

TEST_F(UneAdresse,reqVille){
	ASSERT_EQ("Beloeil",t_adresse.reqVille());
}

TEST_F(UneAdresse,reqCodePostal){
	ASSERT_EQ("J3G3V5",t_adresse.reqCodePostal());
}

TEST_F(UneAdresse,reqProvince){
	ASSERT_EQ("QC",t_adresse.reqProvince());
}

TEST_F(UneAdresse,reqNumeroRue){
	ASSERT_EQ(1092,t_adresse.reqNumeroRue());
}
TEST_F(UneAdresse,reqAdresseFormate){
	std::ostringstream p_os;
	p_os<<t_adresse.reqNumeroRue()<<", ";
	p_os<<t_adresse.reqNomRue()<<", ";
	p_os<<t_adresse.reqVille()<<", ";
	p_os<<t_adresse.reqCodePostal()<<", ";
	p_os<<t_adresse.reqProvince()<<std::endl;



	ASSERT_EQ(p_os.str(),t_adresse.reqAdresseFormate());
}

TEST_F(UneAdresse,asgAdresse){
	t_adresse.asgAdresse("x","c","d","e",8);
	ASSERT_EQ("x",t_adresse.reqNomRue());
	ASSERT_EQ("c",t_adresse.reqVille());
	ASSERT_EQ("d",t_adresse.reqCodePostal());
	ASSERT_EQ("e",t_adresse.reqProvince());
	ASSERT_EQ(8,t_adresse.reqNumeroRue());
}
TEST_F(UneAdresse,asgAdresseInvalide){
	ASSERT_THROW( t_adresse.asgAdresse("","","","",-6),PreconditionException)
	          << "Une adresse ne doit pas accepter de numero de rue negatif ou un attribut vide";
}


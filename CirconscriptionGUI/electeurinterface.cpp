#include "electeurinterface.h"
#include <QMessageBox>
#include <string>
using namespace std;

ElecteurInterface::ElecteurInterface(QWidget *parent)
    :QDialog(parent)
{
	ui.setupUi(this);

	QObject::connect(ui.pushButton_valideElecteur,SIGNAL(clicked()),this,SLOT(validerElecteur()));
}

ElecteurInterface::~ElecteurInterface()
{

}

QString ElecteurInterface::reqNas() const{

	return ui.lineEdit_nase->text();

}

QString ElecteurInterface::reqNom() const{

	return ui.lineEdit_nome->text();

}

QString ElecteurInterface::reqPrenom() const{

	return ui.lineEdit_prenome->text();

}

util::Date ElecteurInterface::reqDateNaissance() const{
	return m_dateNaissance;
}

util::Adresse ElecteurInterface::reqAdresse() const{

	int numrue = ui.spinBox_numruee->value();
	const string nomrue = ui.lineEdit_nomruee->text().toStdString();
	const string ville = ui.lineEdit_villee->text().toStdString();
	const string code = ui.lineEdit_codee->text().toStdString();
	const string prov = ui.lineEdit_prove->text().toStdString();

	return util::Adresse(nomrue,ville,code,prov,numrue);

}



void ElecteurInterface::validerElecteur(){

	if(ui.lineEdit_nase->text().isEmpty()){
		QString message("Le NAS ne doit pas etre vide");
		QMessageBox::information(this,"ERREUR",message);
		return;
	}

	if(ui.lineEdit_nome->text().isEmpty()){
			QString message("Le nom ne doit pas etre vide");
			QMessageBox::information(this,"ERREUR",message);
			return;
		}

	if(ui.lineEdit_prenome->text().isEmpty()){
			QString message("Le prenom ne doit pas etre vide");
			QMessageBox::information(this,"ERREUR",message);
			return;
		}


	if(ui.spinBox_numruee->text().isEmpty()){
				QString message("Le numero de rue ne doit pas etre vide");
				QMessageBox::information(this,"ERREUR",message);
				return;
			}
	if(ui.lineEdit_nomruee->text().isEmpty()){
			QString message("Le nom de rue ne doit pas etre vide");
			QMessageBox::information(this,"ERREUR",message);
			return;
		}
	if(ui.lineEdit_villee->text().isEmpty()){
			QString message("La ville ne doit pas etre vide");
			QMessageBox::information(this,"ERREUR",message);
			return;
		}
	if(ui.lineEdit_codee->text().isEmpty()){
			QString message("Le code postal ne doit pas etre vide");
			QMessageBox::information(this,"ERREUR",message);
			return;
		}
	if(ui.lineEdit_prove->text().isEmpty()){
			QString message("La province ne doit pas etre vide");
			QMessageBox::information(this,"ERREUR",message);
			return;
		}



	QDate qDate = QDate::currentDate();
	if (ui.dateEdite->date() >= qDate){
		QString message ("La date de naissance n'est pas valide");
		QMessageBox::information(this,"ERREUR",message);
		return;
	}

	else {
		m_dateNaissance.asgDate(ui.dateEdite->date().day(),ui.dateEdite->date().month(),ui.dateEdite->date().year());

		accept();
	}
}

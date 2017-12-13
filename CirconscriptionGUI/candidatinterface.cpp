
#include "candidatinterface.h"
#include <QMessageBox>
#include <string>
using namespace std;


CandidatInterface::CandidatInterface(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);

	QObject::connect(ui.pushButton_valideCandidat,SIGNAL(clicked()),this,SLOT(validerCandidat()));

}


CandidatInterface::~CandidatInterface()
{

}

QString CandidatInterface::reqNas() const{

	return ui.lineEdit_nas->text();

}

QString CandidatInterface::reqNom() const{

	return ui.lineEdit_nom->text();

}

QString CandidatInterface::reqPrenom() const{

	return ui.lineEdit_prenom->text();

}

util::Date CandidatInterface::reqDateNaissance() const{
	return m_dateNaissance;
}

util::Adresse CandidatInterface::reqAdresse() const{

	int numrue = ui.spinBox_numrue->value();
	const string nomrue = ui.lineEdit_nomrue->text().toStdString();
	const string ville = ui.lineEdit_ville->text().toStdString();
	const string code = ui.lineEdit_code->text().toStdString();
	const string prov = ui.lineEdit_prov->text().toStdString();

	return util::Adresse(nomrue,ville,code,prov,numrue);

}

int CandidatInterface::reqParti() const{
	return ui.spinBox_parti->value();

}



void CandidatInterface::validerCandidat(){

	if(ui.lineEdit_nas->text().isEmpty()){
		QString message("Le NAS ne doit pas etre vide");
		QMessageBox::information(this,"ERREUR",message);
		return;
	}

	if(ui.lineEdit_nom->text().isEmpty()){
			QString message("Le nom ne doit pas etre vide");
			QMessageBox::information(this,"ERREUR",message);
			return;
		}

	if(ui.lineEdit_prenom->text().isEmpty()){
			QString message("Le prenom ne doit pas etre vide");
			QMessageBox::information(this,"ERREUR",message);
			return;
		}


	if (ui.spinBox_parti->text().isEmpty()){
		QString message("La commission ne doit pas etre vide");
		QMessageBox::information(this,"Erreur!",message);
	}

	if(ui.spinBox_numrue->text().isEmpty()){
				QString message("Le numero de rue ne doit pas etre vide");
				QMessageBox::information(this,"ERREUR",message);
				return;
			}
	if(ui.lineEdit_nomrue->text().isEmpty()){
			QString message("Le nom de rue ne doit pas etre vide");
			QMessageBox::information(this,"ERREUR",message);
			return;
		}
	if(ui.lineEdit_ville->text().isEmpty()){
			QString message("La ville ne doit pas etre vide");
			QMessageBox::information(this,"ERREUR",message);
			return;
		}
	if(ui.lineEdit_code->text().isEmpty()){
			QString message("Le code postal ne doit pas etre vide");
			QMessageBox::information(this,"ERREUR",message);
			return;
		}
	if(ui.lineEdit_prov->text().isEmpty()){
			QString message("La province ne doit pas etre vide");
			QMessageBox::information(this,"ERREUR",message);
			return;
		}


	QDate qDate = QDate::currentDate();
	if (ui.dateEdit->date() >= qDate){
		QString message ("La date de naissance n'est pas valide");
		QMessageBox::information(this,"ERREUR",message);
		return;
	}

	else {
		m_dateNaissance.asgDate(ui.dateEdit->date().day(),ui.dateEdit->date().month(),ui.dateEdit->date().year());

		accept();
	}
}

#include "desinscrirepersonne.h"
#include <QMessageBox>

DesinscrirePersonne::DesinscrirePersonne(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);
	QObject::connect(ui.ButtonValid,SIGNAL(clicked()),this,SLOT(valideSuppression()));
}

DesinscrirePersonne::~DesinscrirePersonne()
{

}

QString DesinscrirePersonne::reqNas() const {

	return ui.lineEdit_nasd->text();


}



void DesinscrirePersonne::valideSuppression(){
	if (ui.lineEdit_nasd->text().isEmpty() ){
		QString message("Veuillez saisir soit le nom ou le prenom ou les deux");
		QMessageBox::information(this,"ERREUR",message);
		return;
	}
	else {
		accept();

	}



}

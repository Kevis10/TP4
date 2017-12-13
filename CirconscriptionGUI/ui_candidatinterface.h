/********************************************************************************
** Form generated from reading UI file 'candidatinterface.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANDIDATINTERFACE_H
#define UI_CANDIDATINTERFACE_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_CandidatInterfaceClass
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLineEdit *lineEdit_nas;
    QLineEdit *lineEdit_nom;
    QLineEdit *lineEdit_prenom;
    QSpinBox *spinBox_parti;
    QPushButton *pushButton_valideCandidat;
    QDateEdit *dateEdit;
    QSpinBox *spinBox_numrue;
    QLineEdit *lineEdit_nomrue;
    QLineEdit *lineEdit_ville;
    QLineEdit *lineEdit_code;
    QLineEdit *lineEdit_prov;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *QuitterBouttonC;

    void setupUi(QDialog *CandidatInterfaceClass)
    {
        if (CandidatInterfaceClass->objectName().isEmpty())
            CandidatInterfaceClass->setObjectName(QString::fromUtf8("CandidatInterfaceClass"));
        CandidatInterfaceClass->resize(818, 547);
        label = new QLabel(CandidatInterfaceClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 60, 55, 17));
        label_2 = new QLabel(CandidatInterfaceClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 100, 55, 17));
        label_3 = new QLabel(CandidatInterfaceClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 150, 55, 17));
        label_5 = new QLabel(CandidatInterfaceClass);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 380, 81, 17));
        lineEdit_nas = new QLineEdit(CandidatInterfaceClass);
        lineEdit_nas->setObjectName(QString::fromUtf8("lineEdit_nas"));
        lineEdit_nas->setGeometry(QRect(120, 60, 113, 21));
        lineEdit_nom = new QLineEdit(CandidatInterfaceClass);
        lineEdit_nom->setObjectName(QString::fromUtf8("lineEdit_nom"));
        lineEdit_nom->setGeometry(QRect(120, 100, 113, 21));
        lineEdit_prenom = new QLineEdit(CandidatInterfaceClass);
        lineEdit_prenom->setObjectName(QString::fromUtf8("lineEdit_prenom"));
        lineEdit_prenom->setGeometry(QRect(120, 150, 113, 21));
        spinBox_parti = new QSpinBox(CandidatInterfaceClass);
        spinBox_parti->setObjectName(QString::fromUtf8("spinBox_parti"));
        spinBox_parti->setGeometry(QRect(150, 380, 49, 27));
        spinBox_parti->setMaximum(4);
        pushButton_valideCandidat = new QPushButton(CandidatInterfaceClass);
        pushButton_valideCandidat->setObjectName(QString::fromUtf8("pushButton_valideCandidat"));
        pushButton_valideCandidat->setGeometry(QRect(560, 500, 85, 27));
        dateEdit = new QDateEdit(CandidatInterfaceClass);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(120, 190, 110, 27));
        dateEdit->setMaximumDateTime(QDateTime(QDate(7931, 12, 20), QTime(23, 59, 59)));
        dateEdit->setMaximumDate(QDate(7931, 12, 20));
        dateEdit->setCurrentSection(QDateTimeEdit::DaySection);
        dateEdit->setCalendarPopup(true);
        spinBox_numrue = new QSpinBox(CandidatInterfaceClass);
        spinBox_numrue->setObjectName(QString::fromUtf8("spinBox_numrue"));
        spinBox_numrue->setGeometry(QRect(120, 250, 49, 27));
        spinBox_numrue->setMaximum(99999);
        lineEdit_nomrue = new QLineEdit(CandidatInterfaceClass);
        lineEdit_nomrue->setObjectName(QString::fromUtf8("lineEdit_nomrue"));
        lineEdit_nomrue->setGeometry(QRect(300, 250, 191, 27));
        lineEdit_ville = new QLineEdit(CandidatInterfaceClass);
        lineEdit_ville->setObjectName(QString::fromUtf8("lineEdit_ville"));
        lineEdit_ville->setGeometry(QRect(600, 250, 131, 27));
        lineEdit_code = new QLineEdit(CandidatInterfaceClass);
        lineEdit_code->setObjectName(QString::fromUtf8("lineEdit_code"));
        lineEdit_code->setGeometry(QRect(170, 310, 113, 27));
        lineEdit_prov = new QLineEdit(CandidatInterfaceClass);
        lineEdit_prov->setObjectName(QString::fromUtf8("lineEdit_prov"));
        lineEdit_prov->setGeometry(QRect(490, 310, 113, 27));
        label_4 = new QLabel(CandidatInterfaceClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 250, 91, 20));
        label_6 = new QLabel(CandidatInterfaceClass);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(14, 190, 111, 20));
        label_7 = new QLabel(CandidatInterfaceClass);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(230, 250, 91, 20));
        label_8 = new QLabel(CandidatInterfaceClass);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(560, 250, 55, 17));
        label_9 = new QLabel(CandidatInterfaceClass);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(90, 310, 91, 20));
        label_10 = new QLabel(CandidatInterfaceClass);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(420, 320, 55, 17));
        label_11 = new QLabel(CandidatInterfaceClass);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(300, 10, 951, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Noto Sans"));
        font.setPointSize(20);
        label_11->setFont(font);
        QuitterBouttonC = new QPushButton(CandidatInterfaceClass);
        QuitterBouttonC->setObjectName(QString::fromUtf8("QuitterBouttonC"));
        QuitterBouttonC->setGeometry(QRect(80, 500, 85, 27));

        retranslateUi(CandidatInterfaceClass);
        QObject::connect(QuitterBouttonC, SIGNAL(clicked()), CandidatInterfaceClass, SLOT(close()));

        QMetaObject::connectSlotsByName(CandidatInterfaceClass);
    } // setupUi

    void retranslateUi(QDialog *CandidatInterfaceClass)
    {
        CandidatInterfaceClass->setWindowTitle(QApplication::translate("CandidatInterfaceClass", "CandidatInterface", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CandidatInterfaceClass", "NAS", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CandidatInterfaceClass", "Nom", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CandidatInterfaceClass", "Prenom", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CandidatInterfaceClass", "Parti Politique", 0, QApplication::UnicodeUTF8));
        pushButton_valideCandidat->setText(QApplication::translate("CandidatInterfaceClass", "Valider", 0, QApplication::UnicodeUTF8));
        dateEdit->setDisplayFormat(QApplication::translate("CandidatInterfaceClass", "dd-MM-yyyy", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CandidatInterfaceClass", "Numero de rue", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CandidatInterfaceClass", "Date de naissance", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("CandidatInterfaceClass", "Nom de rue", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("CandidatInterfaceClass", "Ville", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("CandidatInterfaceClass", "Code postal", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("CandidatInterfaceClass", "Province", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("CandidatInterfaceClass", "Ajout d'un candidat", 0, QApplication::UnicodeUTF8));
        QuitterBouttonC->setText(QApplication::translate("CandidatInterfaceClass", "Quitter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CandidatInterfaceClass: public Ui_CandidatInterfaceClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANDIDATINTERFACE_H

/********************************************************************************
** Form generated from reading UI file 'electeurinterface.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELECTEURINTERFACE_H
#define UI_ELECTEURINTERFACE_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ElecteurInterfaceClass
{
public:
    QLineEdit *lineEdit_nase;
    QLineEdit *lineEdit_prenome;
    QLineEdit *lineEdit_codee;
    QLabel *label_2;
    QLabel *label_8;
    QLineEdit *lineEdit_villee;
    QLineEdit *lineEdit_nome;
    QLineEdit *lineEdit_nomruee;
    QPushButton *pushButton_valideElecteur;
    QDateEdit *dateEdite;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *lineEdit_prove;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_7;
    QLabel *label_11;
    QSpinBox *spinBox_numruee;
    QLabel *label_4;
    QPushButton *QuitterBouton;

    void setupUi(QWidget *ElecteurInterfaceClass)
    {
        if (ElecteurInterfaceClass->objectName().isEmpty())
            ElecteurInterfaceClass->setObjectName(QString::fromUtf8("ElecteurInterfaceClass"));
        ElecteurInterfaceClass->resize(817, 547);
        lineEdit_nase = new QLineEdit(ElecteurInterfaceClass);
        lineEdit_nase->setObjectName(QString::fromUtf8("lineEdit_nase"));
        lineEdit_nase->setGeometry(QRect(116, 60, 113, 21));
        lineEdit_prenome = new QLineEdit(ElecteurInterfaceClass);
        lineEdit_prenome->setObjectName(QString::fromUtf8("lineEdit_prenome"));
        lineEdit_prenome->setGeometry(QRect(116, 150, 113, 21));
        lineEdit_codee = new QLineEdit(ElecteurInterfaceClass);
        lineEdit_codee->setObjectName(QString::fromUtf8("lineEdit_codee"));
        lineEdit_codee->setGeometry(QRect(166, 310, 113, 27));
        label_2 = new QLabel(ElecteurInterfaceClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(46, 100, 55, 17));
        label_8 = new QLabel(ElecteurInterfaceClass);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(556, 250, 55, 17));
        lineEdit_villee = new QLineEdit(ElecteurInterfaceClass);
        lineEdit_villee->setObjectName(QString::fromUtf8("lineEdit_villee"));
        lineEdit_villee->setGeometry(QRect(596, 250, 131, 27));
        lineEdit_nome = new QLineEdit(ElecteurInterfaceClass);
        lineEdit_nome->setObjectName(QString::fromUtf8("lineEdit_nome"));
        lineEdit_nome->setGeometry(QRect(116, 100, 113, 21));
        lineEdit_nomruee = new QLineEdit(ElecteurInterfaceClass);
        lineEdit_nomruee->setObjectName(QString::fromUtf8("lineEdit_nomruee"));
        lineEdit_nomruee->setGeometry(QRect(296, 250, 191, 27));
        pushButton_valideElecteur = new QPushButton(ElecteurInterfaceClass);
        pushButton_valideElecteur->setObjectName(QString::fromUtf8("pushButton_valideElecteur"));
        pushButton_valideElecteur->setGeometry(QRect(556, 500, 85, 27));
        dateEdite = new QDateEdit(ElecteurInterfaceClass);
        dateEdite->setObjectName(QString::fromUtf8("dateEdite"));
        dateEdite->setGeometry(QRect(116, 190, 110, 27));
        dateEdite->setMaximumDateTime(QDateTime(QDate(7931, 12, 20), QTime(23, 59, 59)));
        dateEdite->setMaximumDate(QDate(7931, 12, 20));
        dateEdite->setCurrentSection(QDateTimeEdit::DaySection);
        dateEdite->setCalendarPopup(true);
        label_9 = new QLabel(ElecteurInterfaceClass);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(86, 310, 91, 20));
        label_10 = new QLabel(ElecteurInterfaceClass);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(416, 320, 55, 17));
        lineEdit_prove = new QLineEdit(ElecteurInterfaceClass);
        lineEdit_prove->setObjectName(QString::fromUtf8("lineEdit_prove"));
        lineEdit_prove->setGeometry(QRect(486, 310, 113, 27));
        label_3 = new QLabel(ElecteurInterfaceClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(46, 150, 55, 17));
        label_6 = new QLabel(ElecteurInterfaceClass);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 190, 111, 20));
        label = new QLabel(ElecteurInterfaceClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(56, 60, 55, 17));
        label_7 = new QLabel(ElecteurInterfaceClass);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(226, 250, 91, 20));
        label_11 = new QLabel(ElecteurInterfaceClass);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(296, 10, 951, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Noto Sans"));
        font.setPointSize(20);
        label_11->setFont(font);
        spinBox_numruee = new QSpinBox(ElecteurInterfaceClass);
        spinBox_numruee->setObjectName(QString::fromUtf8("spinBox_numruee"));
        spinBox_numruee->setGeometry(QRect(116, 250, 49, 27));
        spinBox_numruee->setMaximum(99999);
        label_4 = new QLabel(ElecteurInterfaceClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(16, 250, 91, 20));
        QuitterBouton = new QPushButton(ElecteurInterfaceClass);
        QuitterBouton->setObjectName(QString::fromUtf8("QuitterBouton"));
        QuitterBouton->setGeometry(QRect(80, 500, 85, 27));

        retranslateUi(ElecteurInterfaceClass);
        QObject::connect(QuitterBouton, SIGNAL(clicked()), ElecteurInterfaceClass, SLOT(close()));

        QMetaObject::connectSlotsByName(ElecteurInterfaceClass);
    } // setupUi

    void retranslateUi(QWidget *ElecteurInterfaceClass)
    {
        ElecteurInterfaceClass->setWindowTitle(QApplication::translate("ElecteurInterfaceClass", "ElecteurInterface", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ElecteurInterfaceClass", "Nom", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ElecteurInterfaceClass", "Ville", 0, QApplication::UnicodeUTF8));
        pushButton_valideElecteur->setText(QApplication::translate("ElecteurInterfaceClass", "Valider", 0, QApplication::UnicodeUTF8));
        dateEdite->setDisplayFormat(QApplication::translate("ElecteurInterfaceClass", "dd-MM-yyyy", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("ElecteurInterfaceClass", "Code postal", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("ElecteurInterfaceClass", "Province", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ElecteurInterfaceClass", "Prenom", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ElecteurInterfaceClass", "Date de naissance", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ElecteurInterfaceClass", "NAS", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ElecteurInterfaceClass", "Nom de rue", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("ElecteurInterfaceClass", "Ajout d'un electeur", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ElecteurInterfaceClass", "Numero de rue", 0, QApplication::UnicodeUTF8));
        QuitterBouton->setText(QApplication::translate("ElecteurInterfaceClass", "Quitter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ElecteurInterfaceClass: public Ui_ElecteurInterfaceClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELECTEURINTERFACE_H

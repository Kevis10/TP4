/********************************************************************************
** Form generated from reading UI file 'circonscriptiongui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CIRCONSCRIPTIONGUI_H
#define UI_CIRCONSCRIPTIONGUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CirconscriptionGUIClass
{
public:
    QAction *actionCandidat;
    QAction *actionElecteur;
    QAction *actionSupprimer_personne;
    QAction *actionQuitter;
    QAction *actionElecteur_2;
    QAction *actionDesinscrire_personne;
    QWidget *centralwidget;
    QTextBrowser *affichage;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QMenu *menuAjouter_personne;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CirconscriptionGUIClass)
    {
        if (CirconscriptionGUIClass->objectName().isEmpty())
            CirconscriptionGUIClass->setObjectName(QString::fromUtf8("CirconscriptionGUIClass"));
        CirconscriptionGUIClass->resize(800, 600);
        actionCandidat = new QAction(CirconscriptionGUIClass);
        actionCandidat->setObjectName(QString::fromUtf8("actionCandidat"));
        actionElecteur = new QAction(CirconscriptionGUIClass);
        actionElecteur->setObjectName(QString::fromUtf8("actionElecteur"));
        actionSupprimer_personne = new QAction(CirconscriptionGUIClass);
        actionSupprimer_personne->setObjectName(QString::fromUtf8("actionSupprimer_personne"));
        actionQuitter = new QAction(CirconscriptionGUIClass);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        actionElecteur_2 = new QAction(CirconscriptionGUIClass);
        actionElecteur_2->setObjectName(QString::fromUtf8("actionElecteur_2"));
        actionDesinscrire_personne = new QAction(CirconscriptionGUIClass);
        actionDesinscrire_personne->setObjectName(QString::fromUtf8("actionDesinscrire_personne"));
        centralwidget = new QWidget(CirconscriptionGUIClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        affichage = new QTextBrowser(centralwidget);
        affichage->setObjectName(QString::fromUtf8("affichage"));
        affichage->setGeometry(QRect(0, 0, 801, 551));
        CirconscriptionGUIClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CirconscriptionGUIClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 27));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        menuAjouter_personne = new QMenu(menuMenu);
        menuAjouter_personne->setObjectName(QString::fromUtf8("menuAjouter_personne"));
        CirconscriptionGUIClass->setMenuBar(menubar);
        statusbar = new QStatusBar(CirconscriptionGUIClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CirconscriptionGUIClass->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(menuAjouter_personne->menuAction());
        menuMenu->addAction(actionDesinscrire_personne);
        menuMenu->addAction(actionQuitter);
        menuAjouter_personne->addAction(actionCandidat);
        menuAjouter_personne->addAction(actionElecteur_2);

        retranslateUi(CirconscriptionGUIClass);
        QObject::connect(actionQuitter, SIGNAL(triggered()), CirconscriptionGUIClass, SLOT(close()));

        QMetaObject::connectSlotsByName(CirconscriptionGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *CirconscriptionGUIClass)
    {
        CirconscriptionGUIClass->setWindowTitle(QApplication::translate("CirconscriptionGUIClass", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionCandidat->setText(QApplication::translate("CirconscriptionGUIClass", "Candidat", 0, QApplication::UnicodeUTF8));
        actionElecteur->setText(QApplication::translate("CirconscriptionGUIClass", "Electeur", 0, QApplication::UnicodeUTF8));
        actionSupprimer_personne->setText(QApplication::translate("CirconscriptionGUIClass", "Supprimer personne", 0, QApplication::UnicodeUTF8));
        actionQuitter->setText(QApplication::translate("CirconscriptionGUIClass", "Quitter", 0, QApplication::UnicodeUTF8));
        actionElecteur_2->setText(QApplication::translate("CirconscriptionGUIClass", "Electeur", 0, QApplication::UnicodeUTF8));
        actionDesinscrire_personne->setText(QApplication::translate("CirconscriptionGUIClass", "Desinscrire une personne", 0, QApplication::UnicodeUTF8));
        menuMenu->setTitle(QApplication::translate("CirconscriptionGUIClass", "Menu", 0, QApplication::UnicodeUTF8));
        menuAjouter_personne->setTitle(QApplication::translate("CirconscriptionGUIClass", "Ajouter personne", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CirconscriptionGUIClass: public Ui_CirconscriptionGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CIRCONSCRIPTIONGUI_H

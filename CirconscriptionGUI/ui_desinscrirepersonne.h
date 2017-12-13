/********************************************************************************
** Form generated from reading UI file 'desinscrirepersonne.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESINSCRIREPERSONNE_H
#define UI_DESINSCRIREPERSONNE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DesinscrirePersonneClass
{
public:
    QLabel *label;
    QLabel *label_3;
    QLineEdit *lineEdit_nasd;
    QPushButton *ButtonValid;

    void setupUi(QDialog *DesinscrirePersonneClass)
    {
        if (DesinscrirePersonneClass->objectName().isEmpty())
            DesinscrirePersonneClass->setObjectName(QString::fromUtf8("DesinscrirePersonneClass"));
        DesinscrirePersonneClass->resize(560, 407);
        label = new QLabel(DesinscrirePersonneClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 20, 511, 51));
        QFont font;
        font.setPointSize(20);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        label->setFrameShadow(QFrame::Plain);
        label_3 = new QLabel(DesinscrirePersonneClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 210, 55, 17));
        lineEdit_nasd = new QLineEdit(DesinscrirePersonneClass);
        lineEdit_nasd->setObjectName(QString::fromUtf8("lineEdit_nasd"));
        lineEdit_nasd->setGeometry(QRect(160, 200, 113, 27));
        ButtonValid = new QPushButton(DesinscrirePersonneClass);
        ButtonValid->setObjectName(QString::fromUtf8("ButtonValid"));
        ButtonValid->setGeometry(QRect(420, 360, 85, 27));

        retranslateUi(DesinscrirePersonneClass);

        QMetaObject::connectSlotsByName(DesinscrirePersonneClass);
    } // setupUi

    void retranslateUi(QDialog *DesinscrirePersonneClass)
    {
        DesinscrirePersonneClass->setWindowTitle(QApplication::translate("DesinscrirePersonneClass", "DesinscrirePersonne", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DesinscrirePersonneClass", "Desinscription d'une personne", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DesinscrirePersonneClass", "Nas", 0, QApplication::UnicodeUTF8));
        ButtonValid->setText(QApplication::translate("DesinscrirePersonneClass", "Valider", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DesinscrirePersonneClass: public Ui_DesinscrirePersonneClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESINSCRIREPERSONNE_H

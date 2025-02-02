/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *send;
    QLabel *math_2;
    QLineEdit *math;
    QLineEdit *sc;
    QLineEdit *letter;
    QLineEdit *eco;
    QLineEdit *sport;
    QLineEdit *tec;
    QLabel *science;
    QLabel *label_3;
    QLabel *eco_2;
    QLabel *sports;
    QLabel *tech;
    QLineEdit *info;
    QLabel *tech_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(855, 630);
        MainWindow->setStyleSheet(QString::fromUtf8("/* General styling for the main window */\n"
"QWidget {\n"
"    background-color: #2C3E50;\n"
"    font-family: 'Arial', sans-serif;\n"
"    color: #ECF0F1;\n"
"    padding: 20px;\n"
"    border-radius: 15px;\n"
"}\n"
"\n"
"/* Styling for all QLabel widgets (section labels) */\n"
"QLabel {\n"
"    font-size: 20px;\n"
"    color: #ECF0F1;\n"
"    padding: 10px;\n"
"    font-weight: bold;\n"
"    border-bottom: 2px solid #3498DB; /* Underline for a modern look */\n"
"}\n"
"\n"
"/* Focused QLabel styles for each section */\n"
"QLabel#math {\n"
"    color: #3498DB;\n"
"}\n"
"\n"
"QLabel#science {\n"
"    color: #1ABC9C;\n"
"}\n"
"\n"
"QLabel#sports {\n"
"    color: #E67E22;\n"
"}\n"
"\n"
"QLabel#eco {\n"
"    color: #2ECC71;\n"
"}\n"
"\n"
"QLabel#tech {\n"
"    color: #F39C12;\n"
"}\n"
"\n"
"QLabel#info {\n"
"    color: #9B59B6;\n"
"}\n"
"\n"
"/* Styling for QLineEdit widgets (input fields) */\n"
"QLineEdit {\n"
"    background-color: #34495E;\n"
"    color: #ECF0F1;\n"
"    border: 2px solid #7F8C8D;\n"
"    bord"
                        "er-radius: 10px;\n"
"    padding: 15px;\n"
"    font-size: 16px;\n"
"    transition: border-color 0.3s ease, background-color 0.3s ease;\n"
"}\n"
"\n"
"/* Focused QLineEdit styles */\n"
"QLineEdit:focus {\n"
"    border: 2px solid #3498DB;\n"
"    background-color: #2C3E50;\n"
"}\n"
"\n"
"/* Hover effect for QLineEdit */\n"
"QLineEdit:hover {\n"
"    border: 2px solid #2980B9;\n"
"}\n"
"\n"
"/* Styling for buttons (if any) */\n"
"QPushButton {\n"
"    background-color: #3498DB;\n"
"    color: #ECF0F1;\n"
"    border: none;\n"
"    padding: 12px 20px;\n"
"    font-size: 16px;\n"
"    border-radius: 8px;\n"
"    transition: background-color 0.3s ease;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2980B9;\n"
"}\n"
"\n"
"/* Styling for main window layout */\n"
"QWidget#mainWindow {\n"
"    display: grid;\n"
"    grid-template-columns: repeat(3, 1fr);\n"
"    gap: 20px;\n"
"    padding: 20px;\n"
"}\n"
"\n"
"/* Styling for each section (Math, Science, etc.) containers */\n"
"QWidget#sectionContainer "
                        "{\n"
"    padding: 20px;\n"
"    border-radius: 10px;\n"
"    background-color: #34495E;\n"
"    box-shadow: 0 4px 8px rgba(0, 0, 0, 0.2);\n"
"    transition: box-shadow 0.3s ease;\n"
"}\n"
"\n"
"QWidget#sectionContainer:hover {\n"
"    box-shadow: 0 8px 16px rgba(0, 0, 0, 0.3);\n"
"}\n"
"\n"
"/* Add custom scrollbars for better aesthetics */\n"
"QScrollArea {\n"
"    border: none;\n"
"}\n"
"\n"
"QScrollBar:vertical {\n"
"    border: none;\n"
"    background-color: #34495E;\n"
"    width: 10px;\n"
"    margin: 0px 0px 0px 0px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background-color: #2980B9;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical:hover {\n"
"    background-color: #3498DB;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical {\n"
"    background-color: #34495E;\n"
"    border: none;\n"
"}\n"
"\n"
"/* Styling for window border */\n"
"QWidget#mainWindow {\n"
"    border: 5px solid #2980B9;\n"
"    border-radius: 20px;\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        send = new QPushButton(centralwidget);
        send->setObjectName("send");
        send->setGeometry(QRect(590, 200, 201, 71));
        math_2 = new QLabel(centralwidget);
        math_2->setObjectName("math_2");
        math_2->setGeometry(QRect(180, 20, 121, 41));
        math = new QLineEdit(centralwidget);
        math->setObjectName("math");
        math->setGeometry(QRect(40, 20, 111, 51));
        sc = new QLineEdit(centralwidget);
        sc->setObjectName("sc");
        sc->setGeometry(QRect(40, 100, 111, 51));
        letter = new QLineEdit(centralwidget);
        letter->setObjectName("letter");
        letter->setGeometry(QRect(40, 190, 111, 51));
        eco = new QLineEdit(centralwidget);
        eco->setObjectName("eco");
        eco->setGeometry(QRect(40, 280, 111, 51));
        sport = new QLineEdit(centralwidget);
        sport->setObjectName("sport");
        sport->setGeometry(QRect(40, 360, 111, 51));
        tec = new QLineEdit(centralwidget);
        tec->setObjectName("tec");
        tec->setGeometry(QRect(40, 450, 111, 51));
        science = new QLabel(centralwidget);
        science->setObjectName("science");
        science->setGeometry(QRect(180, 100, 121, 41));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(190, 190, 121, 41));
        eco_2 = new QLabel(centralwidget);
        eco_2->setObjectName("eco_2");
        eco_2->setGeometry(QRect(180, 280, 131, 51));
        sports = new QLabel(centralwidget);
        sports->setObjectName("sports");
        sports->setGeometry(QRect(180, 360, 131, 41));
        tech = new QLabel(centralwidget);
        tech->setObjectName("tech");
        tech->setGeometry(QRect(180, 450, 121, 41));
        info = new QLineEdit(centralwidget);
        info->setObjectName("info");
        info->setGeometry(QRect(560, 70, 111, 51));
        tech_2 = new QLabel(centralwidget);
        tech_2->setObjectName("tech_2");
        tech_2->setGeometry(QRect(700, 80, 121, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 855, 60));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        send->setText(QCoreApplication::translate("MainWindow", "send", nullptr));
        math_2->setText(QCoreApplication::translate("MainWindow", "math", nullptr));
        science->setText(QCoreApplication::translate("MainWindow", "science", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "letter", nullptr));
        eco_2->setText(QCoreApplication::translate("MainWindow", "eco", nullptr));
        sports->setText(QCoreApplication::translate("MainWindow", "sport", nullptr));
        tech->setText(QCoreApplication::translate("MainWindow", "tec", nullptr));
        tech_2->setText(QCoreApplication::translate("MainWindow", "Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

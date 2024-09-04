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
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
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
    QPushButton *pushBtnRock;
    QPushButton *pushBtnPaper;
    QPushButton *pushBtnScissors;
    QLabel *label;
    QLabel *AIDialog;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_2;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        QFont font;
        font.setFamilies({QString::fromUtf8("Consolas")});
        font.setPointSize(12);
        MainWindow->setFont(font);
        MainWindow->setAutoFillBackground(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushBtnRock = new QPushButton(centralwidget);
        pushBtnRock->setObjectName("pushBtnRock");
        pushBtnRock->setGeometry(QRect(0, 500, 251, 41));
        pushBtnPaper = new QPushButton(centralwidget);
        pushBtnPaper->setObjectName("pushBtnPaper");
        pushBtnPaper->setGeometry(QRect(270, 500, 251, 41));
        pushBtnScissors = new QPushButton(centralwidget);
        pushBtnScissors->setObjectName("pushBtnScissors");
        pushBtnScissors->setGeometry(QRect(540, 500, 251, 41));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(330, 10, 131, 121));
        label->setPixmap(QPixmap(QString::fromUtf8("rsz_pngitem_6092449.png")));
        label->setScaledContents(false);
        AIDialog = new QLabel(centralwidget);
        AIDialog->setObjectName("AIDialog");
        AIDialog->setGeometry(QRect(210, 130, 361, 20));
        AIDialog->setTextFormat(Qt::TextFormat::RichText);
        AIDialog->setAlignment(Qt::AlignmentFlag::AlignJustify|Qt::AlignmentFlag::AlignVCenter);
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(663, 10, 121, 61));
        lcdNumber_2 = new QLCDNumber(centralwidget);
        lcdNumber_2->setObjectName("lcdNumber_2");
        lcdNumber_2->setGeometry(QRect(660, 410, 121, 61));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(690, 70, 71, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(680, 470, 91, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "RPS Game", nullptr));
        pushBtnRock->setText(QCoreApplication::translate("MainWindow", "Rock (A)", nullptr));
        pushBtnPaper->setText(QCoreApplication::translate("MainWindow", "Paper (S)", nullptr));
        pushBtnScissors->setText(QCoreApplication::translate("MainWindow", "Scissors (D)", nullptr));
        label->setText(QString());
        AIDialog->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">hurry up :)</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "AI Score", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Your Score", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

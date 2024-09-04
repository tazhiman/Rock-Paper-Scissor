#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "GameMechanics.h"
#include <QMessageBox>
#include <QPropertyAnimation>
string ComputerMove = "";
int AIScore = 0;
int UserScore = 0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    connect(ui->pushBtnRock, &QPushButton::clicked, this, &MainWindow::on_pushBtnRock_clicked);
    ui->AIDialog->setAlignment(Qt::AlignHCenter);
    QApplication::processEvents();
}



void MainWindow::on_pushBtnRock_clicked()
{
    string userMove = "Rock";
    statusBar()->showMessage("Rock Selected", 2000);
    ComputerMove = CalculateComputerMove();
    QString AIMessage = "I choose " + QString::fromStdString(ComputerMove);
    ui->AIDialog->setText(AIMessage);
    ui->AIDialog->setAlignment(Qt::AlignHCenter);
    string winorlose = GameMechanism(ComputerMove, userMove);
    string roundOutcomeMessage = "You " + winorlose;
    // QTextEdit WinOrLoseBtn = new(roundOutcomeMessage, Ui::MainWindow);

    QMessageBox msgBox;
    msgBox.setText(QString::fromStdString(roundOutcomeMessage));
    msgBox.exec();
    if(winorlose=="win"){
        UserScore++;
        ui->lcdNumber_2->display(UserScore);
    }else if(winorlose=="lose"){
        AIScore++;
        ui->lcdNumber->display(AIScore);
    }

}


void MainWindow::on_pushBtnPaper_clicked()
{
    string userMove = "Paper";
    statusBar()->showMessage("Paper Selected", 2000);
    ComputerMove = CalculateComputerMove();
    QString AIMessage = "I choose " + QString::fromStdString(ComputerMove);
    ui->AIDialog->setText(AIMessage);
    ui->AIDialog->setAlignment(Qt::AlignHCenter);
    ComputerMove = CalculateComputerMove();
    string winorlose = GameMechanism(ComputerMove, userMove);
    string roundOutcomeMessage = "You " + winorlose;
    // QTextEdit WinOrLoseBtn = new(roundOutcomeMessage, Ui::MainWindow);

    QMessageBox msgBox;
    msgBox.setText(QString::fromStdString(roundOutcomeMessage));
    msgBox.exec();
    if(winorlose=="win"){
        UserScore++;
        ui->lcdNumber_2->display(UserScore);
    }else if(winorlose=="lose"){
        AIScore++;
        ui->lcdNumber->display(AIScore);
    }
}


void MainWindow::on_pushBtnScissors_clicked()
{
    string userMove = "Scissor";
    statusBar()->showMessage("Scissor Selected", 2000);
    ComputerMove = CalculateComputerMove();
    QString AIMessage = "I choose " + QString::fromStdString(ComputerMove);
    ui->AIDialog->setText(AIMessage);
    ui->AIDialog->setAlignment(Qt::AlignHCenter);
    string winorlose = GameMechanism(ComputerMove, userMove);
    string roundOutcomeMessage = "You " + winorlose;
    // QTextEdit WinOrLoseBtn = new(roundOutcomeMessage, Ui::MainWindow);

    QMessageBox msgBox;
    msgBox.setText(QString::fromStdString(roundOutcomeMessage));
    msgBox.exec();
    if(winorlose=="win"){
        UserScore++;
        ui->lcdNumber_2->display(UserScore);
    }else if(winorlose=="lose"){
        AIScore++;
        ui->lcdNumber->display(AIScore);
    }
}


void MainWindow::on_label_linkActivated(const QString &link)
{

}


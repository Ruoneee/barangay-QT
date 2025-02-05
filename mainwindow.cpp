#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_goLogin_clicked()
{
    Login *loginPage = new Login();  // Create an instance of the Login page
    loginPage->show();               // Show the login window
    this->close();                    // Close the current main window (optional)
}


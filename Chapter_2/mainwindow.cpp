#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "class_string.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    InquireString();
}

MainWindow::~MainWindow()
{
    delete ui;
}


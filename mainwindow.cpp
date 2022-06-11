#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "notepad.h"
#include "imageviewer.h"
#include "painter.h"

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


void MainWindow::on_pushButton_clicked()
{
//    Open notepad window
    Notepad * notepad = new Notepad();
    this->hide();
    notepad->show();
}

void MainWindow::on_pushButton_2_clicked()
{
//    Open image viewer window
    ImageViewer * viewer = new ImageViewer();
    this->hide();
    viewer->show();
}

void MainWindow::on_pushButton_3_clicked()
{
//    Open painter window
    Painter * painter = new Painter();
    this->hide();
    painter->show();
}

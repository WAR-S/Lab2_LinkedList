#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "LinkedList.h"
#include <QDebug>
#include <QString>
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




void MainWindow::on_pushButton_clicked() //append
{
list.append(ui->spinBox->value());
}

void MainWindow::on_pushButton_2_clicked()//delete
{

  list.remove(ui->spinBox_2->value());
}

void MainWindow::on_pushButton_3_clicked()
{
    QString txt;
    for(int i=0; i <list.size();++i)
        txt +=QString::number(list.at(i)) + " ";
    qDebug() << txt;
}




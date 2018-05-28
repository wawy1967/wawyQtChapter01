#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //connect(ui->addTaskButton,&QPushButton::clicked,
     //       QApplication::instance(),&QApplication::quit);
    //connect(ui->addTaskButton,&QPushButton::clicked,
    //        this,&MainWindow::addTask);
    connect(ui->addTaskButton,SIGNAL(clicked(bool)),
            this,SLOT(addTask()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addTask()
{
    qDebug() << "User clicks add task button";
}

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene;
    ui->graphicsView->setScene(scene);
    scene->setSceneRect (0,0,6000,400);
    principal=new soldado1(20,250,250);


    scene->addItem(principal);

}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *evento){
    if(evento->key()==Qt::Key_W){
        principal->movArr();
    }
    else if(evento->key()==Qt::Key_A){
        principal->movIzq();
    }
    else if(evento->key()==Qt::Key_S){
        principal->movAba();
    }
    else if(evento->key()==Qt::Key_D){
        principal->movDere();
    }
}


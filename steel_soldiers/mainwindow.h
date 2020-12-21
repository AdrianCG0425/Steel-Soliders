#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QDesktopWidget>
#include <QRectF>
#include <QDebug>
#include <QMainWindow>
#include <QGraphicsScene>
#include <QKeyEvent>
#include "soldado1.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    soldado1 *principal;
    QGraphicsScene *scene;
    void keyPressEvent(QKeyEvent *evento);

};
#endif // MAINWINDOW_H

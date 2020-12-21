#ifndef SOLDADO1_H
#define SOLDADO1_H
#include <QGraphicsItem>
#include <QPainter>


class soldado1: public QGraphicsItem{
        int a;
        int posx, posy;
        int velocidad=4;

public:
    soldado1(int a_, int x, int y);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,QWidget *widget=nullptr);
    void movDere();
    void movIzq();
    void movArr();
    void movAba();
};

#endif // SOLDADO1_H

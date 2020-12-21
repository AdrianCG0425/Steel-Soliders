#include "soldado1.h"


soldado1::soldado1(int a_, int x, int y){
    a=a_;
    posx=x;
    posy=y;
    setPos(posx,posy);
}

QRectF soldado1::boundingRect() const{
    return QRectF(-a,-a,2*a,2*a);
}

void soldado1::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
    painter->setBrush(Qt::black);
    painter->drawRect(boundingRect());
}
void soldado1::movDere(){
    posx+= 3*velocidad;
    setPos(posx,posy);
}
void soldado1::movIzq(){
    posx-= 3*velocidad;
    setPos(posx,posy);
}
void soldado1::movArr(){
    posy-= 3*velocidad;
    setPos(posx,posy);
}
void soldado1::movAba(){
    posy+= 3*velocidad;
    setPos(posx,posy);
}

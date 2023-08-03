#ifndef STAR_HPP
#define STAR_HPP
#include "Velocity.hpp"
#include <iostream>

class Star {
private:
    int posX;
    int posY;
    Velocity velocity;
    double mass;
public:
    Star();
    Star(int posX, int posY, Velocity velocity, double mass);
    void setVelocity(double x, double y);
    void setAcceleration(double x, double y);
    double getAccerationX() {return velocity.getAx();};
    double getAccerationY() {return velocity.getAy();};
    Velocity getVelocity();
    void updatePosition(int x, int y) {posX = x; posY = y;}
    void print();
    int getX();
    int getY();
    double getMass() {return mass;};

};

#endif

#include "../include/Star.hpp"
#include <string>

Star::Star() {
    posX = 0;
    posY = 0;
    velocity = Velocity();
}

Star::Star(int posX, int posY, Velocity velocity, double mass) {
    this->posX = posX;
    this->posY = posY;
    this->velocity = velocity;
    this->mass = mass;
}

void Star::setVelocity(double x, double y) {
    velocity = Velocity(x, y);
}
void Star::setAcceleration(double x, double y) {
    velocity.setAx(x);
    velocity.setAy(y);
}

Velocity Star::getVelocity() {
    return velocity;
}
void Star::print() {
    std::cout << "X: " << posX << "Y: " << posY << std::endl;
}

int Star::getX() {
    return posX;
}
int Star::getY() {
    return posY;
}

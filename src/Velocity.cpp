#include "../include/Velocity.hpp"

Velocity::Velocity() {
    Vx = 0;
    Vy = 0;
    Ax = 0;
    Ay = 0;
}

Velocity::Velocity(double x, double y) {
    this->Vx = x;
    this->Vy = y;
}

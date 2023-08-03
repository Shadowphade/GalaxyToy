#include "../include/Generate.hpp"
#include "../include/Star.hpp"
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>


void generate(Window* window) {
    std::srand(std::time(nullptr));
    srandom(std::time(NULL));
    Star* genStars = new Star[10];
    for(int i = 0; i < 10; i ++) {
        int randX = rand() % window->getWidth() - window->getWidth() / 2;
        int randY = rand() % window->getHeight() - window->getHeight() / 2;
        double randVx = (rand()/(double(RAND_MAX) + 1)) * (3 + 3) -3;
        double randVy = (rand()/(double(RAND_MAX) + 1)) * (3 + 3) -3;
        std::cout << "X: " << randX << " Y: " << randY << " Velocity X: " << randVx << " Velocity Y: " << randVy << std::endl;
        genStars[i] = Star(randX, randY, Velocity(randVx, randVy), 100);
    }
    if (window->getStars() != nullptr) window->deleteStars();
    window->setStars(genStars, 10);
    window->drawStars();

}

void getNextPostition(Star &star, Window* window) {
    //const double PI = 3.14159265;
    double timer = (double)window->getTimer() / 20;
    int x0 = star.getX();
    int y0 = star.getY();
    double xV0 = star.getVelocity().getVx();
    double yV0 = star.getVelocity().getVy();
    double velocity = std::sqrt((xV0 * xV0) + (yV0 * yV0));

    double angle = atan(y0 / x0);
    //int width = window->getWidth();
    //int height = window->getHeight();

    //std::cout << height << " " << width << " " << std::endl;

    // Two options:
    // 1 use the velocity class to hold x0 and y0
    // 2 just keep x0 and y0 constanly updating

    //trying #2 first
    int newX = 0;
    int newY = 0;

    double r = (x0 * x0) + (y0 * y0);
    double massProduct = star.getMass() * 1000;
    double Grav = 0.5;
    double force = Grav * (massProduct / r);
    // double newVelocity = velocity + (newAccel * timer);
    double newXVeloc = velocity + ((cos(angle) * force) * timer);
    double newYVeloc = velocity + ((sin(angle) * force) * timer);



    star.setVelocity(newXVeloc, newYVeloc);

    //if(x0 < width/2 - width || x0 > width/2) star.setVelocity(-1 * xV0 / 2, yV0);
    //if(y0 < height/2 - height || y0 > height/2) star.setVelocity(xV0, -1 * yV0 / 2);

    newX = x0 + star.getVelocity().getVx();
    newY = y0 + star.getVelocity().getVy();


    if(y0 == 0 && x0 == 0) {star.updatePosition(0, 0); return;}

    star.updatePosition(newX, newY);

}

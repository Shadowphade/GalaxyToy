#include <iostream>
#include <sstream>
#include <fstream>
#include "include/Window.hpp"
#include "include/Star.hpp"
#include <SDL2/SDL.h>
#include <SDL2/SDL_video.h>


int main() {
    std::cout << "Hello world" << std::endl;
    Window newWindow(1200, 760);
    newWindow.initWindow();

    std::ifstream inputFileStream;
    std::string line;
    int starCount = 0;

    inputFileStream.open("stars");
    getline(inputFileStream, line);
    starCount = stoi(line);
    Star* stars = new Star[starCount];
    for(int i = 0; i < starCount; i++) {
        getline(inputFileStream, line);
        std::stringstream streamLine(line);
        std::string xString, yString;
        getline(streamLine, xString, ' ');
        getline(streamLine, yString);
        stars[i] = Star(stoi(xString), stoi(yString), Velocity(), 10.0); //May need to include Velocity information in file later
    }
    stars[1].print();
    newWindow.setStars(stars, starCount);
    newWindow.drawObjects();

    return 0;
}

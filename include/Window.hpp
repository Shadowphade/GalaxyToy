#ifndef WINDOW_HPP
#define WINDOW_HPP

#include "Star.hpp"


#include <SDL2/SDL.h>
#include <SDL2/SDL_events.h>
#include <SDL2/SDL_rect.h>
#include <SDL2/SDL_timer.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_video.h>
#include <SDL2/SDL_messagebox.h>
#include <SDL2/SDL_mouse.h>
#include <SDL2/SDL_surface.h>

#include <iostream>
#include <cmath>
#include <cstddef>

class Window {
private:
    SDL_Window* window = NULL;
    SDL_Renderer* renderer = NULL;
    Star* stars;
    int starCount;
    int height;
    int width;
    int time;
    int mouseX;
    int mouseY;
    int mouseState;

public:
    Window(int width, int height);
    ~Window();
    bool initWindow();
    void drawObjects();
    void drawStars();
    void updateStars();
    void createMessage(SDL_KeyboardEvent keyEvent);
    int getHeight() {return height;};
    int getWidth() {return width;};
    void setStars(Star* stars, int starCount);
    int getTimer() {return time;};
    int getMouseX() {return mouseX;};
    int getMouseY() {return mouseY;};
    int getMouseState() {return mouseState;};
    SDL_Renderer* getRenderer() {return renderer;};
    Star* getStars() {return stars;};
    void deleteStars() {delete [] stars;};
};

#endif

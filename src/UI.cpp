#include "../include/UI.hpp"
#include "../include/Generate.hpp"
#include <SDL2/SDL_rect.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_ttf.h>

void drawUI(Window* window) {
    SDL_Renderer* windowRenderer = window->getRenderer();
    int width = window->getWidth();
    int height = window->getHeight();
    int panelCornerY = (height * 3) / 4;
    SDL_RenderClear(windowRenderer);
    window->drawStars();

    SDL_Rect * borderOutside = new SDL_Rect { 0, panelCornerY, width, (height / 4)};
    SDL_SetRenderDrawColor(windowRenderer, 101, 99, 120, 255);
    SDL_RenderDrawRect(windowRenderer, borderOutside);
    SDL_RenderFillRect(windowRenderer, borderOutside);
    SDL_SetRenderDrawColor(windowRenderer, 43, 42, 51, 255);


    SDL_Rect * borderInside = new SDL_Rect { 5, panelCornerY + 5, (width - 10), (height / 4) - 10};
    SDL_RenderDrawRect(windowRenderer, borderInside);
    SDL_RenderFillRect(windowRenderer, borderInside);

    SDL_Rect * buttons = new SDL_Rect [3];
    for(int i = 0; i < 3; i++) {
        buttons[i] = { (i * (width / 9) + 15), panelCornerY + 15, width / 10, height / 20};
    }

    SDL_Point * mousePOS = new SDL_Point {window->getMouseX(), window->getMouseY()};

    for(int i = 0; i < 3; i++) {
        if( SDL_PointInRect(mousePOS, &buttons[i] )) {
            SDL_SetRenderDrawColor(windowRenderer, 255, 255, 255, 255);
            if (window->getMouseState() == 1) {
                SDL_SetRenderDrawColor(windowRenderer, 0, 0, 34, 255);
                callButton(window, /* &buttons[i], */ i);
            }
            SDL_RenderDrawRect(windowRenderer, &buttons[i]);
            SDL_RenderFillRect(windowRenderer, &buttons[i]);
        } else {
            SDL_SetRenderDrawColor(windowRenderer, 101, 99, 120, 255);
            SDL_RenderDrawRect(windowRenderer, &buttons[i]);
            SDL_RenderFillRect(windowRenderer, &buttons[i]);
        }
    }


    TTF_Font* Sans = TTF_OpenFont("/usr/share/fonts/TTF/Hack-Regular.ttf", 24);
    //if (Sans == NULL) std::cout << "Font not loaded" << std::endl;
    SDL_Color White = {255, 255, 255, 255};
    SDL_Surface* button1 = TTF_RenderText_Solid(Sans, "Test Button", White);
    SDL_Texture* button1Texture = SDL_CreateTextureFromSurface(windowRenderer, button1);
    SDL_RenderCopy(windowRenderer, button1Texture, NULL, &buttons[0]);

    TTF_CloseFont(Sans);
    SDL_SetRenderDrawColor(windowRenderer, 43, 42, 51, 255);

}

void callButton(Window* window, /* SDL_Rect* button ,*/ int buttonID) {

    switch (buttonID)
        case 1:
            generate(window);

}

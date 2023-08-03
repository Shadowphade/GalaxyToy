#include "../include/Window.hpp"
#include "../include/Generate.hpp"
#include "../include/UI.hpp"

Window::Window(int width, int height){
    SDL_Init(SDL_INIT_EVERYTHING);
    window = SDL_CreateWindow("GalaxyToy", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window, -1, 0);
    this->height = height;
    this->width = width;
}

bool Window::initWindow() {
    SDL_SetRenderDrawColor(renderer, 43, 42, 51, 255);
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);
    return true;
}

void Window::drawObjects() {
    bool close = false;
    time = 0;

    while (!close) {
        SDL_Event event;
        SDL_Delay(20);
        drawUI(this);
        updateStars();
        mouseState = SDL_GetMouseState(&mouseX, &mouseY);
        while(SDL_PollEvent(& event)) {
            switch (event.type) {
                case SDL_QUIT:
                    close = true;
                    break;
                case SDL_KEYDOWN:
                    createMessage(event.key);
                    break;
            }

        }
        SDL_RenderPresent(renderer);
    }
}

void Window::drawStars() {
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    int centerX = width / 2;
    int centerY = height / 2;
    int drawX = 0;
    int drawY = 0;

    for(int i = 0; i <= width; i++) {
        drawX = i; // DO NOT REMOVE!!!!

        if(drawX == centerX) {
            SDL_SetRenderDrawColor(renderer, 101, 99, 120, 255);
            SDL_RenderDrawPoint(renderer, drawX, drawY);
        }
        if(drawY == centerY && drawY < (height * 3 / 4)) {
            SDL_SetRenderDrawColor(renderer, 101, 99, 120, 255);
            SDL_RenderDrawPoint(renderer, drawX, drawY);
        }

        for(int j = 0; j < starCount; j++){
            int translatedX = stars[j].getX() + centerX;
            int translatedY = -stars[j].getY() + centerY;

            if((drawX == translatedX) && (drawY == translatedY)) {
                SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
                const SDL_Rect * star = new SDL_Rect { (translatedX - 3), (translatedY - 3), 5, 5};
                SDL_RenderDrawRect(renderer, star);
                SDL_RenderFillRect(renderer, star);
            }
        }
        if(drawX == width){
            i = 0;
            drawY++;
        }
        if(drawY == height){
            break;
        }
    }


}

void Window::updateStars() {
    time = time + 1;

    // std::cout << timer << "\t" << time << std::endl;
    for(int i = 0; i < starCount; i++) {
        getNextPostition(stars[i], this);
    }

}


void Window::createMessage(SDL_KeyboardEvent keyEvent) {
    SDL_MessageBoxButtonData generateButton = {SDL_MESSAGEBOX_BUTTON_RETURNKEY_DEFAULT, 0, "Generate"};
    SDL_MessageBoxButtonData cancelButton = {SDL_MESSAGEBOX_BUTTON_ESCAPEKEY_DEFAULT, 1, "Cancel"};
    SDL_MessageBoxButtonData * buttons = new SDL_MessageBoxButtonData[2];
    buttons[0] = generateButton;
    buttons[1] = cancelButton;

    const SDL_MessageBoxData * messageBox = new SDL_MessageBoxData {SDL_MESSAGEBOX_INFORMATION, NULL, "Generate", "Generate a new galaxy", 2, buttons, NULL};
    if(keyEvent.keysym.sym == SDLK_g) {
        int * buttonID = new int[2];
        SDL_ShowMessageBox(messageBox, buttonID);
        if(buttonID[0] == 0) {
            delete [] stars;
            time = 0;
            generate(this);
        }
    }
}

void Window::setStars(Star* stars, int starCount) {
    this->stars = stars;
    this->starCount = starCount;
}

Window::~Window() {
    delete [] stars;
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}

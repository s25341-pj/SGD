#include <SDL.h>
#include <iostream>
#include <vector>
#include "walls.h"
#include "goals.h"

//Zmienne globalne
int posX = 20;
int posY = 20;
int dir = 5;
std::vector<int> coll;

int r = 0;
int g = 0;
int b = 0;
int counter = 0;

//Funkcja określająca kierunek kolizji
int CollisionDirection(SDL_Rect square1, SDL_Rect square2) {
    int thisRight = square1.x + square1.w;
    int otherRight = square2.x + square2.w;
    int thisBottom = square1.y + square1.h;
    int otherBottom = square2.y + square2.h;
    int overlapX = (thisRight - square2.x) - (otherRight - square1.x);
    int overlapY = (thisBottom - square2.y) - (otherBottom - square1.y);

    if (std::abs(overlapX) < std::abs(overlapY)) {
        if (overlapY > 0) {
            coll.push_back(0);
            posY +=5;
        } else {
            coll.push_back(2);
            posY -=5;
        }
    } else {
        if (overlapX > 0) {
            coll.push_back(3);
            posX +=5;
        } else {
            coll.push_back(1);
            posX -=5;
        }
    }
    return 5;
}

//Funkcja sprawdzająca, czy dany kierunek kolizji jest już w wektorze kolizji
bool findColl(int f){

    for(auto x : coll ){
        if(f == x ) return true;
    }
    return false;
}

//Główna funkcja programu
int main(int argc, char* args[]) {
    using namespace std;
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window* window;
    SDL_Renderer* renderer;
    SDL_Event event;

    if (auto error = SDL_CreateWindowAndRenderer(640, 480, SDL_WINDOW_SHOWN, &window, &renderer)) {
        cout << "Nie udalo sie utworzyc okienka" << endl;
    }

    //Kontrola częstotliwości klatek na sekundę
    Uint32 lastFrameTime = SDL_GetTicks();
    const Uint32 MS_PER_FRAME = 1000 / 60;

    vector<SDL_Rect> walls = initWalls();
    vector<SDL_Rect> goals = initGoals();

    bool collidedWithGoal = false;
    int playing = 1;

    //Pętla główna programu gry
    while (playing) {
        SDL_RenderClear(renderer);
        coll.clear();

        //Ustawienie koloru tła na czarny
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);

        //Rysowanie gracza w czerwonym kolorze
        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
        SDL_Rect player = {static_cast<int>(posX), static_cast<int>(posY), 20, 20};
        SDL_RenderFillRect(renderer, &player);

        //Rysowanie ścian labiryntu w szarym kolorze
        SDL_SetRenderDrawColor(renderer, 150, 150, 150, 255);
        for (const auto& wall : walls) {
            SDL_RenderFillRect(renderer, &wall);
        }

        //Rysowanie punktu docelowego labiryntu w zielonym kolorze
        SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
        for (const auto& goal : goals) {
            SDL_RenderFillRect(renderer, &goal);
        }

        //Sprawdzanie kolizji gracza z celem i przeszkodami
        for (const auto& goal : goals) {
            if (SDL_HasIntersection(&player, &goal)) {
                collidedWithGoal = true;
            }
            // Sprawdzanie kolizji z każdą ścianą labiryntu
            for (const auto& wall : walls) {
                if (SDL_HasIntersection(&player, &wall)) {
                    dir = CollisionDirection(player, wall);
                }
            }
        }

        if (collidedWithGoal) {

            SDL_RenderClear(renderer);

                r++;
                r = r%255;
                g++;
                g = g%255;
                g++;
                b = b%255;

            SDL_SetRenderDrawColor(renderer, r,g,b,255);

            SDL_Rect endscreen = {static_cast<int>(0), static_cast<int>(0), 640, 480};
            SDL_RenderFillRect(renderer, &endscreen);

            SDL_RenderPresent(renderer);

            const Uint8* state = SDL_GetKeyboardState(NULL);
            if (state[SDL_SCANCODE_R]){
                std::exit(0);
            }
        }

        SDL_SetRenderDrawColor(renderer, r,g,b,255);
        SDL_RenderPresent(renderer);

        //Obsługa zdarzeń w grze (naciśnięcie klawiszy, zamknięcie okna)
        while (SDL_PollEvent(&event)) {
            switch (event.type) {
                case SDL_QUIT:
                    playing = false;
                    break;
                default:
                    break;
            }

            if (event.type == SDL_QUIT) {
            } else if (event.type == SDL_KEYDOWN) {
                if (event.key.keysym.sym == SDLK_d && !findColl(1) && posX < 598) {
                    posX += 5;
                }

                if (event.key.keysym.sym == SDLK_a && !findColl(3) && posX > 21) {
                    posX -= 5;
                }

                if (event.key.keysym.sym == SDLK_s && !findColl(2) && posY < 445) {
                    posY += 5;
                }

                if (event.key.keysym.sym == SDLK_w && !findColl(0) && posY > 16) {
                    posY -= 5;
                }
            }
        }

        SDL_RenderPresent(renderer);

        //Kontrola częstotliwości klatek na sekundę
        Uint32 currentFrameTime = SDL_GetTicks();
        Uint32 elapsedTime = currentFrameTime - lastFrameTime;

        if (elapsedTime < MS_PER_FRAME) {
            SDL_Delay(MS_PER_FRAME - elapsedTime);
        }

        counter++;
        lastFrameTime = SDL_GetTicks();
    }

    //zwolnienie zasobów gry i wyłączenie biblioteki SDL
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
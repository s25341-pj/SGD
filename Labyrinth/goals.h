#ifndef GOALS_H
#define GOALS_H

#include <SDL.h>
#include <vector>

//Funkcja inicjująca cele gry
std::vector<SDL_Rect> initGoals() {
    std::vector<SDL_Rect> goals;

    //Dodajemy cele gry
    goals.push_back({590, 435, 30, 30});

    return goals;
}

#endif
#ifndef WALLS_H
#define WALLS_H

#include <SDL.h>
#include <vector>

//Funkcja inicjująca wektor ścian
std::vector<SDL_Rect> initWalls() {
    std::vector<SDL_Rect> walls;

    //Dodajemy ściany, które tworzą labirynt
    walls.push_back({0, 0, 640, 15});
    walls.push_back({620, 0, 20, 480});
    walls.push_back({0, 465, 640, 15});
    walls.push_back({0, 0, 20, 480});

    //walls.push_back({20, 15, 30, 30});
    //walls.push_back({20, 45, 30, 30});
    //walls.push_back({20, 75, 30, 30});
    //walls.push_back({20, 105, 30, 30});
    //walls.push_back({20, 135, 30, 30});
    walls.push_back({20, 165, 30, 30});
    //walls.push_back({20, 195, 30, 30});
    //walls.push_back({20, 225, 30, 30});
    //walls.push_back({20, 255, 30, 30});
    //walls.push_back({20, 285, 30, 30});
    walls.push_back({20, 315, 30, 30});
    //walls.push_back({20, 345, 30, 30});
    //walls.push_back({20, 375, 30, 30});
    //walls.push_back({20, 405, 30, 30});
    //walls.push_back({20, 435, 30, 30});

    walls.push_back({50, 15, 30, 30});
    walls.push_back({50, 45, 30, 30});
    walls.push_back({50, 75, 30, 30});
    walls.push_back({50, 105, 30, 30});
    //walls.push_back({50, 135, 30, 30});
    walls.push_back({50, 165, 30, 30});
    walls.push_back({50, 195, 30, 30});
    walls.push_back({50, 225, 30, 30});
    walls.push_back({50, 255, 30, 30});
    //walls.push_back({50, 285, 30, 30});
    //walls.push_back({50, 315, 30, 30});
    //walls.push_back({50, 345, 30, 30});
    walls.push_back({50, 375, 30, 30});
    walls.push_back({50, 405, 30, 30});
    //walls.push_back({50, 435, 30, 30});

    //walls.push_back({80, 15, 30, 30});
    //walls.push_back({80, 45, 30, 30});
    //walls.push_back({80, 75, 30, 30});
    walls.push_back({80, 105, 30, 30});
    //walls.push_back({80, 135, 30, 30});
    //walls.push_back({80, 165, 30, 30});
    //walls.push_back({80, 195, 30, 30});
    //walls.push_back({80, 225, 30, 30});
    walls.push_back({80, 255, 30, 30});
    walls.push_back({80, 285, 30, 30});
    walls.push_back({80, 315, 30, 30});
    //walls.push_back({80, 345, 30, 30});
    walls.push_back({80, 375, 30, 30});
    walls.push_back({80, 405, 30, 30});
    //walls.push_back({80, 435, 30, 30});

    //walls.push_back({110, 15, 30, 30});
    walls.push_back({110, 45, 30, 30});
    walls.push_back({110, 75, 30, 30});
    walls.push_back({110, 105, 30, 30});
    //walls.push_back({110, 135, 30, 30});
    walls.push_back({110, 165, 30, 30});
    walls.push_back({110, 195, 30, 30});
    //walls.push_back({110, 225, 30, 30});
    //walls.push_back({110, 255, 30, 30});
    //walls.push_back({110, 285, 30, 30});
    //walls.push_back({110, 315, 30, 30});
    //walls.push_back({110, 345, 30, 30});
    walls.push_back({110, 375, 30, 30});
    walls.push_back({110, 405, 30, 30});
    //walls.push_back({110, 435, 30, 30});

    //walls.push_back({140, 15, 30, 30});
    walls.push_back({140, 45, 30, 30});
    walls.push_back({140, 75, 30, 30});
    //walls.push_back({140, 105, 30, 30});
    //walls.push_back({140, 135, 30, 30});
    walls.push_back({140, 165, 30, 30});
    //walls.push_back({140, 195, 30, 30});
    //walls.push_back({140, 225, 30, 30});
    walls.push_back({140, 255, 30, 30});
    //walls.push_back({140, 285, 30, 30});
    walls.push_back({140, 315, 30, 30});
    //walls.push_back({140, 345, 30, 30});
    walls.push_back({140, 375, 30, 30});
    //walls.push_back({140, 405, 30, 30});
    //walls.push_back({140, 435, 30, 30});

    //walls.push_back({170, 15, 30, 30});
    //walls.push_back({170, 45, 30, 30});
    //walls.push_back({170, 75, 30, 30});
    //walls.push_back({170, 105, 30, 30});
    walls.push_back({170, 135, 30, 30});
    //walls.push_back({170, 165, 30, 30});
    //walls.push_back({170, 195, 30, 30});
    walls.push_back({170, 225, 30, 30});
    walls.push_back({170, 255, 30, 30});
    //walls.push_back({170, 285, 30, 30});
    walls.push_back({170, 315, 30, 30});
    //walls.push_back({170, 345, 30, 30});
    walls.push_back({170, 375, 30, 30});
    walls.push_back({170, 405, 30, 30});
    walls.push_back({170, 435, 30, 30});

    walls.push_back({200, 15, 30, 30});
    walls.push_back({200, 45, 30, 30});
    walls.push_back({200, 75, 30, 30});
    //walls.push_back({200, 105, 30, 30});
    walls.push_back({200, 135, 30, 30});
    //walls.push_back({200, 165, 30, 30});
    walls.push_back({200, 195, 30, 30});
    walls.push_back({200, 225, 30, 30});
    //walls.push_back({200, 255, 30, 30});
    //walls.push_back({200, 285, 30, 30});
    walls.push_back({200, 315, 30, 30});
    //walls.push_back({200, 345, 30, 30});
    //walls.push_back({200, 375, 30, 30});
    //walls.push_back({200, 405, 30, 30});
    walls.push_back({200, 435, 30, 30});

    //walls.push_back({230, 15, 30, 30});
    //walls.push_back({230, 45, 30, 30});
    //walls.push_back({230, 75, 30, 30});
    //walls.push_back({230, 105, 30, 30});
    walls.push_back({230, 135, 30, 30});
    //walls.push_back({230, 165, 30, 30});
    //walls.push_back({230, 195, 30, 30});
    //walls.push_back({230, 225, 30, 30});
    walls.push_back({230, 255, 30, 30});
    walls.push_back({230, 285, 30, 30});
    walls.push_back({230, 315, 30, 30});
    walls.push_back({230, 345, 30, 30});
    walls.push_back({230, 375, 30, 30});
    walls.push_back({230, 405, 30, 30});
    //walls.push_back({230, 435, 30, 30});

    //walls.push_back({260, 15, 30, 30});
    walls.push_back({260, 45, 30, 30});
    walls.push_back({260, 75, 30, 30});
    walls.push_back({260, 105, 30, 30});
    walls.push_back({260, 135, 30, 30});
    walls.push_back({260, 165, 30, 30});
    walls.push_back({260, 195, 30, 30});
    //walls.push_back({260, 225, 30, 30});
    walls.push_back({260, 255, 30, 30});
    //walls.push_back({260, 285, 30, 30});
    //walls.push_back({260, 315, 30, 30});
    //walls.push_back({260, 345, 30, 30});
    //walls.push_back({260, 375, 30, 30});
    //walls.push_back({260, 405, 30, 30});
    //walls.push_back({260, 435, 30, 30});

    //walls.push_back({290, 15, 30, 30});
    walls.push_back({290, 45, 30, 30});
    walls.push_back({290, 75, 30, 30});
    walls.push_back({290, 105, 30, 30});
    walls.push_back({290, 135, 30, 30});
    //walls.push_back({290, 165, 30, 30});
    //walls.push_back({290, 195, 30, 30});
    //walls.push_back({290, 225, 30, 30});
    walls.push_back({290, 255, 30, 30});
    //walls.push_back({290, 285, 30, 30});
    walls.push_back({290, 315, 30, 30});
    //walls.push_back({290, 345, 30, 30});
    walls.push_back({290, 375, 30, 30});
    walls.push_back({290, 405, 30, 30});
    walls.push_back({290, 435, 30, 30});

    //walls.push_back({320, 15, 30, 30});
    //alls.push_back({320, 45, 30, 30});
    //walls.push_back({320, 75, 30, 30});
    //walls.push_back({320, 105, 30, 30});
    walls.push_back({320, 135, 30, 30});
    //walls.push_back({320, 165, 30, 30});
    walls.push_back({320, 195, 30, 30});
    walls.push_back({320, 225, 30, 30});
    walls.push_back({320, 255, 30, 30});
    //walls.push_back({320, 285, 30, 30});
    walls.push_back({320, 315, 30, 30});
    //walls.push_back({320, 345, 30, 30});
    //walls.push_back({320, 375, 30, 30});
    //walls.push_back({320, 405, 30, 30});
    //walls.push_back({320, 435, 30, 30});

    //walls.push_back({350, 15, 30, 30});
    walls.push_back({350, 45, 30, 30});
    walls.push_back({350, 75, 30, 30});
    //walls.push_back({350, 105, 30, 30});
    walls.push_back({350, 135, 30, 30});
    //walls.push_back({350, 165, 30, 30});
    //walls.push_back({350, 195, 30, 30});
    //walls.push_back({350, 225, 30, 30});
    //walls.push_back({350, 255, 30, 30});
    //walls.push_back({350, 285, 30, 30});
    walls.push_back({350, 315, 30, 30});
    walls.push_back({350, 345, 30, 30});
    walls.push_back({350, 375, 30, 30});
    walls.push_back({350, 405, 30, 30});
    //walls.push_back({350, 435, 30, 30});

    //walls.push_back({380, 15, 30, 30});
    walls.push_back({380, 45, 30, 30});
    walls.push_back({380, 75, 30, 30});
    //walls.push_back({380, 105, 30, 30});
    //walls.push_back({380, 135, 30, 30});
    walls.push_back({380, 165, 30, 30});
    //walls.push_back({380, 195, 30, 30});
    walls.push_back({380, 225, 30, 30});
    walls.push_back({380, 255, 30, 30});
    walls.push_back({380, 285, 30, 30});
    //walls.push_back({380, 315, 30, 30});
    //walls.push_back({380, 345, 30, 30});
    //walls.push_back({380, 375, 30, 30});
    walls.push_back({380, 405, 30, 30});
    //walls.push_back({380, 435, 30, 30});

    //walls.push_back({410, 15, 30, 30});
    //walls.push_back({410, 45, 30, 30});
    walls.push_back({410, 75, 30, 30});
    walls.push_back({410, 105, 30, 30});
    //walls.push_back({410, 135, 30, 30});
    walls.push_back({410, 165, 30, 30});
    //walls.push_back({410, 195, 30, 30});
    walls.push_back({410, 225, 30, 30});
    //walls.push_back({410, 255, 30, 30});
    //walls.push_back({410, 285, 30, 30});
    //walls.push_back({410, 315, 30, 30});
    walls.push_back({410, 345, 30, 30});
    //walls.push_back({410, 375, 30, 30});
    walls.push_back({410, 405, 30, 30});
    //walls.push_back({410, 435, 30, 30});

    walls.push_back({440, 15, 30, 30});
    //walls.push_back({440, 45, 30, 30});
    walls.push_back({440, 75, 30, 30});
    walls.push_back({440, 105, 30, 30});
    //walls.push_back({440, 135, 30, 30});
    //walls.push_back({440, 165, 30, 30});
    //walls.push_back({440, 195, 30, 30});
    //walls.push_back({440, 225, 30, 30});
    //walls.push_back({440, 255, 30, 30});
    walls.push_back({440, 285, 30, 30});
    walls.push_back({440, 315, 30, 30});
    walls.push_back({440, 345, 30, 30});
    //walls.push_back({440, 375, 30, 30});
    walls.push_back({440, 405, 30, 30});
    //walls.push_back({440, 435, 30, 30});

    //walls.push_back({470, 15, 30, 30});
    //walls.push_back({470, 45, 30, 30});
    //walls.push_back({470, 75, 30, 30});
    walls.push_back({470, 105, 30, 30});
    walls.push_back({470, 135, 30, 30});
    walls.push_back({470, 165, 30, 30});
    walls.push_back({470, 195, 30, 30});
    walls.push_back({470, 225, 30, 30});
    //walls.push_back({470, 255, 30, 30});
    //walls.push_back({470, 285, 30, 30});
    //walls.push_back({470, 315, 30, 30});
    //walls.push_back({470, 345, 30, 30});
    //walls.push_back({470, 375, 30, 30});
    walls.push_back({470, 405, 30, 30});
    //walls.push_back({470, 435, 30, 30});

    walls.push_back({500, 15, 30, 30});
    walls.push_back({500, 45, 30, 30});
    //walls.push_back({500, 75, 30, 30});
    walls.push_back({500, 105, 30, 30});
    //walls.push_back({500, 135, 30, 30});
    //walls.push_back({500, 165, 30, 30});
    //walls.push_back({500, 195, 30, 30});
    walls.push_back({500, 225, 30, 30});
    walls.push_back({500, 255, 30, 30});
    walls.push_back({500, 285, 30, 30});
    walls.push_back({500, 315, 30, 30});
    walls.push_back({500, 345, 30, 30});
    walls.push_back({500, 375, 30, 30});
    walls.push_back({500, 405, 30, 30});
    //walls.push_back({500, 435, 30, 30});

    //walls.push_back({530, 15, 30, 30});
    //walls.push_back({530, 45, 30, 30});
    //walls.push_back({530, 75, 30, 30});
    walls.push_back({530, 105, 30, 30});
    walls.push_back({530, 135, 30, 30});
    walls.push_back({530, 165, 30, 30});
    //walls.push_back({530, 195, 30, 30});
    //walls.push_back({530, 225, 30, 30});
    //walls.push_back({530, 255, 30, 30});
    walls.push_back({530, 285, 30, 30});
    //walls.push_back({530, 315, 30, 30});
    //walls.push_back({530, 345, 30, 30});
    //walls.push_back({530, 375, 30, 30});
    //walls.push_back({530, 405, 30, 30});
    //walls.push_back({530, 435, 30, 30});

    //walls.push_back({560, 15, 30, 30});
    walls.push_back({560, 45, 30, 30});
    walls.push_back({560, 75, 30, 30});
    walls.push_back({560, 105, 30, 30});
    //walls.push_back({560, 135, 30, 30});
    walls.push_back({560, 165, 30, 30});
    walls.push_back({560, 195, 30, 30});
    walls.push_back({560, 225, 30, 30});
    //walls.push_back({560, 255, 30, 30});
    walls.push_back({560, 285, 30, 30});
    //walls.push_back({560, 315, 30, 30});
    walls.push_back({560, 345, 30, 30});
    //walls.push_back({560, 375, 30, 30});
    walls.push_back({560, 405, 30, 30});
    walls.push_back({560, 435, 30, 30});

    //walls.push_back({590, 15, 30, 30});
    //walls.push_back({590, 45, 30, 30});
    //walls.push_back({590, 75, 30, 30});
    //walls.push_back({590, 105, 30, 30});
    //walls.push_back({590, 135, 30, 30});
    //walls.push_back({590, 165, 30, 30});
    //walls.push_back({590, 195, 30, 30});
    //walls.push_back({590, 225, 30, 30});
    //walls.push_back({590, 255, 30, 30});
    walls.push_back({590, 285, 30, 30});
    //walls.push_back({590, 315, 30, 30});
    walls.push_back({590, 345, 30, 30});
    //walls.push_back({590, 375, 30, 30});
    //walls.push_back({590, 405, 30, 30});
    //walls.push_back({590, 435, 30, 30});

    return walls;
}

#endif
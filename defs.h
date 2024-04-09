#ifndef SAND_DEFS_H
#define SAND_DEFS_H

#include "raylib.h"

const Color Colors[] = {
        VIOLET,
        SKYBLUE,
        BLUE,
        GREEN,
        LIME,
        YELLOW,
        ORANGE,
        PINK,
        RED,
        BROWN,
        GRAY,
        WHITE,
};

struct Position {
    int X, Y;
    Position(int x, int y): X(x), Y(y) {}
};

struct Dimensions {
    int width, height;
    Dimensions(int width, int height): width(width), height(height) {}
};


#endif //SAND_DEFS_H

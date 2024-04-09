#ifndef SAND_SAND_GRAIN_H
#define SAND_SAND_GRAIN_H

#include "defs.h"

class SandGrain {
public:
    Position position;
    Color color;
    bool falling = true;
    static inline int speed = 6;

    SandGrain(const Position& pos, Color color);
    void draw() const;
    void move();
};

#endif //SAND_SAND_GRAIN_H

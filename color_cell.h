#ifndef SAND_COLOR_CELL_H
#define SAND_COLOR_CELL_H

#include "defs.h"

class ColorCell {
public:
    Color color;
    Position position;
    Dimensions dimensions;

    ColorCell(const Dimensions& dims, const Position& pos, Color color);
    void draw() const;
    bool active(const Position& pos) const;
};

#endif //SAND_COLOR_CELL_H

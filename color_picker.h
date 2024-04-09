#ifndef SAND_COLOR_PICKER_H
#define SAND_COLOR_PICKER_H

#include <vector>
#include "defs.h"
#include "color_cell.h"

class ColorPicker {
public:
    ColorPicker(const Dimensions& dims, const Position& pos);
    void draw() const;
    void updateColor(const Position& pos);
    Color getActiveColor() const;
private:
    Color activeColor = Colors[0];
    Position position;
    Dimensions dimensions;
    std::vector<std::vector<ColorCell>> colorGrid;
};

#endif //SAND_COLOR_PICKER_H

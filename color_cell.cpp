#include "color_cell.h"

ColorCell::ColorCell(const Dimensions &dims, const Position &pos, Color color) : dimensions(dims), position(pos), color(color) {}

void ColorCell::draw() const {
    DrawRectangle(position.X, position.Y, dimensions.width, dimensions.height, color);
}

bool ColorCell::active(const Position &pos) const {
    if (pos.X >= position.X && pos.X < position.X + dimensions.width && pos.Y >= position.Y && pos.Y < position.Y + dimensions.height) return true;
    return false;
}
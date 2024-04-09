#include "defs.h"
#include "sand_grain.h"

SandGrain::SandGrain(const Position &pos, Color color) : position(pos), color(color) {}

void SandGrain::draw() const {
    DrawPixel(position.X, position.Y, color);
}

void SandGrain::move() {
    position.Y += speed;
}
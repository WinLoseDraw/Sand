#include "sand_tank.h"

SandTank::SandTank(const Dimensions &dims, const Position &pos) : dimensions(dims), position(pos) {
    colHeights = std::vector<int>(dims.width, dims.height - 1);
}

void SandTank::draw() const {
    // Drawing each grain
    for (const SandGrain& grain: grains) grain.draw();

    // Drawing the tank's outline
    DrawRectangleLines(position.X, position.Y, dimensions.width, dimensions.height, outlineColor);
}

void SandTank::update() {
    for (SandGrain& grain: grains) {
        if (!grain.falling) continue;
        if (grain.position.Y + SandGrain::speed <= position.Y + colHeights[grain.position.X - position.X]) grain.move();
        else {
            grain.position.Y = position.Y + colHeights[grain.position.X - position.X]--;
            grain.falling = false;
        }
    }
}

void SandTank::addGrain(const Position &pos, Color color) {
    if (pos.X < position.X || pos.X >= position.X + dimensions.width) return;
    if (pos.Y < position.Y || pos.Y >= position.Y + colHeights[pos.X - position.X]) return;

    for (int i = 0; i < inputVolume; i++) {
        grains.emplace_back(pos, color);
    }
}


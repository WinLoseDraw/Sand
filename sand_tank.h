#ifndef SAND_SAND_TANK_H
#define SAND_SAND_TANK_H

#include <vector>
#include "defs.h"
#include "sand_grain.h"

class SandTank {
public:
    SandTank(const Dimensions& dims, const Position& pos);
    void draw() const;
    void update();
    void addGrain(const Position& pos, Color color);
private:
    Dimensions dimensions;
    std::vector<SandGrain> grains;
    std::vector<int> colHeights;
    Position position;
    Color outlineColor = WHITE;
    int inputVolume = 3;
};


#endif //SAND_SAND_TANK_H

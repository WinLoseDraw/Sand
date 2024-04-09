#ifndef SAND_MAIN_WINDOW_H
#define SAND_MAIN_WINDOW_H

#include "sand_tank.h"
#include "color_picker.h"
#include <memory>

class MainWindow {
public:
    explicit MainWindow(const Dimensions& dims);
    void draw() const;
    void updatePicker(const Position& pos);
    void updateTank();
    void addGrainToTank(const Position& pos);
private:
    Dimensions dimensions;
    const Dimensions padding {50, 50};
    std::unique_ptr<SandTank> tank;
    std::unique_ptr<ColorPicker> picker;
};

#endif //SAND_MAIN_WINDOW_H

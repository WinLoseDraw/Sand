#include "main_window.h"

MainWindow::MainWindow(const Dimensions &dims) : dimensions(dims) {
    int pickerWidth = 200;
    int tankWidth = dims.width - pickerWidth - 3 * padding.width;
    int height = dims.height - 2 * padding.height;
    int pickerX = tankWidth + 2 * padding.width;
    tank = std::make_unique<SandTank>(Dimensions(tankWidth, height), Position(padding.width, padding.height));
    picker = std::make_unique<ColorPicker>(Dimensions(pickerWidth, height), Position(pickerX, padding.height));
}

void MainWindow::draw() const {
    tank->draw();
    picker->draw();
}

void MainWindow::updatePicker(const Position &pos) {
    picker->updateColor(pos);
}

void MainWindow::updateTank() {
    tank->update();
}

void MainWindow::addGrainToTank(const Position &pos) {
    tank->addGrain(pos, picker->getActiveColor());
}

#include "color_picker.h"

ColorPicker::ColorPicker(const Dimensions &dims, const Position &pos) : dimensions(dims), position(pos) {
    int totalColors = sizeof(Colors) / sizeof(Colors[0]);
    int cols = 2;
    int rows = totalColors / cols;
    colorGrid = std::vector<std::vector<ColorCell>>(rows);
    int cellWidth = dimensions.width / cols;
    int cellHeight = dimensions.height / rows;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            colorGrid[i].emplace_back(Dimensions(cellWidth, cellHeight), Position(position.X + j * cellWidth, position.Y + i * cellHeight), Colors[i * cols + j]);
        }
    }
}

void ColorPicker::draw() const {
    for (const auto& row : colorGrid) {
        for (const ColorCell& cell: row) {
            cell.draw();
        }
    }
}

void ColorPicker::updateColor(const Position &pos) {
    for (const auto& row : colorGrid) {
        for (const ColorCell& cell: row) {
            if (cell.active(pos)) {
                activeColor = cell.color;
                break;
            }
        }
    }
}

Color ColorPicker::getActiveColor() const {
    return activeColor;
}

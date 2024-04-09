#include "main_window.h"

int main() {
    const Dimensions windowDimensions = Dimensions(1280, 720);

    InitWindow(windowDimensions.width, windowDimensions.height, "Sand");
    SetTargetFPS(60);

    MainWindow window {windowDimensions};

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);

        if (IsMouseButtonPressed(0)) {
            Position mousePos = {GetMouseX(), GetMouseY()};
            window.updatePicker(mousePos);
        }

        if (IsMouseButtonDown(0)) {
            Position mousePos = {GetMouseX(), GetMouseY()};
            window.addGrainToTank(mousePos);
        }

        window.updateTank();
        window.draw();

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
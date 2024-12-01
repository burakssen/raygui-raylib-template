#include <iostream>
#include <raylib.h>
#include <raygui.h>

int main()
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "raygui example");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawText("raygui example", 20, 20, 20, DARKGRAY);

        if (GuiButton((Rectangle){screenWidth / 2 - 100, screenHeight / 2 - 40, 200, 80}, "PRESS ME"))
        {
            std::cout << "Button pressed" << std::endl;
        }

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
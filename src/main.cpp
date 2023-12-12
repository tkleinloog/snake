#include <iostream>
#include "../raylib/raylib.h"

int main()
{
    const int window_width = 640;
    const int window_height = 480;

    InitWindow(window_width, window_height, "Hello World");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello World", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }

    CloseWindow();

    std::cout << "Hello World! you noob" << std::endl;
    return 0;
}
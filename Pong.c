#include "raylib.h"

int main()
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Pong Game");
    SetTargetFPS(60);

    const char *message = "Hello, Chris";
    int fontSize = 40;

    while(!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        int textWidth = MeasureText(message, fontSize);
        int x = (screenWidth - textWidth) / 2;
        int y = (screenHeight - fontSize) / 2;

        DrawText(message, x, y, fontSize, DARKBLUE);
        EndDrawing();

    }
    CloseWindow();
    return 0;
}


#include "raylib.h"

struct Paddle {
	int posx;
	int posy;
	int width;
	int height;
};

const int screenWidth = 800;
const int screenHeight = 600;

//Speed of paddles
const int speed = 5;



int main()
{
    struct Paddle paddle1;
    struct Paddle paddle2;

    paddle2.posx = screenWidth - 50;
    paddle2.posy = screenHeight - 400;
    paddle2.width = 25;
    paddle2.height = 200;

    paddle1.posx = screenWidth - 775;
    paddle1.posy = screenHeight - 400;
    paddle1.width = 25;
    paddle1.height = 200;
   

    
    InitWindow(screenWidth, screenHeight, "Pong Game");
    SetTargetFPS(60);


    while(!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
	DrawRectangle(paddle1.posx, paddle1.posy, paddle1.width, paddle1.height, RED);
	DrawRectangle(paddle2.posx, paddle2.posy, paddle2.width, paddle2.height, SKYBLUE);
	if(IsKeyDown(KEY_A)) paddle1.posy -= speed;
        if(IsKeyDown(KEY_Z)) paddle1.posy += speed;
	if(IsKeyDown(KEY_K)) paddle2.posy -= speed;
	if(IsKeyDown(KEY_M)) paddle2.posy += speed;

        EndDrawing();



    }
    CloseWindow();
    return 0;
}


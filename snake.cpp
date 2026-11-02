
#include<iostream>
#include "raylib.h"
#include<vector>

using namespace std;


int main() {
    InitWindow(800, 600, "Snake Game");
    SetTargetFPS(60);

    // int snakeX = 210;
    // int snakeY = 390;
    int snakeSize = 30;
    int directionX = 1;
    int directionY = 0;
    int foodX = GetRandomValue(0,25)*snakeSize;
    int foodY = GetRandomValue(0,19)*snakeSize;
    float timer = 0.0f;

    struct Segment{
        int snakeX;
        int snakeY;
    };

    vector<Segment> vec;
    
    vec.push_back({210,390});


    while (!WindowShouldClose()) {

        if(IsKeyDown(KEY_RIGHT) && directionX!=-1){
            directionX = 1;
            directionY = 0;
        }

        if(IsKeyDown(KEY_LEFT) && directionX!=1){
            directionX = -1;
            directionY = 0;
        }


        if(IsKeyDown(KEY_UP) && directionY!=1){
            directionY = -1;
            directionX = 0;
        }
        if(IsKeyDown(KEY_DOWN) && directionY!=-1){
            directionX = 0;
            directionY = 1;
        }

        timer = timer + GetFrameTime();

        if(timer>=0.15f){


        
        
        
        for(int i = (vec.size() - 1) ; i>=1; i--){
            vec[i].snakeX = vec[i-1].snakeX;
            vec[i].snakeY = vec[i-1].snakeY;
        }

        vec[0].snakeX += snakeSize*directionX;
        vec[0].snakeY += snakeSize*directionY;

            
        if(vec[0].snakeX == foodX && vec[0].snakeY == foodY){
            foodX = GetRandomValue(0,25)*snakeSize;
            foodY = GetRandomValue(0,19)*snakeSize;

            vec.push_back(vec.back());
            

        }
        
        timer = 0.0f;
    
        }
        BeginDrawing();
        ClearBackground(BLACK);
        
        DrawRectangle(foodX, foodY,snakeSize,snakeSize,RED);
        for(int i = 0;i<vec.size();i++ ){
            DrawRectangle(vec[i].snakeX, vec[i].snakeY, snakeSize, snakeSize, GREEN);
        }
        EndDrawing();

    }

    CloseWindow();
    return 0;
}


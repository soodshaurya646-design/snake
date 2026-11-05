 if(gameState == 2){
            DrawText("GAME OVER:PRESS ENTER TO RESTART",5,200,40,GREEN);
            if(IsKeyPressed(KEY_ENTER)){
                gameState = 1;
            }
        }
#include <raylib.h>
#include <object.h>

const int screenWidth = 960;
const int screenHeight = 540;

/*THE GPU CRUSHER*/
/*This piece of code that is made in raylib, draws 2^21 worth of squares that gives an average gpu a seizure from the draw calls*/
int main(void)
{
    InitWindow(screenWidth,screenHeight, "LOOOOOOOOOOL");
    Object o = createObject(
        (Vector2){screenWidth/2 - 50, screenHeight/2 - 50},
        (Vector2){10, 10},
        BLUE
    );
    Object d = createObject(
        (Vector2){screenWidth/2 - 20, screenHeight/2 - 200},
        (Vector2){10, 10},
        RED
    );
    Object w = createObject(
        (Vector2){screenWidth/2 - 90, screenHeight/2 - 120},
        (Vector2){10, 10},
        BLACK
    );

    while(!WindowShouldClose()){
        BeginDrawing();
            ClearBackground(WHITE);
            DrawText("CONGRATS IT WORKS DUMB ASS\n", screenWidth/2 - 200,screenHeight/2 - 50, 30, BLACK);
            for(long i = 0; i < 2000000000000000000000; i++){
                drawObject(o);
                drawObject(d);
                drawObject(w);
            };
        EndDrawing();
    };

    CloseWindow();
    return (0);
}

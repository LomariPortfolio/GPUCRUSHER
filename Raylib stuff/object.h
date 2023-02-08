#ifndef OBJECT_H_
#define OBJECT_H_

#include <raylib.h>

typedef struct Object{
    Vector2 position;
    Vector2 size;
    Color color;
} Object;


Object createObject(Vector2 position,Vector2 size,Color color){
    return (Object)
    {
        .position=position,
        .size=size,
        .color=color
    };
};

void drawObject(Object object){
    DrawRectangleV(object.position, object.position, object.color);
}
#endif


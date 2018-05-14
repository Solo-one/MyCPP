#ifndef TURTLE_H
#define TURTLE_H

class Turtle {
public:
    virtual ~Turtle(){
    }

    virtual void Penup() = 0;
    virtual void Pendown() = 0;
    virtual void Forward(int distance) = 0;
    virtual void Turn(int degrees) = 0;
    virtual void GoTo(int x, int y) = 0;
    virtual int GetX() const = 0;
    virtual int GetY() const = 0;
}

#endif
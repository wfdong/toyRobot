#ifndef _ROBOT_H
#define _ROBOT_H
#include <string>

class Robot
{
private:
    int x;
    int y;
    std::string orientation;
public:
    void setX(int inputX);
    int getX();
    void setY(int inputY);
    int getY();
    void setOrientation(std::string facingDirection);
    std::string getOrientation();
    Robot();
    Robot(int inputX, int inputY, std::string inputOrientation);
    ~Robot();
};


#endif
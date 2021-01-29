#ifndef _ROBOTUTILS_H
#define _ROBOTUTILS_H
#include <string>
class RobotUtils
{
public:
    static bool isInteger(std::string str);
    static bool isRightDirection(std::string str);
    static bool isRightRange(int inputX, int inputY);
};
#endif
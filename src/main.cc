#include <iostream>
#include <string>
#include <regex>
#ifndef _ROBOTACTION_H
#include "../include/RobotAction.h"
#endif
using namespace std;

void robotAction(string command);
int main()
{
    cout << "please input your commands(in upper case, and each command in its own line, divide parameters by ',' and  type in '-1' to end up the input):" << endl;
    string inputCMD;
    /*
    while (cin>>inputCMD)
    {
        if ("-1"==inputCMD){
            // input end
            break;
        }else {
            // execute each command

        }
        
    }
    */
    Robot robot;
    RobotPlaceAction robotAction(1,1,"NORTH");
    cout<<robotAction.getPlaceX()<<endl;
    robotAction.action(robot);
    return 0;
}



void robotAction(string command)
{
    // action for specific command
}
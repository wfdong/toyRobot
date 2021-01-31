#include <iostream>
#include <string>
#include <regex>
#ifndef _ROBOTACTION_H
#include "../include/RobotAction.h"
#endif
#ifndef _ROBOTUTILS_H
#include "../include/RobotUtils.h"
#endif
using namespace std;

void robotAction(Robot &robot, string command);
std::string& trim(std::string &);
int main()
{
    cout << "please input your commands(in upper case, and each command in its own line, divide parameters by ',' and  type in '-1' to end up the input):" << endl;
    string inputCMD;
    Robot robot;
    while (getline(cin,inputCMD))
    {
        if ("-1"==inputCMD){
            // input end
            break;
        }else {
            // execute each command
            robotAction(robot, inputCMD);
        }
    }
}



void robotAction(Robot &robot, string command)
{
    // action for specific command
    RobotUtils robotUtils;
    string trimedCMD = trim(command);
    if(trimedCMD.rfind("PLACE")==0){
        cout<<"trimedCMD:"<<trimedCMD<<endl;
        string unTrimedX= trimedCMD.substr(trimedCMD.find(" "), trimedCMD.find(",")-trimedCMD.find(" "));
        string parsedStrX = trim(unTrimedX);
        cout<<"parsedStrX:"<<parsedStrX<<endl;
        string unTrimedY = trimedCMD.substr(trimedCMD.find(",")+1, trimedCMD.rfind(",")-trimedCMD.find(",")-1);
        string parsedStrY = trim(unTrimedY);
        cout<<"parsedStrY:"<<parsedStrY<<endl;
        string unTrimedOrien = trimedCMD.substr(trimedCMD.rfind(",")+1);
        string parsedStrOrien = trim(unTrimedOrien);
         cout<<"parsedStrOrien:"<<parsedStrOrien<<endl;
        if(robotUtils.isInteger(parsedStrX)&&robotUtils.isInteger(parsedStrY)&&robotUtils.isRightDirection(parsedStrOrien)){
            int parsedX = std::stoi(parsedStrX);
            int parsedY = std::stoi(parsedStrY);
            RobotPlaceAction robotPlaceAction(parsedX, parsedY, parsedStrOrien);
            robotPlaceAction.action(robot);
        }
    }else if(trimedCMD == "MOVE"){
        RobotMoveAction robotMoveAction;
        robotMoveAction.action(robot);
    }else if(trimedCMD == "LEFT"){
        RobotLeftAction robotLeftAction;
        robotLeftAction.action(robot);
    }else if(trimedCMD == "RIGHT"){
        RobotRightAction robotRightAction;
        robotRightAction.action(robot);
    }else if(trimedCMD == "REPORT"){
        RobotReportAction robotReportAction;
        robotReportAction.action(robot);
    }
}



std::string& trim(std::string &s) 
{
    if (s.empty()) 
    {
        return s;
    }
 
    s.erase(0,s.find_first_not_of(" "));
    s.erase(s.find_last_not_of(" ") + 1);
    return s;
}
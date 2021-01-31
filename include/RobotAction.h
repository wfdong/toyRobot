#ifndef _ROBOTACTION_H
#define _ROBOTACTION_H
#include "../include/Robot.h"

class RobotAction
{
    private:
    public:
        virtual bool action(Robot &robot)=0;
        virtual ~RobotAction(){};
};

class RobotPlaceAction : public RobotAction
{
    private:
        int placeX=-1;
        int placeY=-1;
        std::string placeOrientation="";
    public:
        RobotPlaceAction();
        RobotPlaceAction(int inputX, int inputY, std::string inputOrientation);
        ~RobotPlaceAction();
        void setPlaceX(int inputX);
        void setPlaceY(int inputY);
        void setPlaceOrientation(std::string inputOrientation);
        int getPlaceX();
        int getPlaceY();
        std::string getPlaceOrirentation();
        bool action(Robot &robot);
};

class RobotLeftAction : public RobotAction
{
private:
    /* data */
public:
    RobotLeftAction();
    ~RobotLeftAction();
    bool action(Robot &robot);
};

class RobotMoveAction : public RobotAction
{
private:
    /* data */
public:
    RobotMoveAction();
    ~RobotMoveAction();
    bool action(Robot &robot);
};

class RobotReportAction : public RobotAction
{
private:
    /* data */
public:
    RobotReportAction();
    ~RobotReportAction();
    bool action(Robot &robot);
};
class RobotRightAction : public RobotAction
{
private:
    /* data */
public:
    RobotRightAction();
    ~RobotRightAction();
    bool action(Robot &robot);
};

#endif
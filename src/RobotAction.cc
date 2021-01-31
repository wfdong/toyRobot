#ifndef _ROBOTACTION_H
#include "../include/RobotAction.h"
#endif
#ifndef _ROBOTUTILS_H
#include "../include/RobotUtils.h"
#endif
#include <regex>
#include <iostream>
using namespace std;

/*
    PlaceAction defination
*/
RobotPlaceAction::RobotPlaceAction(){
}
RobotPlaceAction::RobotPlaceAction(int inputX, int inputY, std::string inputOrientation){
    placeX = inputX;
    placeY = inputY;
    placeOrientation = inputOrientation;
}
RobotPlaceAction::~RobotPlaceAction(){
}
void RobotPlaceAction::setPlaceX(int inputX){
    placeX = inputX;
}
void RobotPlaceAction::setPlaceY(int inputY){
    placeY = inputY;
}
void RobotPlaceAction::setPlaceOrientation(std::string inputOrientation){
    placeOrientation = inputOrientation;
}
int RobotPlaceAction::getPlaceX(){
    return placeX;
}
int RobotPlaceAction::getPlaceY(){
    return placeY;
}
std::string RobotPlaceAction::getPlaceOrirentation(){
    return placeOrientation;
}
bool RobotPlaceAction::action(Robot &robot){
    /* 
        implementation of action:
        action on PLACE command...
    */
    RobotUtils robotUtils;
    if(robotUtils.isRightRange(placeX, placeY) && robotUtils.isRightDirection(placeOrientation)){
        robot.setX(placeX);
        robot.setY(placeY);
        robot.setOrientation(placeOrientation);
        return true;
    }else {
        // don't do anything, ignore it
        return false;
    }
}

/*
    RobotLeftAction defination
*/
RobotLeftAction::RobotLeftAction(){
}
RobotLeftAction::~RobotLeftAction(){
}
bool RobotLeftAction::action(Robot &robot){
    /* 
        implementation of action:
        action on LEFT command...
    */
   if(robot.getOrientation()=="NORTH"){
       robot.setOrientation("WEST");
       return true;
   }else if(robot.getOrientation()=="WEST"){
       robot.setOrientation("SOUTH");
       return true;
   }else if(robot.getOrientation()=="SOUTH"){
       robot.setOrientation("EAST");
       return true;
   }else if(robot.getOrientation()=="EAST"){
       robot.setOrientation("NORTH");
       return true;
   }
   return false;
}

/*
    RobotRightAction defination
*/
RobotRightAction::RobotRightAction(){
}
RobotRightAction::~RobotRightAction(){
}
bool RobotRightAction::action(Robot &robot){
    /* 
        implementation of action:
        action on RIGHT command...
    */
   if(robot.getOrientation()=="NORTH"){
       robot.setOrientation("EAST");
       return true;
   }else if(robot.getOrientation()=="WEST"){
       robot.setOrientation("NORTH");
       return true;
   }else if(robot.getOrientation()=="SOUTH"){
       robot.setOrientation("WEST");
       return true;
   }else if(robot.getOrientation()=="EAST"){
       robot.setOrientation("SOUTH");
       return true;
   }
   return false;
}

/*
    RobotMoveAction defination
*/
RobotMoveAction::RobotMoveAction(){
}
RobotMoveAction::~RobotMoveAction(){
}
bool RobotMoveAction::action(Robot &robot){
    /* 
        implementation of action:
        action on MOVE command...
    */
   int currentX = robot.getX();
   int currentY = robot.getY();
   if(robot.getOrientation()=="NORTH"){
       currentY++;
   }else if(robot.getOrientation()=="WEST"){
       currentX--;
   }else if(robot.getOrientation()=="SOUTH"){
       currentY--;
   }else if(robot.getOrientation()=="EAST"){
       currentX++;
   }
   RobotUtils robotUtils;
   if(robotUtils.isRightRange(currentX, currentY)){
       robot.setX(currentX);
       robot.setY(currentY);
       return true;
   }else{
       // don't do anything, ignore it
       return false;
   }
}

/*
    RobotReportAction defination
*/
RobotReportAction::RobotReportAction(){
}
RobotReportAction::~RobotReportAction(){
}
bool RobotReportAction::action(Robot &robot){
    /* 
        implementation of action:
        action on REPORT command...
    */
   if(robot.getX()>=0 && robot.getY()>=0 && robot.getOrientation()!=""){
       cout<<"Robot's current position:"<<robot.getX()<<","<<robot.getY()<<","<<robot.getOrientation()<<endl;
       return true;
   }else {
       // don't do anything, ignore it
       return false;
   }
   
}

/*
    robot functions' defination
*/
Robot::Robot()
{
}
Robot::Robot(int inputX, int inputY, std::string inputOrientation)
{
    x = inputX;
    y = inputY;
    orientation = inputOrientation;
}
Robot::~Robot()
{
}
void Robot::setX(int inputX)
{
    x = inputX;
}
int Robot::getX()
{
    return x;
}
void Robot::setY(int inputY)
{
    y = inputY;
}
int Robot::getY()
{
    return y;
}
void Robot::setOrientation(std::string facingDirection)
{
    orientation = facingDirection;
}
std::string Robot::getOrientation()
{
    return orientation;
}

/*
    RobotUtils functions' defination
*/
bool RobotUtils :: isInteger(std::string str)
{
    std::regex rx("[0-9]+");
    return std::regex_match(str.begin(),str.end(),rx);
}
bool RobotUtils :: isRightDirection(std::string str)
{
    if(str=="NORTH" || str=="WEST" || str=="SOUTH" || str=="EAST"){
        return true;
    }else {
        return false;
    }
}
bool RobotUtils :: isRightRange(int inputX, int inputY)
{
    if (inputX == 0 || inputX == 1 || inputX == 2 || inputX == 3 | inputX == 4) {
		if (inputY == 0 || inputY == 1 || inputY == 2 || inputY == 3 || inputY == 4) {
			return true;
		} else {
			return false;
		}
	} else {
		return false;
	}
}
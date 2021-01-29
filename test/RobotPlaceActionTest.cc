#include "../src/RobotAction.cc"
#include <vector>

TEST_CASE("Valid Robot Place Command are tested 1", "[RobotPlace 0 0 NORTH]"){
    RobotPlaceAction *robotPlaceAction = new RobotPlaceAction(0, 0, "NORTH");
    REQUIRE(robotPlaceAction->getPlaceX() == 0);
    REQUIRE(robotPlaceAction->getPlaceY() == 0);
    REQUIRE(robotPlaceAction->getPlaceOrirentation() == "NORTH");
    Robot robot;
    REQUIRE(robotPlaceAction->action(robot) == true);
    REQUIRE(robot.getX() == 0);
    REQUIRE(robot.getY() == 0);
    REQUIRE(robot.getOrientation() == "NORTH");
}

TEST_CASE("Valid Robot Place Command are tested 2", "[RobotPlace 1 2 EAST]"){
    RobotPlaceAction *robotPlaceAction = new RobotPlaceAction(1, 2, "EAST");
    REQUIRE(robotPlaceAction->getPlaceX() == 1);
    REQUIRE(robotPlaceAction->getPlaceY() == 2);
    REQUIRE(robotPlaceAction->getPlaceOrirentation() == "EAST");
    Robot robot;
    REQUIRE(robotPlaceAction->action(robot) == true);
    REQUIRE(robot.getX() == 1);
    REQUIRE(robot.getY() == 2);
    REQUIRE(robot.getOrientation() == "EAST");
}

TEST_CASE("Invalid Robot Place Command are tested 3", "[RobotPlace 10 200 EASTSOUTH]"){
    RobotPlaceAction *robotPlaceAction = new RobotPlaceAction(10, 200, "EASTSOUTH");
    REQUIRE(robotPlaceAction->getPlaceX() == 10);
    REQUIRE(robotPlaceAction->getPlaceY() == 200);
    REQUIRE(robotPlaceAction->getPlaceOrirentation() != "EASTSOUTH");
    Robot robot;
    REQUIRE(robotPlaceAction->action(robot) == false);
    REQUIRE(robot.getX() != 10);
    REQUIRE(robot.getY() != 200);
    REQUIRE(robot.getOrientation() != "EASTSOUTH");
}
#include "../src/RobotAction.cc"
#include <vector>

/*
    test for place action
*/
TEST_CASE("Valid Robot Place Command are tested 1", "[RobotPlace 0 0 NORTH]"){
    RobotPlaceAction robotPlaceAction(0, 0, "NORTH");
    REQUIRE(robotPlaceAction.getPlaceX() == 0);
    REQUIRE(robotPlaceAction.getPlaceY() == 0);
    REQUIRE(robotPlaceAction.getPlaceOrirentation() == "NORTH");
    Robot robot;
    REQUIRE(robotPlaceAction.action(robot) == true);
    REQUIRE(robot.getX() == 0);
    REQUIRE(robot.getY() == 0);
    REQUIRE(robot.getOrientation() == "NORTH");
}

TEST_CASE("Valid Robot Place Command are tested 2", "[RobotPlace 1 2 EAST]"){
    RobotPlaceAction robotPlaceAction(1, 2, "EAST");
    REQUIRE(robotPlaceAction.getPlaceX() == 1);
    REQUIRE(robotPlaceAction.getPlaceY() == 2);
    REQUIRE(robotPlaceAction.getPlaceOrirentation() == "EAST");
    Robot robot;
    REQUIRE(robotPlaceAction.action(robot) == true);
    REQUIRE(robot.getX() == 1);
    REQUIRE(robot.getY() == 2);
    REQUIRE(robot.getOrientation() == "EAST");
}

TEST_CASE("Invalid Robot Place Command are tested 3", "[RobotPlace 10 200 EASTSOUTH]"){
    RobotPlaceAction robotPlaceAction(10, 200, "EASTSOUTH");
    REQUIRE(robotPlaceAction.getPlaceX() == 10);
    REQUIRE(robotPlaceAction.getPlaceY() == 200);
    REQUIRE(robotPlaceAction.getPlaceOrirentation() == "EASTSOUTH");
    Robot robot;
    REQUIRE(robotPlaceAction.action(robot) == false);
    REQUIRE(robot.getX() != 10);
    REQUIRE(robot.getY() != 200);
    REQUIRE(robot.getOrientation() != "EASTSOUTH");
}


/*
    test for left action
*/
TEST_CASE("Valid Robot LEFT Command are tested 1", "[Robot left]"){
    RobotPlaceAction robotPlaceAction(0, 0, "NORTH");
    REQUIRE(robotPlaceAction.getPlaceX() == 0);
    REQUIRE(robotPlaceAction.getPlaceY() == 0);
    REQUIRE(robotPlaceAction.getPlaceOrirentation() == "NORTH");
    Robot robot;
    REQUIRE(robotPlaceAction.action(robot) == true);
    REQUIRE(robot.getX() == 0);
    REQUIRE(robot.getY() == 0);
    REQUIRE(robot.getOrientation() == "NORTH");

    RobotLeftAction robotLeftAction;
    REQUIRE(robotLeftAction.action(robot) == true);
    REQUIRE(robot.getOrientation() == "WEST");
}

TEST_CASE("Valid Robot LEFT Command are tested 2", "[Robot left]"){
    RobotPlaceAction robotPlaceAction(0, 0, "SOUTH");
    REQUIRE(robotPlaceAction.getPlaceX() == 0);
    REQUIRE(robotPlaceAction.getPlaceY() == 0);
    REQUIRE(robotPlaceAction.getPlaceOrirentation() == "SOUTH");
    Robot robot;
    REQUIRE(robotPlaceAction.action(robot) == true);
    REQUIRE(robot.getX() == 0);
    REQUIRE(robot.getY() == 0);
    REQUIRE(robot.getOrientation() == "SOUTH");

    RobotLeftAction robotLeftAction;
    REQUIRE(robotLeftAction.action(robot) == true);
    REQUIRE(robot.getOrientation() == "EAST");
}

TEST_CASE("Valid Robot LEFT Command are tested 3", "[Robot left]"){
    RobotPlaceAction robotPlaceAction(10, 200, "EASTSOUTH");
    REQUIRE(robotPlaceAction.getPlaceX() == 10);
    REQUIRE(robotPlaceAction.getPlaceY() == 200);
    REQUIRE(robotPlaceAction.getPlaceOrirentation() == "EASTSOUTH");
    Robot robot;
    REQUIRE(robotPlaceAction.action(robot) == false);
    REQUIRE(robot.getX() != 10);
    REQUIRE(robot.getY() != 200);
    REQUIRE(robot.getOrientation() != "EASTSOUTH");

    RobotLeftAction robotLeftAction;
    REQUIRE(robotLeftAction.action(robot) == false);
}


/*
    test for right action
*/
TEST_CASE("Valid Robot RIGHT Command are tested 1", "[Robot RIGHT]"){
    RobotPlaceAction robotPlaceAction(0, 0, "NORTH");
    REQUIRE(robotPlaceAction.getPlaceX() == 0);
    REQUIRE(robotPlaceAction.getPlaceY() == 0);
    REQUIRE(robotPlaceAction.getPlaceOrirentation() == "NORTH");
    Robot robot;
    REQUIRE(robotPlaceAction.action(robot) == true);
    REQUIRE(robot.getX() == 0);
    REQUIRE(robot.getY() == 0);
    REQUIRE(robot.getOrientation() == "NORTH");

    RobotRightAction robotRightAction;
    REQUIRE(robotRightAction.action(robot) == true);
    REQUIRE(robot.getOrientation() == "EAST");
}

TEST_CASE("Valid Robot RIGHT Command are tested 2", "[Robot RIGHT]"){
    RobotPlaceAction robotPlaceAction(0, 0, "SOUTH");
    REQUIRE(robotPlaceAction.getPlaceX() == 0);
    REQUIRE(robotPlaceAction.getPlaceY() == 0);
    REQUIRE(robotPlaceAction.getPlaceOrirentation() == "SOUTH");
    Robot robot;
    REQUIRE(robotPlaceAction.action(robot) == true);
    REQUIRE(robot.getX() == 0);
    REQUIRE(robot.getY() == 0);
    REQUIRE(robot.getOrientation() == "SOUTH");

    RobotRightAction robotRightAction;
    REQUIRE(robotRightAction.action(robot) == true);
    REQUIRE(robot.getOrientation() == "WEST");
}

TEST_CASE("Valid Robot RIGHT Command are tested 3", "[Robot RIGHT]"){
    RobotPlaceAction robotPlaceAction(10, 200, "EASTSOUTH");
    REQUIRE(robotPlaceAction.getPlaceX() == 10);
    REQUIRE(robotPlaceAction.getPlaceY() == 200);
    REQUIRE(robotPlaceAction.getPlaceOrirentation() == "EASTSOUTH");
    Robot robot;
    REQUIRE(robotPlaceAction.action(robot) == false);
    REQUIRE(robot.getX() != 10);
    REQUIRE(robot.getY() != 200);
    REQUIRE(robot.getOrientation() != "EASTSOUTH");

    RobotRightAction robotRightAction;
    REQUIRE(robotRightAction.action(robot) == false);
}


/*
    test for move action
*/
TEST_CASE("Valid Robot MOVE Command are tested 1", "[Robot move]"){
    RobotPlaceAction robotPlaceAction(0, 0, "NORTH");
    REQUIRE(robotPlaceAction.getPlaceX() == 0);
    REQUIRE(robotPlaceAction.getPlaceY() == 0);
    REQUIRE(robotPlaceAction.getPlaceOrirentation() == "NORTH");
    Robot robot;
    REQUIRE(robotPlaceAction.action(robot) == true);
    REQUIRE(robot.getX() == 0);
    REQUIRE(robot.getY() == 0);
    REQUIRE(robot.getOrientation() == "NORTH");

    RobotMoveAction robotMoveAction;
    REQUIRE(robotMoveAction.action(robot) == true);
    REQUIRE(robot.getX() == 0);
    REQUIRE(robot.getY() == 1);
    REQUIRE(robot.getOrientation() == "NORTH");
}

TEST_CASE("Valid Robot MOVE Command are tested 2", "[Robot move]"){
    RobotPlaceAction robotPlaceAction(0, 0, "SOUTH");
    REQUIRE(robotPlaceAction.getPlaceX() == 0);
    REQUIRE(robotPlaceAction.getPlaceY() == 0);
    REQUIRE(robotPlaceAction.getPlaceOrirentation() == "SOUTH");
    Robot robot;
    REQUIRE(robotPlaceAction.action(robot) == true);
    REQUIRE(robot.getX() == 0);
    REQUIRE(robot.getY() == 0);
    REQUIRE(robot.getOrientation() == "SOUTH");

    RobotMoveAction robotMoveAction;
    REQUIRE(robotMoveAction.action(robot) == false);
    REQUIRE(robot.getX() == 0);
    REQUIRE(robot.getY() == 0);
    REQUIRE(robot.getOrientation() == "SOUTH");
}

TEST_CASE("Valid Robot MOVE Command are tested 3", "[Robot move]"){
    RobotPlaceAction robotPlaceAction(10, 200, "EASTSOUTH");
    REQUIRE(robotPlaceAction.getPlaceX() == 10);
    REQUIRE(robotPlaceAction.getPlaceY() == 200);
    REQUIRE(robotPlaceAction.getPlaceOrirentation() == "EASTSOUTH");
    Robot robot;
    REQUIRE(robotPlaceAction.action(robot) == false);
    REQUIRE(robot.getX() != 10);
    REQUIRE(robot.getY() != 200);
    REQUIRE(robot.getOrientation() != "EASTSOUTH");

    RobotMoveAction robotMoveAction;
    REQUIRE(robotMoveAction.action(robot) == false);
}

/*
    test for report action
*/
TEST_CASE("Valid Robot REPORT Command are tested 1", "[Robot report]"){
    RobotPlaceAction robotPlaceAction(0, 0, "NORTH");
    REQUIRE(robotPlaceAction.getPlaceX() == 0);
    REQUIRE(robotPlaceAction.getPlaceY() == 0);
    REQUIRE(robotPlaceAction.getPlaceOrirentation() == "NORTH");
    Robot robot;
    REQUIRE(robotPlaceAction.action(robot) == true);
    REQUIRE(robot.getX() == 0);
    REQUIRE(robot.getY() == 0);
    REQUIRE(robot.getOrientation() == "NORTH");

    RobotReportAction robotReportAction;
    REQUIRE(robotReportAction.action(robot) == true);
    REQUIRE(robot.getX() == 0);
    REQUIRE(robot.getY() == 0);
    REQUIRE(robot.getOrientation() == "NORTH");
}

TEST_CASE("Valid Robot REPORT Command are tested 2", "[Robot report]"){
    RobotPlaceAction robotPlaceAction(0, 0, "SOUTH");
    REQUIRE(robotPlaceAction.getPlaceX() == 0);
    REQUIRE(robotPlaceAction.getPlaceY() == 0);
    REQUIRE(robotPlaceAction.getPlaceOrirentation() == "SOUTH");
    Robot robot;
    REQUIRE(robotPlaceAction.action(robot) == true);
    REQUIRE(robot.getX() == 0);
    REQUIRE(robot.getY() == 0);
    REQUIRE(robot.getOrientation() == "SOUTH");

    RobotReportAction robotReportAction;
    REQUIRE(robotReportAction.action(robot) == true);
    REQUIRE(robot.getX() == 0);
    REQUIRE(robot.getY() == 0);
    REQUIRE(robot.getOrientation() == "SOUTH");
}

TEST_CASE("Valid Robot REPORT Command are tested 3", "[Robot report]"){
    RobotPlaceAction robotPlaceAction(10, 200, "EASTSOUTH");
    REQUIRE(robotPlaceAction.getPlaceX() == 10);
    REQUIRE(robotPlaceAction.getPlaceY() == 200);
    REQUIRE(robotPlaceAction.getPlaceOrirentation() == "EASTSOUTH");
    Robot robot;
    REQUIRE(robotPlaceAction.action(robot) == false);
    REQUIRE(robot.getX() != 10);
    REQUIRE(robot.getY() != 200);
    REQUIRE(robot.getOrientation() != "EASTSOUTH");

    RobotReportAction robotReportAction;
    REQUIRE(robotReportAction.action(robot) == false);
}


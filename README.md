#Getting Started

Prerequisites:

C++ develop environment(better>=c++11)

cmake (version>=3.9.13)


#BUILD

1. Open a command console and cd into the folder "toyRobot/build/" and run the command below:

cmake ..

(note: the command above is "cmake ..", cmake dot dot, don't forget input the dot dot "..")

2. Run the command below:

make

3. To run the test cases, run the command below:

test/tests-run

4. To run the application, run the command below:

toyRobot

then there will be a prompt echo says "please input your commands(in upper case, and each command in its own line, divide parameters by ',' and  type in '-1' to end up the input):"

then input your commands in uppercase letter(one line one command), eg:

PLACE 0,0,NORTH

MOVE

RIGHT

MOVE

REPORT

-1


To end up the input just input "-1".

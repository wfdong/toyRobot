add_library(tests-main STATIC main.cc)

# This contains the actual tests.
add_executable(tests-run RobotTests.cc)

target_link_libraries(tests-run tests-main)

target_compile_definitions(tests-run PRIVATE CATCH_CONFIG_FAST_COMPILE
	CATCH_CONFIG_DISABLE_MATCHERS)

# Important if you don't want the test compile to take >5s every time.
target_precompile_headers(tests-run PRIVATE catch.hh)

add_custom_target(test "tests-run" "-d yes")
add_definitions(-std=c++11)
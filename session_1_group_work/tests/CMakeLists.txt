# Locate GoogleTest
find_package(GTest REQUIRED)

# Add the test executable
add_executable(TestDateUtils TestDateUtils.cpp)
add_executable(TestStringManipulation TestStringManipulation.cpp)

# Link the test executable with the library and GTest
target_link_libraries(TestDateUtils UnitTestDemo GTest::GTest GTest::Main)
target_link_libraries(TestStringManipulation UnitTestDemo GTest::GTest GTest::Main)

# Register the test with CTest
add_test(NAME DateUtilsTest COMMAND TestDateUtils)
add_test(NAME StringManipulationTest COMMAND TestStringManipulation)


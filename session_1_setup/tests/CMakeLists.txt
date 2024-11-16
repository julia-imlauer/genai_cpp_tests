# Locate GoogleTest
find_package(GTest REQUIRED)

# Add the test executable
add_executable(TestMathOperations TestMathOperations.cpp)

# Link the test executable with the library and GTest
target_link_libraries(TestMathOperations MathOperations GTest::GTest GTest::Main)

# Register the test with CTest
add_test(NAME MathOperationTests COMMAND TestMathOperations)


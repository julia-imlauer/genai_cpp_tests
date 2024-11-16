# Locate GoogleTest
find_package(GTest REQUIRED)

# Add the test executable
add_executable(TestUserManager TestUserManager.cpp)

# Link the test executable with the library and GTest
target_link_libraries(TestUserManager UserManager GTest::GTest GTest::Main)

# Register the test with CTest
add_test(NAME UserManagerTests COMMAND TestUserManager)


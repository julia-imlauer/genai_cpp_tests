#include <gtest/gtest.h>
#include "MathOperations.h"

TEST(MathOperationTest, AddFunction) {
    MathOperation mathOp;
    EXPECT_EQ(mathOp.Add(2, 3), 5);
    EXPECT_EQ(mathOp.Add(-1, -1), -2);
    EXPECT_EQ(mathOp.Add(0, 0), 0);
    EXPECT_EQ(mathOp.Add(-5, 5), 0);
}

TEST(MathOperationTest, SubtractFunction) {
    MathOperation mathOp;
    EXPECT_EQ(mathOp.Subtract(2, 3), -1);
    EXPECT_EQ(mathOp.Subtract(-1, -1), 0);
    EXPECT_EQ(mathOp.Subtract(0, 0), 0);
    EXPECT_EQ(mathOp.Subtract(-5, 5), -10);
}

TEST(MathOperationTest, MultiplyFunction) { // Add this test case
    MathOperation mathOp;
    EXPECT_EQ(mathOp.Multiply(2, 3), 6);
    EXPECT_EQ(mathOp.Multiply(-1, -1), 1);
    EXPECT_EQ(mathOp.Multiply(0, 5), 0);
    EXPECT_EQ(mathOp.Multiply(-5, 5), -25);
}


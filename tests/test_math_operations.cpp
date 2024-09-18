#include<gtest/gtest.h>
#include"MathOperation.hpp"

TEST(MathOperationTest, ADD) {
    EXPECT_EQ(3, MathOperation::add(1, 2));
}

TEST(MathOperationTest, SUBSTRACT) {
    EXPECT_EQ(-1, MathOperation::substract(1, 2));
}

TEST(MathOperationTest, MULTIPLY) {
    EXPECT_EQ(2, MathOperation::multiply(1, 2));
}

TEST(MathOperationTest, DIVIDE) {
    EXPECT_EQ(0.5, MathOperation::divide(1, 2));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
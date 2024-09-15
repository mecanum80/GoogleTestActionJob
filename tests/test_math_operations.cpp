#include<gtest/gtest.h>
#include"MathOperation.hpp"

TEST(MathOperationTest, ADD) {
    MathOperation mathOperation;
    EXPECT_EQ(55, mathOperation.add(1, 2));
}

TEST(MathOperationTest, SUBSTRACT) {
    MathOperation mathOperation;
    EXPECT_EQ(-1, mathOperation.substract(1, 2));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
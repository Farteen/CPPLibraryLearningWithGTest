//
// Created by yysz02 on 2018/12/3.
//

#include <gtest/gtest.h>

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(FooTest, NoneZeroTesting) {
    EXPECT_EQ(1, 0);
}
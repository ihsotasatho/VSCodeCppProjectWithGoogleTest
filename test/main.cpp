#include "gtest/gtest.h"
#include "../src/sample.hpp"

TEST(SampleClass,test1)
{
    int number = 10;
    Sample sample {number};
    ASSERT_EQ(sample.GetValue(),number);
    EXPECT_EQ(sample.AddAllNumberFromZero(),54);
}

int main(int argc, char* argv[])
{    
    ::testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}
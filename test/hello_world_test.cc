#include <gtest/gtest.h>

#include "time_utility/hello_world.h"

class HelloWorldTest : public testing::Test {
protected:
    virtual void SetUp() override {}
};

TEST_F(HelloWorldTest, hello_world_test) {
    EXPECT_EQ(HelloWorld(), "Hello World");
}

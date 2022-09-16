#include "gtest/gtest.h"
#include "snapshot/snapshot.h"

#include "time-utility/time-utility.h"

class TimeUtilityTest : public testing::Test {
protected:
    virtual void SetUp() override {}
};

TEST_F(TimeUtilityTest, timestamp_test) {
    {
        SNAPSHOT(TimeUtility::Now::SteadyTimestamp<std::chrono::nanoseconds>());
        SNAPSHOT(TimeUtility::Now::SteadyTimestamp<std::chrono::microseconds>());
        SNAPSHOT(TimeUtility::Now::SteadyTimestamp<std::chrono::milliseconds>());
        SNAPSHOT(TimeUtility::Now::SteadyTimestamp<std::chrono::seconds>());
        SNAPSHOT(TimeUtility::Now::SteadyTimestamp<std::chrono::minutes>());
        SNAPSHOT(TimeUtility::Now::SteadyTimestamp<std::chrono::hours>());
    }

    {
        SNAPSHOT(TimeUtility::Now::SystemTimestamp<std::chrono::nanoseconds>());
        SNAPSHOT(TimeUtility::Now::SystemTimestamp<std::chrono::microseconds>());
        SNAPSHOT(TimeUtility::Now::SystemTimestamp<std::chrono::milliseconds>());
        SNAPSHOT(TimeUtility::Now::SystemTimestamp<std::chrono::seconds>());
        SNAPSHOT(TimeUtility::Now::SystemTimestamp<std::chrono::minutes>());
        SNAPSHOT(TimeUtility::Now::SystemTimestamp<std::chrono::hours>());
    }
}

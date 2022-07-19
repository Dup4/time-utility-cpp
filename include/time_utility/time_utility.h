#ifndef TIME_UTILITY_TIME_UTILITY_H
#define TIME_UTILITY_TIME_UTILITY_H

#include <string>

namespace time_utility {

class TimeUtility {
public:
    class Now {
    public:
        template <typename T>
        static int64_t SteadyTimestamp() {
            return std::chrono::duration_cast<T>(std::chrono::steady_clock::now().time_since_epoch()).count();
        }

        template <typename T>
        static int64_t SystemTimestamp() {
            return std::chrono::duration_cast<T>(std::chrono::system_clock::now().time_since_epoch()).count();
        }
    };
};

}  // namespace time_utility

using TimeUtility = ::time_utility::TimeUtility;

#endif  // TIME_UTILITY_TIME_UTILITY_H

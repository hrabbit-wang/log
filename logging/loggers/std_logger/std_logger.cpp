//
#include <iostream>

#include "logging/loggers/std_logger/std_logger.h"

namespace zpilot {
namespace common {

void StdLogger::Log(const std::string& msg) { std::cout << msg; }
void StdLogger::Log(const std::int32_t msg) { std::cout << msg; }
void StdLogger::Log(const std::uint32_t msg) { std::cout << msg; }
void StdLogger::Log(const std::int64_t msg) { std::cout << msg; }
void StdLogger::Log(const std::uint64_t msg) { std::cout << msg; }
void StdLogger::Log(const float msg) { std::cout << msg; }
void StdLogger::Log(const double msg) { std::cout << msg; }

} // namespace common
} // namespace zpilot

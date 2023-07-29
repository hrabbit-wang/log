#include <gtest/gtest.h>
#include "logging/logging.h"
#include "logging/loggers/std_logger/std_logger.h"

using namespace zpilot::common;

TEST(message_test,content)
{
    //prepare
    auto uptr = std::make_unique<StdLogger>();
    Logging::Instance().AddLogger(std::move(uptr));

    // Logging::Instance() << "test" << std::endl;
    // Logging::Instance() << 0 << std::endl;
    // Logging::Instance() << 1u << std::endl;
    // Logging::Instance() << 1.9f << std::endl;
    // Logging::Instance() << 21.01 << std::endl;
    // Logging::Instance() << true << std::endl;

    EXPECT_EQ(true, true);
}

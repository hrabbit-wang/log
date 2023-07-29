//
#include <gtest/gtest.h>
#include "logging/logger_macro.h"

using namespace zpilot;

TEST(message_test1, content)
{
    // prepare
    LogWrapper::Init("test");
    LogWrapper::SetLogLevel(LogWrapper::LogLevel::INFO);
    // LogWrapper::SetLogDir("./log_logging_");
    // when
    // ZLOG_INFO << "test info" << std::endl;
    // ZLOG_WARNING << "test warning" << std::endl;
    // ZLOG_ERROR << "test error" << std::endl;
    // LOG_FATAL << "test fatal" << std::endl;

    ZLOG_INFO("hahahah ", 8, 666);
    ZLOG_INFO_STREAM(__PRETTY_FUNCTION__, "stream " << 885 << " sas");

    // then
    EXPECT_EQ(true, true);
}

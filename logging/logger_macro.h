#ifndef _LOGGING_LOGGER_MACRO_H_
#define _LOGGING_LOGGER_MACRO_H_

#include <glog/logging.h>
#include "logging/log_wrapper.h"
#include "logging/logger.h"

// #define LOG(level) std::cout

#if 0

#define ZLOG_INFO LOG(INFO)

#define ZLOG_WARNING LOG(WARNING)

#define ZLOG_ERROR LOG(ERROR)

#define ZLOG_FATAL LOG(FATAL)

#else

#define ZLOG_INFO(...) zpilot::Logger::LogInfo(__VA_ARGS__)

#define ZLOG_INFO_STREAM(id_str, stream) \
    do                                   \
    {                                    \
        std::stringstream ss;            \
        ss << stream << std::endl;       \
        ZLOG_INFO(id_str, ss.str());     \
    } while (0);

#define ZLOG_WARNING LOG(WARNING)

#define ZLOG_ERROR LOG(ERROR)

#define ZLOG_FATAL LOG(FATAL)

#endif

#endif /* _LOGGING_LOGGER_MACRO_H_ */

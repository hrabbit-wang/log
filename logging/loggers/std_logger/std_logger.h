#ifndef _APPS_COMMON_LOG_STD_LOGGER_H_
#define _APPS_COMMON_LOG_STD_LOGGER_H_

#include "logging/logger_base.h"

namespace zpilot {
namespace common {

class StdLogger : public LoggerBase {
public: 
    StdLogger() = default;
    ~StdLogger() = default;

    void Log(const std::string& msg) override;
    void Log(const std::int32_t msg) override;
    void Log(const std::uint32_t msg) override;
    void Log(const std::int64_t msg) override;
    void Log(const std::uint64_t msg) override;
    void Log(const float msg) override;
    void Log(const double msg) override;
};

} // namespace common
} // namespace zpilot

#endif /* _APPS_COMMON_LOG_STD_LOGGER_H_ */

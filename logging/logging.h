#ifndef _APPS_COMMON_LOG_LOGGING_H_
#define _APPS_COMMON_LOG_LOGGING_H_

#include <memory>
#include <vector>
#include <ostream>

#include "logging/logger_base.h"

namespace zpilot {
namespace common {

class   Logging {
public:
    static Logging& Instance() { return instance_; }
    ~Logging() = default;

    void AddLogger(std::unique_ptr<LoggerBase>&& logger);

public:
// macro
#define DO_LOGGING(msg)             \
    for (auto& logger : loggers_) { \
        logger->Log(msg);           \
    }                               \
    return *this

    // interface
    Logging& operator<<(const std::string& str) { DO_LOGGING(str); }
    Logging& operator<<(const char str) { DO_LOGGING(str); }
    Logging& operator<<(const std::int8_t val) { DO_LOGGING(val); }
    Logging& operator<<(const std::uint8_t val) { DO_LOGGING(val); }
    Logging& operator<<(const std::int16_t val) { DO_LOGGING(val); }
    Logging& operator<<(const std::uint16_t val) { DO_LOGGING(val); }
    Logging& operator<<(const std::int32_t val) { DO_LOGGING(val); }
    Logging& operator<<(const std::uint32_t val) { DO_LOGGING(val); }
    Logging& operator<<(const std::int64_t val) { DO_LOGGING(val); }
    Logging& operator<<(const std::uint64_t val) { DO_LOGGING(val); }
    Logging& operator<<(const float val) { DO_LOGGING(val); }
    Logging& operator<<(const double val) { DO_LOGGING(val); }

    Logging& operator <<(std::ostream& (*os)(std::ostream&))
    {
        // for std::endl
        DO_LOGGING('\n');
    }

private:
    explicit Logging() = default;

private:
    static Logging instance_;
    std::vector<std::unique_ptr<LoggerBase>> loggers_{};
};

} // namespace common
} // namespace zpilot

#endif /* _APPS_COMMON_LOG_LOGGING_H_ */

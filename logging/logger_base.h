#ifndef _APPS_COMMON_LOGGER_LOGGER_H_
#define _APPS_COMMON_LOGGER_LOGGER_H_

#include <string>

namespace zpilot {
namespace common {

class LoggerBase {
public:
    LoggerBase() = default;
    ~LoggerBase() = default;

    virtual void Log(const std::string& msg) = 0;
    virtual void Log(const std::int32_t msg) = 0;
    virtual void Log(const std::uint32_t msg) = 0;
    virtual void Log(const std::int64_t msg) = 0;
    virtual void Log(const std::uint64_t msg) = 0;
    virtual void Log(const float msg) = 0;
    virtual void Log(const double msg) = 0;

    //
    virtual void Log(const char msg) { Log(std::string{msg}); }
    virtual void Log(const bool msg) { Log(static_cast<std::int32_t>(msg)); }
    virtual void Log(const std::int8_t msg) { Log(static_cast<std::int32_t>(msg)); }
    virtual void Log(const std::uint8_t msg) { Log(static_cast<std::uint32_t>(msg)); }
    virtual void Log(const std::int16_t msg) { Log(static_cast<std::int32_t>(msg)); }
    virtual void Log(const std::uint16_t msg) { Log(static_cast<std::uint32_t>(msg)); }

private:
    /* data */
};

} // namespace common
} // namespace zpilot

#endif /* _APPS_COMMON_LOGGER_LOGGER_H_ */

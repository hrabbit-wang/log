#ifndef _LOGGING_LOG_WRAPPER_H_
#define _LOGGING_LOG_WRAPPER_H_

#include <string>

namespace zpilot
{
    class LogWrapper
    {
    public:
        enum class LogLevel
        {
            INFO,
            WARNING,
            ERROR,
            FATAL
        };
        enum class LogDestiny
        {
            None,
            STDOUT,
            FILE,
            BOTH_STDOUT_FILE,
        };

    public:
        static void Init(const std::string &module_name);
        static void SetLogLevel(const LogLevel level);
        static void SetLogDir(const std::string &dir);
        static void SetLogDestiny(const LogDestiny destiny);
        static LogLevel GetLogLevel();

    private:
        static LogLevel log_level_;
        static LogDestiny log_destiny_;
    };

}

#endif /* _LOGGING_LOG_WRAPPER_H_ */

#ifndef _LOGGING_LOGGER_H_
#define _LOGGING_LOGGER_H_

#include <iostream>

namespace zpilot
{

    class Logger
    {
    public:
        template <typename Stream, typename T, typename... Args>
        inline static void LogRecursive(Stream &stream, const T &item, const Args &...args);

        template <typename Stream>
        inline static void LogRecursive(Stream &stream);

        template <typename... Args>
        inline static void LogInfo(const Args &...args);
    };

    template <typename Stream, typename T, typename... Args>
    inline void Logger::LogRecursive(Stream &stream, const T &item, const Args &...args)
    {
        stream << item << " ";
        LogRecursive(stream, args...);
    }

    template <typename Stream>
    inline void Logger::LogRecursive(Stream &stream)
    {
        stream << std::endl;
    }

    template <typename... Args>
    inline void Logger::LogInfo(const Args &...args)
    {
        LogRecursive(std::cout, args...);
    }

} // namespace zpilot

#endif /* _LOGGING_LOGGER_H_ */

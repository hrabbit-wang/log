//
#include "logging/log_wrapper.h"
#include <glog/logging.h>

namespace zpilot
{
    LogWrapper::LogLevel LogWrapper::log_level_{LogWrapper::LogLevel::INFO};
    LogWrapper::LogDestiny LogWrapper::log_destiny_{LogWrapper::LogDestiny::FILE};

    void LogWrapper::Init(const std::string &module_name)
    {
        google::InitGoogleLogging(module_name.c_str());
        std::string dir{"./log_" + module_name + "_"};
        google::SetLogDestination(google::INFO, dir.c_str());
        google::SetLogDestination(google::ERROR, "");
        google::SetLogDestination(google::WARNING, "");
        google::SetLogDestination(google::FATAL, "");
        google::InstallFailureSignalHandler();
        //
        SetLogDestiny(LogDestiny::BOTH_STDOUT_FILE);
    }

    void LogWrapper::SetLogLevel(const LogWrapper::LogLevel level)
    {
        if (log_level_ == level)
        {
            return;
        }

        log_level_ = level;
        FLAGS_minloglevel = static_cast<int>(level);
    }

    void LogWrapper::SetLogDir(const std::string &dir)
    {
        google::SetLogDestination(google::INFO, dir.c_str());
    }

    void LogWrapper::SetLogDestiny(const LogWrapper::LogDestiny destiny)
    {
        if (log_destiny_ == destiny)
        {
            return;
        }

        log_destiny_ = destiny;
        switch (destiny)
        {
        case LogWrapper::LogDestiny::STDOUT:
            FLAGS_logtostderr = 1;
            FLAGS_alsologtostderr = 0;
            break;
        case LogWrapper::LogDestiny::FILE:
            FLAGS_logtostderr = 0;
            FLAGS_alsologtostderr = 0;
            break;
        case LogWrapper::LogDestiny::BOTH_STDOUT_FILE:
            FLAGS_logtostderr = 0;
            FLAGS_alsologtostderr = 1;
            break;
        default:
            break;
        }
    }

    LogWrapper::LogLevel LogWrapper::GetLogLevel()
    {
        return log_level_;
    }

} // namespace name

//
#include "logging/logging.h"

namespace zpilot {
namespace common { 

Logging Logging::instance_{}; // static member initialization

void Logging::AddLogger(std::unique_ptr<LoggerBase>&& logger) {
    loggers_.push_back(std::move(logger));
}

}
}
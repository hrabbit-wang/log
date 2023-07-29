# 
cc_test (
    name = "logging_unit_test",
    srcs = [
        "logging_ut.cpp",
        "log_macro_ut.cpp",
    ],
    copts = ["-std=c++14"],
    deps = [
        "//logging:logging",
        "//logging/loggers/std_logger:std_logger",
        "@gtest//:gtest",
        "@gtest//:gtest_main",
    ],
)
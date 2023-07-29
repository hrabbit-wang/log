default_visibility = ["//visibility:public"]

cc_library (
    name = "std_logger",
    hdrs = glob([
        "*.h",
        "*.hpp",
    ]),
    srcs = glob([
        "*.cpp",
    ]),
    copts = ["-std=c++14"],
    deps = ["//logging:logging"],
    visibility = default_visibility,
)

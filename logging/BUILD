# 
default_visibility = ["//visibility:public"]

cc_library (
    name = "logging",
    hdrs = glob([
        "*.h",
        "*.hpp",
    ]),
    srcs = glob([
        "*.cpp",
    ]),
    copts = ["-std=c++14"],
    deps = [
        "@com_github_google_glog//:glog",
    ],
    visibility = default_visibility,
)

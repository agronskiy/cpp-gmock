cc_library(
    name = "client_lib",
    srcs = [
        "client.cpp",
    ],
    hdrs = [
        "client.h",
    ],
    copts = ["--std=c++17"],
    visibility = ["//visibility:public"],
    deps = [
        "//mocked-heavy-lifter-lib:heavy_lifter_lib",
        "@com_google_glog//:glog",
    ],
)

cc_test(
    name = "client_lib_test",
    srcs = [
        "client_test.cpp",
    ],
    copts = ["--std=c++17"],
    deps = [
        ":client_lib",
        "//mocked-heavy-lifter-lib:heavy_lifter_lib",
        "//mocked-heavy-lifter-lib/testing:heavy_lifter_testing",
        "@com_github_gflags_gflags//:gflags",
        "@com_google_glog//:glog",
        "@com_google_googletest//:gtest",
    ],
)

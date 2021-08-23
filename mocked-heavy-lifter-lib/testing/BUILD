cc_library(
    name = "heavy_lifter_testing",
    hdrs = [
        "heavy_lifter_mock.h",
    ],
    copts = ["--std=c++17"],
    linkopts = ["-lcurl"],
    visibility = ["//visibility:public"],
    deps = [
        "@com_google_googletest//:gtest",
    ],
)

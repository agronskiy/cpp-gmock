# GoLang
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository", "new_git_repository")
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

git_repository(
    name = "com_github_gflags_gflags",
    commit = "addd749114fab4f24b7ea1e0f2f837584389e52c",
    remote = "https://github.com/gflags/gflags.git",
    shallow_since = "1584534678 +0000",
)

git_repository(
    name = "com_google_glog",
    commit = "9f600fac52731ca4be75243e6c71daf110f7d3b3",
    remote = "https://github.com/vraychev/glog.git",
    shallow_since = "1568637846 +0200",
)

http_archive(
    name = "com_google_absl",
    sha256 = "ff5ea6f91f9bcd0f368346ef707d0a80a372b71de5b6ae69ac11d0ca41688b8f",
    strip_prefix = "abseil-cpp-278e0a071885a22dcd2fd1b5576cc44757299343",
    urls = ["https://github.com/abseil/abseil-cpp/archive/278e0a071885a22dcd2fd1b5576cc44757299343.zip"],  # Abseil LTS 20210324, Patch 2
)

new_git_repository(
    name = "com_google_googletest",
    build_file = "@//deps:gtest.BUILD",
    commit = "2fe3bd994b3189899d93f1d5a881e725e046fdc2",
    remote = "https://github.com/google/googletest.git",
    shallow_since = "1535728917 -0400",
)

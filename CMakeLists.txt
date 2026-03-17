cmake_minimum_required(VERSION 3.18)

project(MiniKernelLibrary LANGUAGES CXX CUDA)

# ========================
# 基础配置
# ========================
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CUDA_STANDARD 17)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(FetchContent)

FetchContent_Declare(
    cutlass
    GIT_REPOSITORY https://github.com/NVIDIA/cutlass.git
    GIT_TAG main   # 或指定版本，比如 v3.5.0
)
#禁止更新
set(FETCHCONTENT_UPDATES_DISCONNECTED ON)
# 用FetchContent_MakeAvailable每次都会重新构建cutlass
# FetchContent_MakeAvailable(cutlass)
# 用FetchContent_Populate表示只用源码，不要构建
FetchContent_GetProperties(cutlass)
if(NOT cutlass_POPULATED)
    FetchContent_Populate(cutlass)
endif()
# 子模块（核心）

add_subdirectory(kernels)
add_subdirectory(src)
add_subdirectory(benchmark)
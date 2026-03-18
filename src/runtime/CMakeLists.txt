add_library(mk_runtime
    tensor.cpp
    context.cpp
)
set(RUNTIME_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
target_include_directories(mk_runtime
    PUBLIC
    ${RUNTIME_INCLUDE_DIR}
)
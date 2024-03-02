cmake_minimum_required(VERSION 3.11)

include(FetchContent)

FetchContent_Declare(MDC
    SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/MDC"
)

FetchContent_Declare(SGD2MAPI98
    SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/SGD2MAPI98"
)

FetchContent_MakeAvailable(MDC SGD2MAPI98)

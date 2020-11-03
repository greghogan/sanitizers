# ThreadSanitizer﻿ (TSan): https://clang.llvm.org/docs/ThreadSanitizer.html

string(APPEND CMAKE_CXX_FLAGS_DEBUG " -fsanitize=thread")

# https://cmake.org/cmake/help/latest/module/FindThreads.html
set(THREADS_PREFER_PTHREAD_FLAG TRUE)
find_package(Threads REQUIRED)

# it may be possible to replace 'pthreads' with platform-agnostic C++ thread
# and demonstrate the Thread Sanitizer without this specific dependency
if (CMAKE_USE_PTHREADS_INIT)
    add_executable(tsan tsan.cpp)
    target_link_libraries(tsan PRIVATE Threads::Threads)
endif ()

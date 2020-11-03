# UndefinedBehaviorSanitizer (UBSan): https://clang.llvm.org/docs/UndefinedBehaviorSanitizer.html

string(APPEND CMAKE_CXX_FLAGS_DEBUG " -fsanitize=undefined -fsanitize=integer -fsanitize=nullability")

add_executable(ubsan ubsan.cpp)

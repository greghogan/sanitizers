# MemorySanitizer (MSan): https://clang.llvm.org/docs/MemorySanitizer.html

string(APPEND CMAKE_CXX_FLAGS_DEBUG " -fsanitize=memory -fno-omit-frame-pointer")

add_executable(msan msan.cpp)

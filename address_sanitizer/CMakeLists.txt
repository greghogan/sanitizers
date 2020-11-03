# AddressSanitizer (ASan) and LeakSanitizer (LSan): https://clang.llvm.org/docs/AddressSanitizer.html
# ASAN_OPTIONS="detect_stack_use_after_return=true detect_leaks=true"

string(APPEND CMAKE_CXX_FLAGS_DEBUG " -fsanitize=address -fno-omit-frame-pointer")
string(APPEND CMAKE_LINKER_FLAGS_DEBUG " -fsanitize=address -fno-omit-frame-pointer")

add_executable(asan asan.cpp)
add_executable(lsan lsan.cpp)

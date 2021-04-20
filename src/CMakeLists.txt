add_executable(passgen main.cpp)

target_include_directories(passgen PUBLIC "../lib/")
target_link_libraries(passgen passgen_lib)
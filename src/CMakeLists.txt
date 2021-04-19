add_executable(passw_gen_cli main.cpp)

target_include_directories(passw_gen_cli PUBLIC "../lib/")
target_link_libraries(passw_gen_cli passw_gen_lib)
cmake_minimum_required(VERSION 3.19)
project(os_try C)

set(CMAKE_C_STANDARD 99)

add_executable(os_try main.c producer_cosumer.c soft_mutex_1.c soft_mutex_1_thread.c banker_alg/banker_algorithm.c banker_alg/banker_init.h)

add_executable(metex_1 soft_mutex_1.c)

add_executable(metex_1_thread soft_mutex_1_thread.c)

add_executable(banker_main banker_alg/banker_algorithm.c banker_alg/security_check.h)
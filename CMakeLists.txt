cmake_minimum_required(VERSION 3.25)
project(cpp_dsa_apnacollege)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ======== FUNCTION TO ADD ALL CPP FILES IN A DIRECTORY ========
function(add_all_cpp_in_dir DIR_PATH)
    file(GLOB CPP_FILES "${DIR_PATH}/*.cpp")
    foreach(file ${CPP_FILES})
        # Get filename without extension
        get_filename_component(EXE_NAME ${file} NAME_WE)
        add_executable(${EXE_NAME} ${file})
    endforeach()
endfunction()

# ======== AUTOMATICALLY ADD FILES FROM FOLDERS ========
add_all_cpp_in_dir(${CMAKE_SOURCE_DIR}/01_A_codewars)
add_all_cpp_in_dir(${CMAKE_SOURCE_DIR}/01_arrays_hashing)
add_all_cpp_in_dir(${CMAKE_SOURCE_DIR}/02_two_pointers)
add_all_cpp_in_dir(${CMAKE_SOURCE_DIR}/03_sliding_window)
add_all_cpp_in_dir(${CMAKE_SOURCE_DIR}/04_stack)
add_all_cpp_in_dir(${CMAKE_SOURCE_DIR}/05_binary_search)
add_all_cpp_in_dir(${CMAKE_SOURCE_DIR}/06_linked_list)
add_all_cpp_in_dir(${CMAKE_SOURCE_DIR}/07_trees)
add_all_cpp_in_dir(${CMAKE_SOURCE_DIR}/08_heap_priority_queue)
add_all_cpp_in_dir(${CMAKE_SOURCE_DIR}/09_backtracking)
add_all_cpp_in_dir(${CMAKE_SOURCE_DIR}/10_trie)
add_all_cpp_in_dir(${CMAKE_SOURCE_DIR}/11_graphs)
add_all_cpp_in_dir(${CMAKE_SOURCE_DIR}/12_advanced_graphs)
add_all_cpp_in_dir(${CMAKE_SOURCE_DIR}/13_1d_dp)
add_all_cpp_in_dir(${CMAKE_SOURCE_DIR}/14_2d_dp)
add_all_cpp_in_dir(${CMAKE_SOURCE_DIR}/15_greedy)
add_all_cpp_in_dir(${CMAKE_SOURCE_DIR}/16_intervals)
add_all_cpp_in_dir(${CMAKE_SOURCE_DIR}/17_math_geometry)
add_all_cpp_in_dir(${CMAKE_SOURCE_DIR}/18_bit_manipulation)



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
add_all_cpp_in_dir(${CMAKE_SOURCE_DIR}/01_arrays)
add_all_cpp_in_dir(${CMAKE_SOURCE_DIR}/02_strings)
add_all_cpp_in_dir(${CMAKE_SOURCE_DIR}/03_recursion & backtracking)
add_all_cpp_in_dir(${CMAKE_SOURCE_DIR}/04_sorting)
add_all_cpp_in_dir(${CMAKE_SOURCE_DIR}/05_searching)
add_all_cpp_in_dir(${CMAKE_SOURCE_DIR}/06_linked_lists)
add_all_cpp_in_dir(${CMAKE_SOURCE_DIR}/07_stacks & queues)
add_all_cpp_in_dir(${CMAKE_SOURCE_DIR}/08_trees)
add_all_cpp_in_dir(${CMAKE_SOURCE_DIR}/09_graphs)
add_all_cpp_in_dir(${CMAKE_SOURCE_DIR}/10_hashing)
add_all_cpp_in_dir(${CMAKE_SOURCE_DIR}/11_DP & greedy)
add_all_cpp_in_dir(${CMAKE_SOURCE_DIR}/12_tries & heaps)
add_all_cpp_in_dir(${CMAKE_SOURCE_DIR}/13_Heap & Priority Queues)
add_all_cpp_in_dir(${CMAKE_SOURCE_DIR}/14_Bit Manipulation)

add_executable(new_target 01_arrays/find_min_and_max.cpp)

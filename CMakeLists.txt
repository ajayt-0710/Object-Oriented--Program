
cmake_minimum_required(VERSION 3.20)

project(Object_Oriented_Program)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find every C++ file
file(GLOB CPP_FILES CONFIGURE_DEPENDS
        "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
)

# Create one executable per C++ file
foreach(FILE_PATH IN LISTS CPP_FILES)

    get_filename_component(FILE_NAME "${FILE_PATH}" NAME_WE)

    string(MAKE_C_IDENTIFIER "${FILE_NAME}" TARGET_NAME)

    add_executable("${TARGET_NAME}" "${FILE_PATH}")

endforeach()

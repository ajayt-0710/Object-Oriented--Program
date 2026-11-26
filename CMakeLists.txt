
cmake_minimum_required(VERSION 3.20)

project(Object_Oriented_Program)

set(CMAKE_CXX_STANDARD 17)

# Automatically find ALL .cpp files
file(GLOB CPP_FILES CONFIGURE_DEPENDS
        "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
)

# Create separate executable for each file
foreach(FILE_PATH ${CPP_FILES})

    get_filename_component(FILE_NAME ${FILE_PATH} NAME_WE)

    string(MAKE_C_IDENTIFIER "${FILE_NAME}" TARGET_NAME)

    add_executable(${TARGET_NAME} "${FILE_PATH}")

endforeach()

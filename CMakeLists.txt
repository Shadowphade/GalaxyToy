cmake_minimum_required(VERSION 3.24.3)

project(GalaxyToy)

add_executable(${PROJECT_NAME} main.cpp)
add_compile_options(-Wall -Werror -Wextra)
add_subdirectory(src)

target_include_directories(${PROJECT_NAME} PUBLIC include)

target_link_directories(${PROJECT_NAME} PRIVATE src)

target_link_libraries(${PROJECT_NAME} Velocity)
target_link_libraries(${PROJECT_NAME} Star)
target_link_libraries(${PROJECT_NAME} Window)
target_link_libraries(${PROJECT_NAME} Generate)
target_link_libraries(${PROJECT_NAME} UI)
target_link_libraries(${PROJECT_NAME} SDL2main SDL2 GL SDL2_ttf)

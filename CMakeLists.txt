cmake_minimum_required(VERSION 3.25)

set(PROJECT_NAME DarkEngine)

add_subdirectory(DarkEngineCore)
add_subdirectory(DarkEngineGame)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT DarkEngineGame)
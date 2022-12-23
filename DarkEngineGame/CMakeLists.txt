cmake_minimum_required(VERSION 3.25)

set(GAME_PROJECT_NAME DarkEngineGame)

add_executable(${GAME_PROJECT_NAME}
	src/main.cpp
)

target_link_libraries(${GAME_PROJECT_NAME} DarkEngineCore)
target_compile_features(${GAME_PROJECT_NAME} PUBLIC cxx_std_17)

set_target_properties(${GAME_PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/)
add_library(libreria Resolvente.cpp)
add_library(libreria Distancia.cpp)
target_include_directories(libreria PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

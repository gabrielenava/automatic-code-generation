
cmake_minimum_required(VERSION 2.8.11)
project(automatic-code-generation)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

set(matlab-WholeBodyControl_SHARE_DIR "${CMAKE_INSTALL_PREFIX}/share/automatic-code-generation")

install(CODE "MESSAGE(\"This repository simply acts as a container\")")

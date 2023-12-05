# avr-libcpp
#
# Copyright 2020-2023, Andrew Countryman <apcountryman@gmail.com> and the avr-libcpp
# contributors
#
# Licensed under the Apache License, Version 2.0 (the "License"); you may not use this
# file except in compliance with the License. You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software distributed under
# the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
# KIND, either express or implied. See the License for the specific language governing
# permissions and limitations under the License.

# File: CMakeLists.txt
# Description: avr-libcpp core CMake rules.

cmake_minimum_required( VERSION 3.12.4 )
project(
    avr-libcpp
    LANGUAGES CXX
)

# project configuration
option( AVRLIBCPP_SUPPRESS_SFR_MACROS "avr-libcpp: suppress SFR macros" OFF )

# load additional CMake modules
list(
    APPEND CMAKE_MODULE_PATH
    "${CMAKE_CURRENT_SOURCE_DIR}/cmake/modules/apcountryman-cmake-utilities"
)

# configure compilation and linking
if( "${PROJECT_SOURCE_DIR}" STREQUAL "${CMAKE_SOURCE_DIR}" )
    set( CMAKE_CXX_STANDARD 17 )
    set( AVRLIBCPP_MCU "" CACHE STRING "avr-libcpp: MCU type" )
    add_compile_options(
        -mmcu=${AVRLIBCPP_MCU}
        -Werror -Wall -Wextra
        -Wcast-align=strict
        -Wcast-qual
        -Wduplicated-cond
        -Wextra-semi
        -Wfloat-equal
        -Wimplicit-fallthrough=5
        -Wlogical-op
        -Wmissing-field-initializers
        -Wmissing-include-dirs
        -Wold-style-cast
        -Wplacement-new=2
        -Wpointer-arith
        -Wshadow
        -Wunsafe-loop-optimizations
    )
    add_compile_definitions(
        F_CPU=1000000
    )
endif( "${PROJECT_SOURCE_DIR}" STREQUAL "${CMAKE_SOURCE_DIR}" )

# capture project version information
include( git-utilities )
execute_git_command(
    AVRLIBCPP_VERSION
    COMMAND describe --match=none --always --dirty --broken
)

# build the library
add_subdirectory( source )

# avr-libcpp
#
# Copyright 2020 Andrew Countryman <apcountryman@gmail.com>
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
option( AVRLIBCPP_USE_PARENT_PROJECT_BUILD_FLAGS "avr-libcpp: use parent project's build flags" ON )

# load additional CMake modules
list(
    APPEND CMAKE_MODULE_PATH
    "${CMAKE_CURRENT_SOURCE_DIR}/cmake/modules/apcountryman-cmake-utilities"
)

# configure compilation and linking
if( NOT ${AVRLIBCPP_USE_PARENT_PROJECT_BUILD_FLAGS} )
    set( CMAKE_CXX_STANDARD 17 )
    set(
        CMAKE_CXX_FLAGS
        "${CMAKE_CXX_FLAGS} \
        -Werror -Wall -Wextra \
        -Wcast-qual \
        -Wextra-semi \
        -Wfloat-equal \
        -Wmissing-field-initializers \
        -Wmissing-include-dirs \
        -Wold-style-cast \
        -Wpointer-arith \
        -Wshadow \
        "
    )

    option( AVRLIBCPP_USE_STATIC_ANALYSIS_BUILD_FLAGS "avr-libcpp: use static analysis build flags" OFF )
    if( NOT ${AVRLIBCPP_USE_STATIC_ANALYSIS_BUILD_FLAGS} )
        set( AVRLIBCPP_MCU "" CACHE STRING "avr-libcpp: MCU type" )

        set(
            CMAKE_CXX_FLAGS
            "${CMAKE_CXX_FLAGS} \
            -mmcu=${AVRLIBCPP_MCU} \
            -DF_CPU=1000000 \
            -Wcast-align=strict \
            -Wduplicated-cond \
            -Wimplicit-fallthrough=5 \
            -Wlogical-op \
            -Wplacement-new=2 \
            -Wunsafe-loop-optimizations \
            "
        )
    endif( NOT ${AVRLIBCPP_USE_STATIC_ANALYSIS_BUILD_FLAGS} )
endif( NOT ${AVRLIBCPP_USE_PARENT_PROJECT_BUILD_FLAGS} )

# capture project version information
include( git-utilities )
execute_git_command(
    AVRLIBCPP_VERSION
    COMMAND describe --match=none --always --dirty --broken
)

# build the library
add_subdirectory( source )

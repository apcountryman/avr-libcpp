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
# Description: avr-libcpp CMake rules.

configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/avr-libcpp/version.cc.in"
    "${CMAKE_CURRENT_BINARY_DIR}/avr-libcpp/version.cc"
    @ONLY
)

add_library(
    avr-libcpp STATIC
    "${CMAKE_CURRENT_BINARY_DIR}/avr-libcpp/version.cc"
    "avr-libcpp.cc"
    "cstdint.cc"
    "std.cc"
    "std/cstdint.cc"
)
target_include_directories(
    avr-libcpp
    PUBLIC "${PROJECT_SOURCE_DIR}/include"
)
target_include_directories(
    avr-libcpp SYSTEM BEFORE
    PUBLIC "${PROJECT_SOURCE_DIR}/system"
)

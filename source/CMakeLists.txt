# avr-libcpp
#
# Copyright 2020-2021, Andrew Countryman <apcountryman@gmail.com> and the avr-libcpp
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
    "avr-libcpp/delay.cc"
    "climits.cc"
    "cmath.cc"
    "cstddef.cc"
    "cstdint.cc"
    "cstdlib.cc"
    "cstring.cc"
    "limits.cc"
    "memory.cc"
    "new.cc"
    "std.cc"
    "std/climits.cc"
    "std/cmath.cc"
    "std/cstddef.cc"
    "std/cstdint.cc"
    "std/cstdlib.cc"
    "std/cstring.cc"
    "std/limits.cc"
    "std/memory.cc"
    "std/new.cc"
    "std/type_traits.cc"
    "std/utility.cc"
    "type_traits.cc"
    "utility.cc"
)
target_include_directories(
    avr-libcpp
    PUBLIC "${PROJECT_SOURCE_DIR}/include"
    PUBLIC "${PROJECT_SOURCE_DIR}/system"
)

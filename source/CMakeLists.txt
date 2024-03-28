# avr-libcpp
#
# Copyright 2020-2024, Andrew Countryman <apcountryman@gmail.com> and the avr-libcpp
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

# Description: Libraries CMake rules.

configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/avr-libcpp/version.cc.in"
    "${CMAKE_CURRENT_BINARY_DIR}/avr-libcpp/version.cc"
    @ONLY
    )

add_library(
    avr-libcpp STATIC
    "avr-libcpp.cc"
    "avr-libcpp/delay.cc"
    "avr-libcpp/interrupt.cc"
    "avr-libcpp/pgmspace.cc"
    "avr-libcpp/suppress_sfr_macros.cc"
    "avr-libcpp/suppress_sfr_macros/atmega2560.cc"
    "avr-libcpp/suppress_sfr_macros/atmega328p.cc"
    "avr-libcpp/suppress_sfr_macros/megaavr_0_series.cc"
    "avr-libcpp/wdt.cc"
    "cctype.cc"
    "climits.cc"
    "cmath.cc"
    "cstddef.cc"
    "cstdint.cc"
    "cstdlib.cc"
    "cstring.cc"
    "functional.cc"
    "initializer_list.cc"
    "iterator.cc"
    "limits.cc"
    "memory.cc"
    "new.cc"
    "std.cc"
    "std/cctype.cc"
    "std/climits.cc"
    "std/cmath.cc"
    "std/cstddef.cc"
    "std/cstdint.cc"
    "std/cstdlib.cc"
    "std/cstring.cc"
    "std/functional.cc"
    "std/initializer_list.cc"
    "std/iterator.cc"
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

target_compile_definitions(
    avr-libcpp
    PUBLIC $<IF:$<BOOL:${AVRLIBCPP_SUPPRESS_SFR_MACROS}>,AVRLIBCPP_SUPPRESS_SFR_MACROS,>
    )

add_library(
    avr-libcpp-version STATIC
    "${CMAKE_CURRENT_BINARY_DIR}/avr-libcpp/version.cc"
    )

target_include_directories(
    avr-libcpp-version
    PUBLIC "${PROJECT_SOURCE_DIR}/include"
    )

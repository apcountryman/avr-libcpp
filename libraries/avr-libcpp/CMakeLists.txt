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

# Description: avr-libcpp static CMake rules.

add_library( avr-libcpp STATIC )

target_compile_definitions( avr-libcpp
    PUBLIC $<IF:$<BOOL:"${AVRLIBCPP_SUPPRESS_SFR_MACROS}">,AVRLIBCPP_SUPPRESS_SFR_MACROS,>
    )

target_include_directories( avr-libcpp
    PUBLIC include
    PUBLIC system
    )

target_sources( avr-libcpp
    PRIVATE source/avr-libcpp.cc
    PRIVATE source/avr-libcpp/delay.cc
    PRIVATE source/avr-libcpp/interrupt.cc
    PRIVATE source/avr-libcpp/pgmspace.cc
    PRIVATE source/avr-libcpp/suppress_sfr_macros.cc
    PRIVATE source/avr-libcpp/suppress_sfr_macros/atmega2560.cc
    PRIVATE source/avr-libcpp/suppress_sfr_macros/atmega328p.cc
    PRIVATE source/avr-libcpp/suppress_sfr_macros/megaavr_0_series.cc
    PRIVATE source/avr-libcpp/wdt.cc
    PRIVATE source/cctype.cc
    PRIVATE source/climits.cc
    PRIVATE source/cmath.cc
    PRIVATE source/cstddef.cc
    PRIVATE source/cstdint.cc
    PRIVATE source/cstdlib.cc
    PRIVATE source/cstring.cc
    PRIVATE source/functional.cc
    PRIVATE source/initializer_list.cc
    PRIVATE source/iterator.cc
    PRIVATE source/limits.cc
    PRIVATE source/memory.cc
    PRIVATE source/new.cc
    PRIVATE source/std.cc
    PRIVATE source/std/cctype.cc
    PRIVATE source/std/climits.cc
    PRIVATE source/std/cmath.cc
    PRIVATE source/std/cstddef.cc
    PRIVATE source/std/cstdint.cc
    PRIVATE source/std/cstdlib.cc
    PRIVATE source/std/cstring.cc
    PRIVATE source/std/functional.cc
    PRIVATE source/std/initializer_list.cc
    PRIVATE source/std/iterator.cc
    PRIVATE source/std/limits.cc
    PRIVATE source/std/memory.cc
    PRIVATE source/std/new.cc
    PRIVATE source/std/type_traits.cc
    PRIVATE source/std/utility.cc
    PRIVATE source/type_traits.cc
    PRIVATE source/utility.cc
    )

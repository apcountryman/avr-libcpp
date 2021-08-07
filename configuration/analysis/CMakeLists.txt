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

# File: configuration/analysis/CMakeLists.txt
# Description: avr-libcpp static analysis configuration.

# install prefix is not applicable
mark_as_advanced( CMAKE_INSTALL_PREFIX )

# build configuration
set( AVRLIBCPP_MCU                            "atmega2560" CACHE STRING "" FORCE )
set( AVRLIBCPP_USE_PARENT_PROJECT_BUILD_FLAGS OFF          CACHE BOOL   "" FORCE )
set( AVRLIBCPP_SUPPRESS_SFR_MACROS            OFF          CACHE BOOL   "" FORCE )
set( CMAKE_BUILD_TYPE                         "Release"    CACHE STRING "" FORCE )
set( CMAKE_EXPORT_COMPILE_COMMANDS            ON           CACHE BOOL   "" FORCE )
mark_as_advanced(
    AVRLIBCPP_MCU
    AVRLIBCPP_USE_PARENT_PROJECT_BUILD_FLAGS
    AVRLIBCPP_SUPPRESS_SFR_MACROS
    CMAKE_BUILD_TYPE
    CMAKE_EXPORT_COMPILE_COMMANDS
)

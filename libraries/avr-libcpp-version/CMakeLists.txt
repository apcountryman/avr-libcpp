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

# Description: avr-libcpp-version static CMake rules.

add_library( avr-libcpp-version STATIC )

target_include_directories( avr-libcpp-version
    PUBLIC include
    )

configure_file(
    source/avr-libcpp/version.cc.in
    source/avr-libcpp/version.cc
    @ONLY
    )

target_sources( avr-libcpp-version
    PRIVATE "${CMAKE_CURRENT_BINARY_DIR}/source/avr-libcpp/version.cc"
    )

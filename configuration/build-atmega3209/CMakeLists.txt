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

# Description: Build (ATmega3209) configuration.

set( CMAKE_BUILD_TYPE              "MinSizeRel" CACHE INTERNAL "" )
set( CMAKE_EXPORT_COMPILE_COMMANDS ON           CACHE INTERNAL "" )

set( AVRLIBCPP_MCU                 "atmega3209"           CACHE INTERNAL "" )
set( AVRLIBCPP_DFP                 "dfp-microchip-atmega" CACHE INTERNAL "" )
set( AVRLIBCPP_SUPPRESS_SFR_MACROS OFF                    CACHE INTERNAL "" )

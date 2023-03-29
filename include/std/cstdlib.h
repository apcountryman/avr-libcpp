/**
 * avr-libcpp
 *
 * Copyright 2020-2023, Andrew Countryman <apcountryman@gmail.com> and the avr-libcpp
 * contributors
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may not use this
 * file except in compliance with the License. You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software distributed under
 * the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

/**
 * \file
 * \brief cstdlib interface.
 */

#ifndef STD_CSTDLIB_H
#define STD_CSTDLIB_H

#include <stdlib.h>

namespace std {

[[noreturn]] inline void abort() noexcept
{
    ::abort();
}

[[noreturn]] inline void exit( int exit_code ) noexcept
{
    ::exit( exit_code );
}

using ::abs;

using ::labs;

inline auto llabs( long long n ) noexcept
{
    return n >= 0 ? n : -n;
}

inline auto abs( long n ) noexcept
{
    return labs( n );
}

inline auto abs( long long n ) noexcept
{
    return llabs( n );
}

} // namespace std

#endif // STD_CSTDLIB_H

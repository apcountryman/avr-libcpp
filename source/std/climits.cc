/**
 * avr-libcpp
 *
 * Copyright 2020-2022, Andrew Countryman <apcountryman@gmail.com> and the avr-libcpp
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
 * \brief climits implementation.
 */

#include "std/climits.h"

// characters

#ifndef CHAR_BIT
#error "CHAR_BIT not defined"
#endif // CHAR_BIT

#ifndef MB_LEN_MAX
#error "MB_LEN_MAX not defined"
#endif // MB_LEN_MAX

#ifndef CHAR_MIN
#error "CHAR_MIN not defined"
#endif // CHAR_MIN

#ifndef CHAR_MAX
#error "CHAR_MAX not defined"
#endif // CHAR_MAX

// signed minimum

#ifndef SCHAR_MIN
#error "SCHAR_MIN not defined"
#endif // SCHAR_MIN

#ifndef SHRT_MIN
#error "SHRT_MIN not defined"
#endif // SHRT_MIN

#ifndef INT_MIN
#error "INT_MIN not defined"
#endif // INT_MIN

#ifndef LONG_MIN
#error "LONG_MIN not defined"
#endif // LONG_MIN

#ifndef LLONG_MIN
#error "LLONG_MIN not defined"
#endif // LLONG_MIN

// signed maximum

#ifndef SCHAR_MAX
#error "SCHAR_MAX not defined"
#endif // SCHAR_MAX

#ifndef SHRT_MAX
#error "SHRT_MAX not defined"
#endif // SHRT_MAX

#ifndef INT_MAX
#error "INT_MAX not defined"
#endif // INT_MAX

#ifndef LONG_MAX
#error "LONG_MAX not defined"
#endif // LONG_MAX

#ifndef LLONG_MAX
#error "LLONG_MAX not defined"
#endif // LLONG_MAX

// unsigned maximum

#ifndef UCHAR_MAX
#error "UCHAR_MAX not defined"
#endif // UCHAR_MAX

#ifndef USHRT_MAX
#error "USHRT_MAX not defined"
#endif // USHRT_MAX

#ifndef UINT_MAX
#error "UINT_MAX not defined"
#endif // UINT_MAX

#ifndef ULONG_MAX
#error "ULONG_MAX not defined"
#endif // ULONG_MAX

#ifndef ULLONG_MAX
#error "ULLONG_MAX not defined"
#endif // ULLONG_MAX

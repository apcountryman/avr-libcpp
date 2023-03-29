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
 * \brief cstdint implementation.
 */

#include "std/cstdint.h"

// signed minimum

#ifndef INT8_MIN
#error "INT8_MIN not defined"
#endif // INT8_MIN

#ifndef INT16_MIN
#error "INT16_MIN not defined"
#endif // INT16_MIN

#ifndef INT32_MIN
#error "INT32_MIN not defined"
#endif // INT32_MIN

#ifndef INT64_MIN
#error "INT64_MIN not defined"
#endif // INT64_MIN

#ifndef INT_FAST8_MIN
#error "INT_FAST8_MIN not defined"
#endif // INT_FAST8_MIN

#ifndef INT_FAST16_MIN
#error "INT_FAST16_MIN not defined"
#endif // INT_FAST16_MIN

#ifndef INT_FAST32_MIN
#error "INT_FAST32_MIN not defined"
#endif // INT_FAST32_MIN

#ifndef INT_FAST64_MIN
#error "INT_FAST64_MIN not defined"
#endif // INT_FAST64_MIN

#ifndef INT_LEAST8_MIN
#error "INT_LEAST8_MIN not defined"
#endif // INT_LEAST8_MIN

#ifndef INT_LEAST16_MIN
#error "INT_LEAST16_MIN not defined"
#endif // INT_LEAST16_MIN

#ifndef INT_LEAST32_MIN
#error "INT_LEAST32_MIN not defined"
#endif // INT_LEAST32_MIN

#ifndef INT_LEAST64_MIN
#error "INT_LEAST64_MIN not defined"
#endif // INT_LEAST64_MIN

#ifndef INTPTR_MIN
#error "INTPTR_MIN not defined"
#endif // INTPTR_MIN

#ifndef INTMAX_MIN
#error "INTMAX_MIN not defined"
#endif // INTMAX_MIN

// signed maximum

#ifndef INT8_MAX
#error "INT8_MAX not defined"
#endif // INT8_MAX

#ifndef INT16_MAX
#error "INT16_MAX not defined"
#endif // INT16_MAX

#ifndef INT32_MAX
#error "INT32_MAX not defined"
#endif // INT32_MAX

#ifndef INT64_MAX
#error "INT64_MAX not defined"
#endif // INT64_MAX

#ifndef INT_FAST8_MAX
#error "INT_FAST8_MAX not defined"
#endif // INT_FAST8_MAX

#ifndef INT_FAST16_MAX
#error "INT_FAST16_MAX not defined"
#endif // INT_FAST16_MAX

#ifndef INT_FAST32_MAX
#error "INT_FAST32_MAX not defined"
#endif // INT_FAST32_MAX

#ifndef INT_FAST64_MAX
#error "INT_FAST64_MAX not defined"
#endif // INT_FAST64_MAX

#ifndef INT_LEAST8_MAX
#error "INT_LEAST8_MAX not defined"
#endif // INT_LEAST8_MAX

#ifndef INT_LEAST16_MAX
#error "INT_LEAST16_MAX not defined"
#endif // INT_LEAST16_MAX

#ifndef INT_LEAST32_MAX
#error "INT_LEAST32_MAX not defined"
#endif // INT_LEAST32_MAX

#ifndef INT_LEAST64_MAX
#error "INT_LEAST64_MAX not defined"
#endif // INT_LEAST64_MAX

#ifndef INTPTR_MAX
#error "INTPTR_MAX not defined"
#endif // INTPTR_MAX

#ifndef INTMAX_MAX
#error "INTMAX_MAX not defined"
#endif // INTMAX_MAX

// unsigned maximum

#ifndef UINT8_MAX
#error "UINT8_MAX not defined"
#endif // UINT8_MAX

#ifndef UINT16_MAX
#error "UINT16_MAX not defined"
#endif // UINT16_MAX

#ifndef UINT32_MAX
#error "UINT32_MAX not defined"
#endif // UINT32_MAX

#ifndef UINT64_MAX
#error "UINT64_MAX not defined"
#endif // UINT64_MAX

#ifndef UINT_FAST8_MAX
#error "UINT_FAST8_MAX not defined"
#endif // UINT_FAST8_MAX

#ifndef UINT_FAST16_MAX
#error "UINT_FAST16_MAX not defined"
#endif // UINT_FAST16_MAX

#ifndef UINT_FAST32_MAX
#error "UINT_FAST32_MAX not defined"
#endif // UINT_FAST32_MAX

#ifndef UINT_FAST64_MAX
#error "UINT_FAST64_MAX not defined"
#endif // UINT_FAST64_MAX

#ifndef UINT_LEAST8_MAX
#error "UINT_LEAST8_MAX not defined"
#endif // UINT_LEAST8_MAX

#ifndef UINT_LEAST16_MAX
#error "UINT_LEAST16_MAX not defined"
#endif // UINT_LEAST16_MAX

#ifndef UINT_LEAST32_MAX
#error "UINT_LEAST32_MAX not defined"
#endif // UINT_LEAST32_MAX

#ifndef UINT_LEAST64_MAX
#error "UINT_LEAST64_MAX not defined"
#endif // UINT_LEAST64_MAX

#ifndef UINTPTR_MAX
#error "UINTPTR_MAX not defined"
#endif // UINTPTR_MAX

#ifndef UINTMAX_MAX
#error "UINTMAX_MAX not defined"
#endif // UINTMAX_MAX

// other minimum/maximum

#ifndef PTRDIFF_MIN
#error "PTRDIFF_MIN not defined"
#endif // PTRDIFF_MIN

#ifndef PTRDIFF_MAX
#error "PTRDIFF_MAX not defined"
#endif // PTRDIFF_MAX

#ifndef SIZE_MAX
#error "SIZE_MAX not defined"
#endif // SIZE_MAX

#ifndef SIG_ATOMIC_MIN
#error "SIG_ATOMIC_MIN not defined"
#endif // SIG_ATOMIC_MIN

#ifndef SIG_ATOMIC_MAX
#error "SIG_ATOMIC_MAX not defined"
#endif // SIG_ATOMIC_MAX

#ifndef WCHAR_MIN
#error "WCHAR_MIN not defined"
#endif // WCHAR_MIN

#ifndef WCHAR_MAX
#error "WCHAR_MAX not defined"
#endif // WCHAR_MAX

#ifndef WINT_MIN
#error "WINT_MIN not defined"
#endif // WINT_MIN

#ifndef WINT_MAX
#error "WINT_MAX not defined"
#endif // WINT_MAX

// signed constants

#ifndef INT8_C
#error "INT8_C not defined"
#endif // INT8_C

#ifndef INT16_C
#error "INT16_C not defined"
#endif // INT16_C

#ifndef INT32_C
#error "INT32_C not defined"
#endif // INT32_C

#ifndef INT64_C
#error "INT64_C not defined"
#endif // INT64_C

#ifndef INTMAX_C
#error "INTMAX_C not defined"
#endif // INTMAX_C

// unsigned constants

#ifndef UINT8_C
#error "UINT8_C not defined"
#endif // UINT8_C

#ifndef UINT16_C
#error "UINT16_C not defined"
#endif // UINT16_C

#ifndef UINT32_C
#error "UINT32_C not defined"
#endif // UINT32_C

#ifndef UINT64_C
#error "UINT64_C not defined"
#endif // UINT64_C

#ifndef UINTMAX_C
#error "UINTMAX_C not defined"
#endif // UINTMAX_C

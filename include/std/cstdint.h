/**
 * avr-libcpp
 *
 * Copyright 2020-2021, Andrew Countryman <apcountryman@gmail.com> and the avr-libcpp
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
 * \brief cstdint interface.
 */

#ifndef STD_CSTDINT_H
#define STD_CSTDINT_H

#include <stdint.h>

namespace std {

using ::int16_t;
using ::int32_t;
using ::int64_t;
using ::int8_t;

using ::int_fast16_t;
using ::int_fast32_t;
using ::int_fast64_t;
using ::int_fast8_t;

using ::int_least16_t;
using ::int_least32_t;
using ::int_least64_t;
using ::int_least8_t;

using ::intmax_t;

using ::intptr_t;

using ::uint16_t;
using ::uint32_t;
using ::uint64_t;
using ::uint8_t;

using ::uint_fast16_t;
using ::uint_fast32_t;
using ::uint_fast64_t;
using ::uint_fast8_t;

using ::uint_least16_t;
using ::uint_least32_t;
using ::uint_least64_t;
using ::uint_least8_t;

using ::uintmax_t;

using ::uintptr_t;

} // namespace std

#endif // STD_CSTDINT_H

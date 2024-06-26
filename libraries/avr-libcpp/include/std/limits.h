/**
 * avr-libcpp
 *
 * Copyright 2020-2024, Andrew Countryman <apcountryman@gmail.com> and the avr-libcpp
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
 * \brief limits interface.
 */

#ifndef STD_LIMITS_H
#define STD_LIMITS_H

#include <climits>
#include <cmath>
#include <cstdint>
#include <type_traits>

namespace std {

enum float_round_style {
    round_indeterminate       = -1,
    round_toward_zero         = 0,
    round_to_nearest          = 1,
    round_toward_infinity     = 2,
    round_toward_neg_infinity = 3,
};

enum float_denorm_style {
    denorm_indeterminate = -1,
    denorm_absent        = 0,
    denorm_present       = 1,
};

template<typename T>
struct numeric_limits {
    static constexpr auto is_specialized = false;

    static constexpr auto is_signed = false;

    static constexpr auto is_integer = false;

    static constexpr auto is_exact = false;

    static constexpr auto has_infinity = false;

    static constexpr auto has_quiet_NaN = false;

    static constexpr auto has_signaling_NaN = false;

    static constexpr auto has_denorm = denorm_absent;

    static constexpr auto has_denorm_loss = false;

    static constexpr auto round_style = round_toward_zero;

    static constexpr auto is_iec559 = false;

    static constexpr auto is_bounded = false;

    static constexpr auto is_modulo = false;

    static constexpr auto digits = 0;

    static constexpr auto digits10 = 0;

    static constexpr auto max_digits10 = 0;

    static constexpr auto radix = 0;

    static constexpr auto min_exponent = 0;

    static constexpr auto min_exponent10 = 0;

    static constexpr auto max_exponent = 0;

    static constexpr auto max_exponent10 = 0;

    static constexpr auto traps = false;

    static constexpr auto tinyness_before = false;

    static constexpr auto min() noexcept
    {
        return T{};
    }

    static constexpr auto lowest() noexcept
    {
        return T{};
    }

    static constexpr auto max() noexcept
    {
        return T{};
    }

    static constexpr auto epsilon() noexcept
    {
        return T{};
    }

    static constexpr auto round_error() noexcept
    {
        return T{};
    }

    static constexpr auto infinity() noexcept
    {
        return T{};
    }

    static constexpr auto quiet_NaN() noexcept
    {
        return T{};
    }

    static constexpr auto signaling_NaN() noexcept
    {
        return T{};
    }

    static constexpr auto denorm_min() noexcept
    {
        return T{};
    }
};

template<typename T>
struct numeric_limits<T const> : numeric_limits<T> {
};

template<typename T>
struct numeric_limits<T volatile> : numeric_limits<T> {
};

template<typename T>
struct numeric_limits<T const volatile> : numeric_limits<T> {
};

template<>
struct numeric_limits<bool> {
    static constexpr auto is_specialized = true;

    static constexpr auto is_signed = false;

    static constexpr auto is_integer = true;

    static constexpr auto is_exact = true;

    static constexpr auto has_infinity = false;

    static constexpr auto has_quiet_NaN = false;

    static constexpr auto has_signaling_NaN = false;

    static constexpr auto has_denorm = denorm_absent;

    static constexpr auto has_denorm_loss = false;

    static constexpr auto round_style = round_toward_zero;

    static constexpr auto is_iec559 = false;

    static constexpr auto is_bounded = true;

    static constexpr auto is_modulo = false;

    static constexpr auto digits = 1;

    static constexpr auto digits10 = 0;

    static constexpr auto max_digits10 = 0;

    static constexpr auto radix = 2;

    static constexpr auto min_exponent = 0;

    static constexpr auto min_exponent10 = 0;

    static constexpr auto max_exponent = 0;

    static constexpr auto max_exponent10 = 0;

    static constexpr auto traps = false;

    static constexpr auto tinyness_before = false;

    static constexpr auto min() noexcept
    {
        return false;
    }

    static constexpr auto lowest() noexcept
    {
        return false;
    }

    static constexpr auto max() noexcept
    {
        return true;
    }

    static constexpr auto epsilon() noexcept
    {
        return false;
    }

    static constexpr auto round_error() noexcept
    {
        return false;
    }

    static constexpr auto infinity() noexcept
    {
        return false;
    }

    static constexpr auto quiet_NaN() noexcept
    {
        return false;
    }

    static constexpr auto signaling_NaN() noexcept
    {
        return false;
    }

    static constexpr auto denorm_min() noexcept
    {
        return false;
    }
};

template<>
struct numeric_limits<char> {
    static constexpr auto is_specialized = true;

    static constexpr auto is_signed = is_signed_v<char>;

    static constexpr auto is_integer = true;

    static constexpr auto is_exact = true;

    static constexpr auto has_infinity = false;

    static constexpr auto has_quiet_NaN = false;

    static constexpr auto has_signaling_NaN = false;

    static constexpr auto has_denorm = denorm_absent;

    static constexpr auto has_denorm_loss = false;

    static constexpr auto round_style = round_toward_zero;

    static constexpr auto is_iec559 = false;

    static constexpr auto is_bounded = true;

    static constexpr auto is_modulo = not is_signed;

    static constexpr auto digits = int{ CHAR_BIT - is_signed };

    static constexpr auto digits10 = static_cast<int>( digits * log10( 2 ) );

    static constexpr auto max_digits10 = 0;

    static constexpr auto radix = 2;

    static constexpr auto min_exponent = 0;

    static constexpr auto min_exponent10 = 0;

    static constexpr auto max_exponent = 0;

    static constexpr auto max_exponent10 = 0;

    static constexpr auto traps = false;

    static constexpr auto tinyness_before = false;

    static constexpr auto min() noexcept -> char
    {
        return CHAR_MIN;
    }

    static constexpr auto lowest() noexcept -> char
    {
        return CHAR_MIN;
    }

    static constexpr auto max() noexcept -> char
    {
        return CHAR_MAX;
    }

    static constexpr auto epsilon() noexcept -> char
    {
        return 0;
    }

    static constexpr auto round_error() noexcept -> char
    {
        return 0;
    }

    static constexpr auto infinity() noexcept -> char
    {
        return 0;
    }

    static constexpr auto quiet_NaN() noexcept -> char
    {
        return 0;
    }

    static constexpr auto signaling_NaN() noexcept -> char
    {
        return 0;
    }

    static constexpr auto denorm_min() noexcept -> char
    {
        return 0;
    }
};

template<>
struct numeric_limits<signed char> {
    static constexpr auto is_specialized = true;

    static constexpr auto is_signed = true;

    static constexpr auto is_integer = true;

    static constexpr auto is_exact = true;

    static constexpr auto has_infinity = false;

    static constexpr auto has_quiet_NaN = false;

    static constexpr auto has_signaling_NaN = false;

    static constexpr auto has_denorm = denorm_absent;

    static constexpr auto has_denorm_loss = false;

    static constexpr auto round_style = round_toward_zero;

    static constexpr auto is_iec559 = false;

    static constexpr auto is_bounded = true;

    static constexpr auto is_modulo = false;

    static constexpr auto digits = int{ CHAR_BIT - 1 };

    static constexpr auto digits10 = static_cast<int>( digits * log10( 2 ) );

    static constexpr auto max_digits10 = 0;

    static constexpr auto radix = 2;

    static constexpr auto min_exponent = 0;

    static constexpr auto min_exponent10 = 0;

    static constexpr auto max_exponent = 0;

    static constexpr auto max_exponent10 = 0;

    static constexpr auto traps = false;

    static constexpr auto tinyness_before = false;

    static constexpr auto min() noexcept -> signed char
    {
        return SCHAR_MIN;
    }

    static constexpr auto lowest() noexcept -> signed char
    {
        return SCHAR_MIN;
    }

    static constexpr auto max() noexcept -> signed char
    {
        return SCHAR_MAX;
    }

    static constexpr auto epsilon() noexcept -> signed char
    {
        return 0;
    }

    static constexpr auto round_error() noexcept -> signed char
    {
        return 0;
    }

    static constexpr auto infinity() noexcept -> signed char
    {
        return 0;
    }

    static constexpr auto quiet_NaN() noexcept -> signed char
    {
        return 0;
    }

    static constexpr auto signaling_NaN() noexcept -> signed char
    {
        return 0;
    }

    static constexpr auto denorm_min() noexcept -> signed char
    {
        return 0;
    }
};

template<>
struct numeric_limits<unsigned char> {
    static constexpr auto is_specialized = true;

    static constexpr auto is_signed = false;

    static constexpr auto is_integer = true;

    static constexpr auto is_exact = true;

    static constexpr auto has_infinity = false;

    static constexpr auto has_quiet_NaN = false;

    static constexpr auto has_signaling_NaN = false;

    static constexpr auto has_denorm = denorm_absent;

    static constexpr auto has_denorm_loss = false;

    static constexpr auto round_style = round_toward_zero;

    static constexpr auto is_iec559 = false;

    static constexpr auto is_bounded = true;

    static constexpr auto is_modulo = true;

    static constexpr auto digits = int{ CHAR_BIT };

    static constexpr auto digits10 = static_cast<int>( digits * log10( 2 ) );

    static constexpr auto max_digits10 = 0;

    static constexpr auto radix = 2;

    static constexpr auto min_exponent = 0;

    static constexpr auto min_exponent10 = 0;

    static constexpr auto max_exponent = 0;

    static constexpr auto max_exponent10 = 0;

    static constexpr auto traps = false;

    static constexpr auto tinyness_before = false;

    static constexpr auto min() noexcept -> unsigned char
    {
        return 0;
    }

    static constexpr auto lowest() noexcept -> unsigned char
    {
        return 0;
    }

    static constexpr auto max() noexcept -> unsigned char
    {
        return UCHAR_MAX;
    }

    static constexpr auto epsilon() noexcept -> unsigned char
    {
        return 0;
    }

    static constexpr auto round_error() noexcept -> unsigned char
    {
        return 0;
    }

    static constexpr auto infinity() noexcept -> unsigned char
    {
        return 0;
    }

    static constexpr auto quiet_NaN() noexcept -> unsigned char
    {
        return 0;
    }

    static constexpr auto signaling_NaN() noexcept -> unsigned char
    {
        return 0;
    }

    static constexpr auto denorm_min() noexcept -> unsigned char
    {
        return 0;
    }
};

template<>
struct numeric_limits<wchar_t> {
    static constexpr auto is_specialized = true;

    static constexpr auto is_signed = is_signed_v<wchar_t>;

    static constexpr auto is_integer = true;

    static constexpr auto is_exact = true;

    static constexpr auto has_infinity = false;

    static constexpr auto has_quiet_NaN = false;

    static constexpr auto has_signaling_NaN = false;

    static constexpr auto has_denorm = denorm_absent;

    static constexpr auto has_denorm_loss = false;

    static constexpr auto round_style = round_toward_zero;

    static constexpr auto is_iec559 = false;

    static constexpr auto is_bounded = true;

    static constexpr auto is_modulo = not is_signed;

    static constexpr auto digits = int{ CHAR_BIT * sizeof( wchar_t ) - is_signed };

    static constexpr auto digits10 = static_cast<int>( digits * log10( 2 ) );

    static constexpr auto max_digits10 = 0;

    static constexpr auto radix = 2;

    static constexpr auto min_exponent = 0;

    static constexpr auto min_exponent10 = 0;

    static constexpr auto max_exponent = 0;

    static constexpr auto max_exponent10 = 0;

    static constexpr auto traps = false;

    static constexpr auto tinyness_before = false;

    static constexpr auto min() noexcept -> wchar_t
    {
        return WCHAR_MIN;
    }

    static constexpr auto lowest() noexcept -> wchar_t
    {
        return WCHAR_MIN;
    }

    static constexpr auto max() noexcept -> wchar_t
    {
        return WCHAR_MAX;
    }

    static constexpr auto epsilon() noexcept -> wchar_t
    {
        return 0;
    }

    static constexpr auto round_error() noexcept -> wchar_t
    {
        return 0;
    }

    static constexpr auto infinity() noexcept -> wchar_t
    {
        return 0;
    }

    static constexpr auto quiet_NaN() noexcept -> wchar_t
    {
        return 0;
    }

    static constexpr auto signaling_NaN() noexcept -> wchar_t
    {
        return 0;
    }

    static constexpr auto denorm_min() noexcept -> wchar_t
    {
        return 0;
    }
};

template<>
struct numeric_limits<char16_t> {
    static constexpr auto is_specialized = true;

    static constexpr auto is_signed = false;

    static constexpr auto is_integer = true;

    static constexpr auto is_exact = true;

    static constexpr auto has_infinity = false;

    static constexpr auto has_quiet_NaN = false;

    static constexpr auto has_signaling_NaN = false;

    static constexpr auto has_denorm = denorm_absent;

    static constexpr auto has_denorm_loss = false;

    static constexpr auto round_style = round_toward_zero;

    static constexpr auto is_iec559 = false;

    static constexpr auto is_bounded = true;

    static constexpr auto is_modulo = true;

    static constexpr auto digits = int{ CHAR_BIT * sizeof( char16_t ) };

    static constexpr auto digits10 = static_cast<int>( digits * log10( 2 ) );

    static constexpr auto max_digits10 = 0;

    static constexpr auto radix = 2;

    static constexpr auto min_exponent = 0;

    static constexpr auto min_exponent10 = 0;

    static constexpr auto max_exponent = 0;

    static constexpr auto max_exponent10 = 0;

    static constexpr auto traps = false;

    static constexpr auto tinyness_before = false;

    static constexpr auto min() noexcept -> char16_t
    {
        return 0;
    }

    static constexpr auto lowest() noexcept -> char16_t
    {
        return 0;
    }

    static constexpr auto max() noexcept -> char16_t
    {
        return UINT_LEAST16_MAX;
    }

    static constexpr auto epsilon() noexcept -> char16_t
    {
        return 0;
    }

    static constexpr auto round_error() noexcept -> char16_t
    {
        return 0;
    }

    static constexpr auto infinity() noexcept -> char16_t
    {
        return 0;
    }

    static constexpr auto quiet_NaN() noexcept -> char16_t
    {
        return 0;
    }

    static constexpr auto signaling_NaN() noexcept -> char16_t
    {
        return 0;
    }

    static constexpr auto denorm_min() noexcept -> char16_t
    {
        return 0;
    }
};

template<>
struct numeric_limits<char32_t> {
    static constexpr auto is_specialized = true;

    static constexpr auto is_signed = false;

    static constexpr auto is_integer = true;

    static constexpr auto is_exact = true;

    static constexpr auto has_infinity = false;

    static constexpr auto has_quiet_NaN = false;

    static constexpr auto has_signaling_NaN = false;

    static constexpr auto has_denorm = denorm_absent;

    static constexpr auto has_denorm_loss = false;

    static constexpr auto round_style = round_toward_zero;

    static constexpr auto is_iec559 = false;

    static constexpr auto is_bounded = true;

    static constexpr auto is_modulo = true;

    static constexpr auto digits = int{ CHAR_BIT * sizeof( char32_t ) };

    static constexpr auto digits10 = static_cast<int>( digits * log10( 2 ) );

    static constexpr auto max_digits10 = 0;

    static constexpr auto radix = 2;

    static constexpr auto min_exponent = 0;

    static constexpr auto min_exponent10 = 0;

    static constexpr auto max_exponent = 0;

    static constexpr auto max_exponent10 = 0;

    static constexpr auto traps = false;

    static constexpr auto tinyness_before = false;

    static constexpr auto min() noexcept -> char32_t
    {
        return 0;
    }

    static constexpr auto lowest() noexcept -> char32_t
    {
        return 0;
    }

    static constexpr auto max() noexcept -> char32_t
    {
        return UINT_LEAST32_MAX;
    }

    static constexpr auto epsilon() noexcept -> char32_t
    {
        return 0;
    }

    static constexpr auto round_error() noexcept -> char32_t
    {
        return 0;
    }

    static constexpr auto infinity() noexcept -> char32_t
    {
        return 0;
    }

    static constexpr auto quiet_NaN() noexcept -> char32_t
    {
        return 0;
    }

    static constexpr auto signaling_NaN() noexcept -> char32_t
    {
        return 0;
    }

    static constexpr auto denorm_min() noexcept -> char32_t
    {
        return 0;
    }
};

template<>
struct numeric_limits<signed short> {
    static constexpr auto is_specialized = true;

    static constexpr auto is_signed = true;

    static constexpr auto is_integer = true;

    static constexpr auto is_exact = true;

    static constexpr auto has_infinity = false;

    static constexpr auto has_quiet_NaN = false;

    static constexpr auto has_signaling_NaN = false;

    static constexpr auto has_denorm = denorm_absent;

    static constexpr auto has_denorm_loss = false;

    static constexpr auto round_style = round_toward_zero;

    static constexpr auto is_iec559 = false;

    static constexpr auto is_bounded = true;

    static constexpr auto is_modulo = false;

    static constexpr auto digits = int{ CHAR_BIT * sizeof( signed short ) - 1 };

    static constexpr auto digits10 = static_cast<int>( digits * log10( 2 ) );

    static constexpr auto max_digits10 = 0;

    static constexpr auto radix = 2;

    static constexpr auto min_exponent = 0;

    static constexpr auto min_exponent10 = 0;

    static constexpr auto max_exponent = 0;

    static constexpr auto max_exponent10 = 0;

    static constexpr auto traps = false;

    static constexpr auto tinyness_before = false;

    static constexpr auto min() noexcept -> signed short
    {
        return SHRT_MIN;
    }

    static constexpr auto lowest() noexcept -> signed short
    {
        return SHRT_MIN;
    }

    static constexpr auto max() noexcept -> signed short
    {
        return SHRT_MAX;
    }

    static constexpr auto epsilon() noexcept -> signed short
    {
        return 0;
    }

    static constexpr auto round_error() noexcept -> signed short
    {
        return 0;
    }

    static constexpr auto infinity() noexcept -> signed short
    {
        return 0;
    }

    static constexpr auto quiet_NaN() noexcept -> signed short
    {
        return 0;
    }

    static constexpr auto signaling_NaN() noexcept -> signed short
    {
        return 0;
    }

    static constexpr auto denorm_min() noexcept -> signed short
    {
        return 0;
    }
};

template<>
struct numeric_limits<unsigned short> {
    static constexpr auto is_specialized = true;

    static constexpr auto is_signed = false;

    static constexpr auto is_integer = true;

    static constexpr auto is_exact = true;

    static constexpr auto has_infinity = false;

    static constexpr auto has_quiet_NaN = false;

    static constexpr auto has_signaling_NaN = false;

    static constexpr auto has_denorm = denorm_absent;

    static constexpr auto has_denorm_loss = false;

    static constexpr auto round_style = round_toward_zero;

    static constexpr auto is_iec559 = false;

    static constexpr auto is_bounded = true;

    static constexpr auto is_modulo = true;

    static constexpr auto digits = int{ CHAR_BIT * sizeof( unsigned short ) };

    static constexpr auto digits10 = static_cast<int>( digits * log10( 2 ) );

    static constexpr auto max_digits10 = 0;

    static constexpr auto radix = 2;

    static constexpr auto min_exponent = 0;

    static constexpr auto min_exponent10 = 0;

    static constexpr auto max_exponent = 0;

    static constexpr auto max_exponent10 = 0;

    static constexpr auto traps = false;

    static constexpr auto tinyness_before = false;

    static constexpr auto min() noexcept -> unsigned short
    {
        return 0;
    }

    static constexpr auto lowest() noexcept -> unsigned short
    {
        return 0;
    }

    static constexpr auto max() noexcept -> unsigned short
    {
        return USHRT_MAX;
    }

    static constexpr auto epsilon() noexcept -> unsigned short
    {
        return 0;
    }

    static constexpr auto round_error() noexcept -> unsigned short
    {
        return 0;
    }

    static constexpr auto infinity() noexcept -> unsigned short
    {
        return 0;
    }

    static constexpr auto quiet_NaN() noexcept -> unsigned short
    {
        return 0;
    }

    static constexpr auto signaling_NaN() noexcept -> unsigned short
    {
        return 0;
    }

    static constexpr auto denorm_min() noexcept -> unsigned short
    {
        return 0;
    }
};

template<>
struct numeric_limits<signed int> {
    static constexpr auto is_specialized = true;

    static constexpr auto is_signed = true;

    static constexpr auto is_integer = true;

    static constexpr auto is_exact = true;

    static constexpr auto has_infinity = false;

    static constexpr auto has_quiet_NaN = false;

    static constexpr auto has_signaling_NaN = false;

    static constexpr auto has_denorm = denorm_absent;

    static constexpr auto has_denorm_loss = false;

    static constexpr auto round_style = round_toward_zero;

    static constexpr auto is_iec559 = false;

    static constexpr auto is_bounded = true;

    static constexpr auto is_modulo = false;

    static constexpr auto digits = int{ CHAR_BIT * sizeof( signed int ) - 1 };

    static constexpr auto digits10 = static_cast<int>( digits * log10( 2 ) );

    static constexpr auto max_digits10 = 0;

    static constexpr auto radix = 2;

    static constexpr auto min_exponent = 0;

    static constexpr auto min_exponent10 = 0;

    static constexpr auto max_exponent = 0;

    static constexpr auto max_exponent10 = 0;

    static constexpr auto traps = false;

    static constexpr auto tinyness_before = false;

    static constexpr auto min() noexcept -> signed int
    {
        return INT_MIN;
    }

    static constexpr auto lowest() noexcept -> signed int
    {
        return INT_MIN;
    }

    static constexpr auto max() noexcept -> signed int
    {
        return INT_MAX;
    }

    static constexpr auto epsilon() noexcept -> signed int
    {
        return 0;
    }

    static constexpr auto round_error() noexcept -> signed int
    {
        return 0;
    }

    static constexpr auto infinity() noexcept -> signed int
    {
        return 0;
    }

    static constexpr auto quiet_NaN() noexcept -> signed int
    {
        return 0;
    }

    static constexpr auto signaling_NaN() noexcept -> signed int
    {
        return 0;
    }

    static constexpr auto denorm_min() noexcept -> signed int
    {
        return 0;
    }
};

template<>
struct numeric_limits<unsigned int> {
    static constexpr auto is_specialized = true;

    static constexpr auto is_signed = false;

    static constexpr auto is_integer = true;

    static constexpr auto is_exact = true;

    static constexpr auto has_infinity = false;

    static constexpr auto has_quiet_NaN = false;

    static constexpr auto has_signaling_NaN = false;

    static constexpr auto has_denorm = denorm_absent;

    static constexpr auto has_denorm_loss = false;

    static constexpr auto round_style = round_toward_zero;

    static constexpr auto is_iec559 = false;

    static constexpr auto is_bounded = true;

    static constexpr auto is_modulo = true;

    static constexpr auto digits = int{ CHAR_BIT * sizeof( unsigned int ) };

    static constexpr auto digits10 = static_cast<int>( digits * log10( 2 ) );

    static constexpr auto max_digits10 = 0;

    static constexpr auto radix = 2;

    static constexpr auto min_exponent = 0;

    static constexpr auto min_exponent10 = 0;

    static constexpr auto max_exponent = 0;

    static constexpr auto max_exponent10 = 0;

    static constexpr auto traps = false;

    static constexpr auto tinyness_before = false;

    static constexpr auto min() noexcept -> unsigned int
    {
        return 0;
    }

    static constexpr auto lowest() noexcept -> unsigned int
    {
        return 0;
    }

    static constexpr auto max() noexcept -> unsigned int
    {
        return UINT_MAX;
    }

    static constexpr auto epsilon() noexcept -> unsigned int
    {
        return 0;
    }

    static constexpr auto round_error() noexcept -> unsigned int
    {
        return 0;
    }

    static constexpr auto infinity() noexcept -> unsigned int
    {
        return 0;
    }

    static constexpr auto quiet_NaN() noexcept -> unsigned int
    {
        return 0;
    }

    static constexpr auto signaling_NaN() noexcept -> unsigned int
    {
        return 0;
    }

    static constexpr auto denorm_min() noexcept -> unsigned int
    {
        return 0;
    }
};

template<>
struct numeric_limits<signed long> {
    static constexpr auto is_specialized = true;

    static constexpr auto is_signed = true;

    static constexpr auto is_integer = true;

    static constexpr auto is_exact = true;

    static constexpr auto has_infinity = false;

    static constexpr auto has_quiet_NaN = false;

    static constexpr auto has_signaling_NaN = false;

    static constexpr auto has_denorm = denorm_absent;

    static constexpr auto has_denorm_loss = false;

    static constexpr auto round_style = round_toward_zero;

    static constexpr auto is_iec559 = false;

    static constexpr auto is_bounded = true;

    static constexpr auto is_modulo = false;

    static constexpr auto digits = int{ CHAR_BIT * sizeof( signed long ) - 1 };

    static constexpr auto digits10 = static_cast<int>( digits * log10( 2 ) );

    static constexpr auto max_digits10 = 0;

    static constexpr auto radix = 2;

    static constexpr auto min_exponent = 0;

    static constexpr auto min_exponent10 = 0;

    static constexpr auto max_exponent = 0;

    static constexpr auto max_exponent10 = 0;

    static constexpr auto traps = false;

    static constexpr auto tinyness_before = false;

    static constexpr auto min() noexcept -> signed long
    {
        return LONG_MIN;
    }

    static constexpr auto lowest() noexcept -> signed long
    {
        return LONG_MIN;
    }

    static constexpr auto max() noexcept -> signed long
    {
        return LONG_MAX;
    }

    static constexpr auto epsilon() noexcept -> signed long
    {
        return 0;
    }

    static constexpr auto round_error() noexcept -> signed long
    {
        return 0;
    }

    static constexpr auto infinity() noexcept -> signed long
    {
        return 0;
    }

    static constexpr auto quiet_NaN() noexcept -> signed long
    {
        return 0;
    }

    static constexpr auto signaling_NaN() noexcept -> signed long
    {
        return 0;
    }

    static constexpr auto denorm_min() noexcept -> signed long
    {
        return 0;
    }
};

template<>
struct numeric_limits<unsigned long> {
    static constexpr auto is_specialized = true;

    static constexpr auto is_signed = false;

    static constexpr auto is_integer = true;

    static constexpr auto is_exact = true;

    static constexpr auto has_infinity = false;

    static constexpr auto has_quiet_NaN = false;

    static constexpr auto has_signaling_NaN = false;

    static constexpr auto has_denorm = denorm_absent;

    static constexpr auto has_denorm_loss = false;

    static constexpr auto round_style = round_toward_zero;

    static constexpr auto is_iec559 = false;

    static constexpr auto is_bounded = true;

    static constexpr auto is_modulo = true;

    static constexpr auto digits = int{ CHAR_BIT * sizeof( unsigned long ) };

    static constexpr auto digits10 = static_cast<int>( digits * log10( 2 ) );

    static constexpr auto max_digits10 = 0;

    static constexpr auto radix = 2;

    static constexpr auto min_exponent = 0;

    static constexpr auto min_exponent10 = 0;

    static constexpr auto max_exponent = 0;

    static constexpr auto max_exponent10 = 0;

    static constexpr auto traps = false;

    static constexpr auto tinyness_before = false;

    static constexpr auto min() noexcept -> unsigned long
    {
        return 0;
    }

    static constexpr auto lowest() noexcept -> unsigned long
    {
        return 0;
    }

    static constexpr auto max() noexcept -> unsigned long
    {
        return ULONG_MAX;
    }

    static constexpr auto epsilon() noexcept -> unsigned long
    {
        return 0;
    }

    static constexpr auto round_error() noexcept -> unsigned long
    {
        return 0;
    }

    static constexpr auto infinity() noexcept -> unsigned long
    {
        return 0;
    }

    static constexpr auto quiet_NaN() noexcept -> unsigned long
    {
        return 0;
    }

    static constexpr auto signaling_NaN() noexcept -> unsigned long
    {
        return 0;
    }

    static constexpr auto denorm_min() noexcept -> unsigned long
    {
        return 0;
    }
};

template<>
struct numeric_limits<signed long long> {
    static constexpr auto is_specialized = true;

    static constexpr auto is_signed = true;

    static constexpr auto is_integer = true;

    static constexpr auto is_exact = true;

    static constexpr auto has_infinity = false;

    static constexpr auto has_quiet_NaN = false;

    static constexpr auto has_signaling_NaN = false;

    static constexpr auto has_denorm = denorm_absent;

    static constexpr auto has_denorm_loss = false;

    static constexpr auto round_style = round_toward_zero;

    static constexpr auto is_iec559 = false;

    static constexpr auto is_bounded = true;

    static constexpr auto is_modulo = false;

    static constexpr auto digits = int{ CHAR_BIT * sizeof( signed long long ) - 1 };

    static constexpr auto digits10 = static_cast<int>( digits * log10( 2 ) );

    static constexpr auto max_digits10 = 0;

    static constexpr auto radix = 2;

    static constexpr auto min_exponent = 0;

    static constexpr auto min_exponent10 = 0;

    static constexpr auto max_exponent = 0;

    static constexpr auto max_exponent10 = 0;

    static constexpr auto traps = false;

    static constexpr auto tinyness_before = false;

    static constexpr auto min() noexcept -> signed long long
    {
        return LLONG_MIN;
    }

    static constexpr auto lowest() noexcept -> signed long long
    {
        return LLONG_MIN;
    }

    static constexpr auto max() noexcept -> signed long long
    {
        return LLONG_MAX;
    }

    static constexpr auto epsilon() noexcept -> signed long long
    {
        return 0;
    }

    static constexpr auto round_error() noexcept -> signed long long
    {
        return 0;
    }

    static constexpr auto infinity() noexcept -> signed long long
    {
        return 0;
    }

    static constexpr auto quiet_NaN() noexcept -> signed long long
    {
        return 0;
    }

    static constexpr auto signaling_NaN() noexcept -> signed long long
    {
        return 0;
    }

    static constexpr auto denorm_min() noexcept -> signed long long
    {
        return 0;
    }
};

template<>
struct numeric_limits<unsigned long long> {
    static constexpr auto is_specialized = true;

    static constexpr auto is_signed = false;

    static constexpr auto is_integer = true;

    static constexpr auto is_exact = true;

    static constexpr auto has_infinity = false;

    static constexpr auto has_quiet_NaN = false;

    static constexpr auto has_signaling_NaN = false;

    static constexpr auto has_denorm = denorm_absent;

    static constexpr auto has_denorm_loss = false;

    static constexpr auto round_style = round_toward_zero;

    static constexpr auto is_iec559 = false;

    static constexpr auto is_bounded = true;

    static constexpr auto is_modulo = true;

    static constexpr auto digits = int{ CHAR_BIT * sizeof( unsigned long long ) };

    static constexpr auto digits10 = static_cast<int>( digits * log10( 2 ) );

    static constexpr auto max_digits10 = 0;

    static constexpr auto radix = 2;

    static constexpr auto min_exponent = 0;

    static constexpr auto min_exponent10 = 0;

    static constexpr auto max_exponent = 0;

    static constexpr auto max_exponent10 = 0;

    static constexpr auto traps = false;

    static constexpr auto tinyness_before = false;

    static constexpr auto min() noexcept -> unsigned long long
    {
        return 0;
    }

    static constexpr auto lowest() noexcept -> unsigned long long
    {
        return 0;
    }

    static constexpr auto max() noexcept -> unsigned long long
    {
        return ULLONG_MAX;
    }

    static constexpr auto epsilon() noexcept -> unsigned long long
    {
        return 0;
    }

    static constexpr auto round_error() noexcept -> unsigned long long
    {
        return 0;
    }

    static constexpr auto infinity() noexcept -> unsigned long long
    {
        return 0;
    }

    static constexpr auto quiet_NaN() noexcept -> unsigned long long
    {
        return 0;
    }

    static constexpr auto signaling_NaN() noexcept -> unsigned long long
    {
        return 0;
    }

    static constexpr auto denorm_min() noexcept -> unsigned long long
    {
        return 0;
    }
};

template<>
struct numeric_limits<__int24> {
    static constexpr auto is_specialized = true;

    static constexpr auto is_signed = true;

    static constexpr auto is_integer = true;

    static constexpr auto is_exact = true;

    static constexpr auto has_infinity = false;

    static constexpr auto has_quiet_NaN = false;

    static constexpr auto has_signaling_NaN = false;

    static constexpr auto has_denorm = denorm_absent;

    static constexpr auto has_denorm_loss = false;

    static constexpr auto round_style = round_toward_zero;

    static constexpr auto is_iec559 = false;

    static constexpr auto is_bounded = true;

    static constexpr auto is_modulo = false;

    static constexpr auto digits = int{ CHAR_BIT * sizeof( __int24 ) - 1 };

    static constexpr auto digits10 = static_cast<int>( digits * log10( 2 ) );

    static constexpr auto max_digits10 = 0;

    static constexpr auto radix = 2;

    static constexpr auto min_exponent = 0;

    static constexpr auto min_exponent10 = 0;

    static constexpr auto max_exponent = 0;

    static constexpr auto max_exponent10 = 0;

    static constexpr auto traps = false;

    static constexpr auto tinyness_before = false;

    static constexpr auto min() noexcept -> __int24
    {
        return __INT24_MIN__;
    }

    static constexpr auto lowest() noexcept -> __int24
    {
        return __INT24_MIN__;
    }

    static constexpr auto max() noexcept -> __int24
    {
        return __INT24_MAX__;
    }

    static constexpr auto epsilon() noexcept -> __int24
    {
        return 0;
    }

    static constexpr auto round_error() noexcept -> __int24
    {
        return 0;
    }

    static constexpr auto infinity() noexcept -> __int24
    {
        return 0;
    }

    static constexpr auto quiet_NaN() noexcept -> __int24
    {
        return 0;
    }

    static constexpr auto signaling_NaN() noexcept -> __int24
    {
        return 0;
    }

    static constexpr auto denorm_min() noexcept -> __int24
    {
        return 0;
    }
};

template<>
struct numeric_limits<__uint24> {
    static constexpr auto is_specialized = true;

    static constexpr auto is_signed = false;

    static constexpr auto is_integer = true;

    static constexpr auto is_exact = true;

    static constexpr auto has_infinity = false;

    static constexpr auto has_quiet_NaN = false;

    static constexpr auto has_signaling_NaN = false;

    static constexpr auto has_denorm = denorm_absent;

    static constexpr auto has_denorm_loss = false;

    static constexpr auto round_style = round_toward_zero;

    static constexpr auto is_iec559 = false;

    static constexpr auto is_bounded = true;

    static constexpr auto is_modulo = true;

    static constexpr auto digits = int{ CHAR_BIT * sizeof( __uint24 ) };

    static constexpr auto digits10 = static_cast<int>( digits * log10( 2 ) );

    static constexpr auto max_digits10 = 0;

    static constexpr auto radix = 2;

    static constexpr auto min_exponent = 0;

    static constexpr auto min_exponent10 = 0;

    static constexpr auto max_exponent = 0;

    static constexpr auto max_exponent10 = 0;

    static constexpr auto traps = false;

    static constexpr auto tinyness_before = false;

    static constexpr auto min() noexcept -> __uint24
    {
        return 0;
    }

    static constexpr auto lowest() noexcept -> __uint24
    {
        return 0;
    }

    static constexpr auto max() noexcept -> __uint24
    {
        return __UINT24_MAX__;
    }

    static constexpr auto epsilon() noexcept -> __uint24
    {
        return 0;
    }

    static constexpr auto round_error() noexcept -> __uint24
    {
        return 0;
    }

    static constexpr auto infinity() noexcept -> __uint24
    {
        return 0;
    }

    static constexpr auto quiet_NaN() noexcept -> __uint24
    {
        return 0;
    }

    static constexpr auto signaling_NaN() noexcept -> __uint24
    {
        return 0;
    }

    static constexpr auto denorm_min() noexcept -> __uint24
    {
        return 0;
    }
};

} // namespace std

#endif // STD_LIMITS_H

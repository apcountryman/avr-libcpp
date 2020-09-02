/**
 * avr-libcpp
 *
 * Copyright 2020 Andrew Countryman <apcountryman@gmail.com>
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

} // namespace std

#endif // STD_LIMITS_H

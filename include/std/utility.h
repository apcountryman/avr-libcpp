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
 * \brief utility interface.
 */

#ifndef STD_UTILITY_H
#define STD_UTILITY_H

#include <type_traits>

namespace std {

template<typename T>
constexpr auto forward( std::remove_reference_t<T> && t ) noexcept
{
    return static_cast<T &&>( t );
}

template<typename T>
constexpr auto forward( std::remove_reference_t<T> & t ) noexcept
{
    return static_cast<T &&>( t );
}

template<typename T>
constexpr auto move( T && t ) noexcept
{
    return static_cast<std::remove_reference_t<T> &&>( t );
}

template<typename T>
auto declval() noexcept -> add_rvalue_reference_t<T>;

} // namespace std

#endif // STD_UTILITY_H

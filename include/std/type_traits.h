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
 * \brief type_traits interface.
 */

#ifndef STD_TYPE_TRAITS_H
#define STD_TYPE_TRAITS_H

#include <cstddef>

namespace std {

//---------- declarations ----------//

inline namespace Type_Traits_Helper_Constants {
template<typename T, T v>
struct integral_constant;

template<bool b>
using bool_constant = integral_constant<bool, b>;

using true_type = bool_constant<true>;

using false_type = bool_constant<false>;

} // namespace Type_Traits_Helper_Constants

inline namespace Type_Traits_Primary_Type_Categories {
template<typename T>
struct is_array;

template<typename T>
constexpr auto is_array_v = is_array<T>::value;

} // namespace Type_Traits_Primary_Type_Categories

inline namespace Type_Traits_Composite_Type_Categories {
template<typename T>
struct is_reference;

template<typename T>
constexpr auto is_reference_v = is_reference<T>::value;

} // namespace Type_Traits_Composite_Type_Categories

inline namespace Type_Traits_Type_Properties {
template<typename T>
struct is_const;

template<typename T>
constexpr auto is_const_v = is_const<T>::value;

} // namespace Type_Traits_Type_Properties

inline namespace Type_Traits_Type_Relationships {
template<typename T, typename U>
struct is_same;

template<typename T, typename U>
constexpr auto is_same_v = is_same<T, U>::value;

} // namespace Type_Traits_Type_Relationships

inline namespace Type_Traits_Const_Volatility_Specifiers {
template<typename T>
struct remove_const;

} // namespace Type_Traits_Const_Volatility_Specifiers

inline namespace Miscellaneous_Transformations {
template<bool b, typename T = void>
struct enable_if;

template<bool b, typename T = void>
using enable_if_t = typename enable_if<b, T>::type;

template<typename T>
struct underlying_type;

template<typename T>
using underlying_type_t = typename underlying_type<T>::type;

} // namespace Miscellaneous_Transformations

//---------- definitions ----------//

inline namespace Type_Traits_Helper_Constants {
template<typename T, T v>
struct integral_constant {
    using value_type = T;

    using type = integral_constant;

    static constexpr auto value = value_type{ v };

    constexpr operator value_type() const noexcept
    {
        return value;
    }

    constexpr auto operator()() const noexcept
    {
        return value;
    }
};

} // namespace Type_Traits_Helper_Constants

inline namespace Type_Traits_Primary_Type_Categories {
template<typename T>
struct is_array : false_type {
};

template<typename T>
struct is_array<T[]> : true_type {
};

template<typename T, size_t N>
struct is_array<T[ N ]> : true_type {
};

} // namespace Type_Traits_Primary_Type_Categories

inline namespace Type_Traits_Composite_Type_Categories {
template<typename T>
struct is_reference : false_type {
};

template<typename T>
struct is_reference<T &> : true_type {
};

template<typename T>
struct is_reference<T &&> : true_type {
};

} // namespace Type_Traits_Composite_Type_Categories

inline namespace Type_Traits_Type_Properties {
template<typename T>
struct is_const : false_type {
};

template<typename T>
struct is_const<T const> : true_type {
};

} // namespace Type_Traits_Type_Properties

inline namespace Type_Traits_Type_Relationships {
template<typename T, typename U>
struct is_same : false_type {
};

template<typename T>
struct is_same<T, T> : true_type {
};

} // namespace Type_Traits_Type_Relationships

inline namespace Type_Traits_Const_Volatility_Specifiers {
template<typename T>
struct remove_const {
    using type = T;
};

template<typename T>
struct remove_const<T const> {
    using type = T;
};

} // namespace Type_Traits_Const_Volatility_Specifiers

inline namespace Miscellaneous_Transformations {
template<bool b, typename T>
struct enable_if {
};

template<typename T>
struct enable_if<true, T> {
    using type = T;
};

template<typename T>
struct underlying_type {
    using type = __underlying_type( T );
};

} // namespace Miscellaneous_Transformations

} // namespace std

#endif // STD_TYPE_TRAITS_H

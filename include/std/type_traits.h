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

inline namespace Type_Traits_Helper_Classes {
// C++20
template<typename T>
struct type_identity;

// C++20
template<typename T>
using type_identity_t = typename type_identity<T>::type;

template<typename T, T V>
struct integral_constant;

template<bool B>
using bool_constant = integral_constant<bool, B>;

using true_type = bool_constant<true>;

using false_type = bool_constant<false>;

} // namespace Type_Traits_Helper_Classes

inline namespace Type_Traits_Primary_Type_Categories {
template<typename T>
struct is_void;

template<typename T>
constexpr auto is_void_v = is_void<T>::value;

template<typename T>
struct is_null_pointer;

template<typename T>
constexpr auto is_null_pointer_v = is_null_pointer<T>::value;

template<typename T>
struct is_integral;

template<typename T>
constexpr auto is_integral_v = is_integral<T>::value;

template<typename T>
struct is_floating_point;

template<typename T>
constexpr auto is_floating_point_v = is_floating_point<T>::value;

template<typename T>
struct is_array;

template<typename T>
constexpr auto is_array_v = is_array<T>::value;

template<typename T>
struct is_enum;

template<typename T>
constexpr auto is_enum_v = is_enum<T>::value;

template<typename T>
struct is_union;

template<typename T>
constexpr auto is_union_v = is_union<T>::value;

template<typename T>
struct is_class;

template<typename T>
constexpr auto is_class_v = is_class<T>::value;

template<typename T>
struct is_function;

template<typename T>
constexpr auto is_function_v = is_function<T>::value;

template<typename T>
struct is_pointer;

template<typename T>
constexpr auto is_pointer_v = is_pointer<T>::value;

} // namespace Type_Traits_Primary_Type_Categories

inline namespace Type_Traits_Composite_Type_Categories {
template<typename T>
struct is_arithmetic;

template<typename T>
constexpr auto is_arithmetic_v = is_arithmetic<T>::value;

template<typename T>
struct is_scalar;

template<typename T>
constexpr auto is_scalar_v = is_scalar<T>::value;

template<typename T>
struct is_object;

template<typename T>
struct is_reference;

template<typename T>
constexpr auto is_reference_v = is_reference<T>::value;

template<typename T>
struct is_member_pointer;

template<typename T>
constexpr auto is_member_pointer_v = is_member_pointer<T>::value;

} // namespace Type_Traits_Composite_Type_Categories

inline namespace Type_Traits_Type_Properties {
template<typename T>
struct is_const;

template<typename T>
constexpr auto is_const_v = is_const<T>::value;

// C++20
template<typename T>
struct is_unbounded_array;

// C++20
template<typename T>
constexpr auto is_unbounded_array_v = is_unbounded_array<T>::value;

} // namespace Type_Traits_Type_Properties

inline namespace Type_Traits_Type_Relationships {
template<typename T, typename U>
struct is_same;

template<typename T, typename U>
constexpr auto is_same_v = is_same<T, U>::value;

template<typename From, typename To>
struct is_convertible;

template<typename From, typename To>
constexpr auto is_convertible_v = is_convertible<From, To>::value;

} // namespace Type_Traits_Type_Relationships

inline namespace Type_Traits_Const_Volatility_Specifiers {
template<typename T>
struct remove_const;

template<typename T>
using remove_const_t = typename remove_const<T>::type;

template<typename T>
struct remove_volatile;

template<typename T>
using remove_volatile_t = typename remove_volatile<T>::type;

template<typename T>
struct remove_cv;

template<typename T>
using remove_cv_t = typename remove_cv<T>::type;

} // namespace Type_Traits_Const_Volatility_Specifiers

inline namespace Type_Traits_References {
template<typename T>
struct remove_reference;

template<typename T>
using remove_reference_t = typename remove_reference<T>::type;

template<typename T>
struct add_lvalue_reference;

template<typename T>
using add_lvalue_reference_t = typename add_lvalue_reference<T>::type;

template<typename T>
struct add_rvalue_reference;

template<typename T>
using add_rvalue_reference_t = typename add_rvalue_reference<T>::type;

} // namespace Type_Traits_References

inline namespace Type_Traits_Pointers {
template<typename T>
struct add_pointer;

template<typename T>
using add_pointer_t = typename add_pointer<T>::type;

} // namespace Type_Traits_Pointers

inline namespace Type_Traits_Arrays {
template<typename T>
struct remove_extent;

template<typename T>
using remove_extent_t = typename remove_extent<T>::type;

} // namespace Type_Traits_Arrays

inline namespace Type_Traits_Miscellaneous_Transformations {
template<typename T>
struct decay;

template<typename T>
using decay_t = typename decay<T>::type;

template<bool B, typename T = void>
struct enable_if;

template<bool B, typename T = void>
using enable_if_t = typename enable_if<B, T>::type;

template<bool B, typename T, typename F>
struct conditional;

template<bool B, typename T, typename F>
using conditional_t = typename conditional<B, T, F>::type;

template<typename T>
struct underlying_type;

template<typename T>
using underlying_type_t = typename underlying_type<T>::type;

} // namespace Type_Traits_Miscellaneous_Transformations

//---------- supporting declarations ----------//

template<typename T>
auto declval() noexcept -> add_rvalue_reference_t<T>;

//---------- definitions ----------//

inline namespace Type_Traits_Helper_Classes {
template<typename T>
struct type_identity {
    using type = T;
};

template<typename T, T V>
struct integral_constant {
    using value_type = T;

    using type = integral_constant;

    static constexpr auto value = value_type{ V };

    constexpr operator value_type() const noexcept
    {
        return value;
    }

    constexpr auto operator()() const noexcept
    {
        return value;
    }
};

} // namespace Type_Traits_Helper_Classes

inline namespace Type_Traits_Primary_Type_Categories {
template<typename T>
struct is_void : is_same<void, remove_cv_t<T>> {
};

template<typename T>
struct is_null_pointer : is_same<nullptr_t, remove_cv_t<T>> {
};

namespace Implementation {

template<typename T>
struct is_integral : false_type {
};

template<>
struct is_integral<bool> : true_type {
};

template<>
struct is_integral<char> : true_type {
};

template<>
struct is_integral<signed char> : true_type {
};

template<>
struct is_integral<unsigned char> : true_type {
};

template<>
struct is_integral<char16_t> : true_type {
};

template<>
struct is_integral<char32_t> : true_type {
};

template<>
struct is_integral<wchar_t> : true_type {
};

template<>
struct is_integral<signed short> : true_type {
};

template<>
struct is_integral<unsigned short> : true_type {
};

template<>
struct is_integral<signed int> : true_type {
};

template<>
struct is_integral<unsigned int> : true_type {
};

template<>
struct is_integral<signed long> : true_type {
};

template<>
struct is_integral<unsigned long> : true_type {
};

template<>
struct is_integral<signed long long> : true_type {
};

template<>
struct is_integral<unsigned long long> : true_type {
};

template<>
struct is_integral<__int24> : true_type {
};

template<>
struct is_integral<__uint24> : true_type {
};

} // namespace Implementation

template<typename T>
struct is_integral : Implementation::is_integral<remove_cv_t<T>> {
};

namespace Implementation {

template<typename T>
struct is_floating_point : false_type {
};

template<>
struct is_floating_point<float> : true_type {
};

template<>
struct is_floating_point<double> : true_type {
};

template<>
struct is_floating_point<long double> : true_type {
};

} // namespace Implementation

template<typename T>
struct is_floating_point : Implementation::is_floating_point<remove_cv_t<T>> {
};

template<typename T>
struct is_array : false_type {
};

template<typename T>
struct is_array<T[]> : true_type {
};

template<typename T, size_t N>
struct is_array<T[ N ]> : true_type {
};

template<typename T>
struct is_enum : bool_constant<__is_enum( T )> {
};

template<typename T>
struct is_union : bool_constant<__is_union( T )> {
};

template<typename T>
struct is_class : bool_constant<__is_class( T )> {
};

template<typename T>
struct is_function : bool_constant<not is_const_v<T const> and not is_reference_v<T>> {
};

namespace Implementation {

template<typename T>
struct is_pointer : false_type {
};

template<typename T>
struct is_pointer<T *> : true_type {
};

} // namespace Implementation

template<typename T>
struct is_pointer : Implementation::is_pointer<remove_cv_t<T>> {
};

} // namespace Type_Traits_Primary_Type_Categories

inline namespace Type_Traits_Composite_Type_Categories {
template<typename T>
struct is_arithmetic : bool_constant<is_integral_v<T> or is_floating_point_v<T>> {
};

template<typename T>
struct is_scalar
    : bool_constant<is_arithmetic_v<T> or is_enum_v<T> or is_pointer_v<T> or is_member_pointer_v<T> or is_null_pointer_v<T>> {
};

template<typename T>
struct is_object
    : bool_constant<is_scalar_v<T> or is_array_v<T> or is_union_v<T> or is_class_v<T>> {
};

template<typename T>
struct is_reference : false_type {
};

template<typename T>
struct is_reference<T &> : true_type {
};

template<typename T>
struct is_reference<T &&> : true_type {
};

namespace Implementation {

template<typename T>
struct is_member_pointer : false_type {
};

template<typename T, typename U>
struct is_member_pointer<T U::*> : true_type {
};

} // namespace Implementation

template<typename T>
struct is_member_pointer : Implementation::is_member_pointer<remove_cv_t<T>> {
};

} // namespace Type_Traits_Composite_Type_Categories

inline namespace Type_Traits_Type_Properties {
template<typename T>
struct is_const : false_type {
};

template<typename T>
struct is_const<T const> : true_type {
};

template<typename T>
struct is_unbounded_array : false_type {
};

template<typename T>
struct is_unbounded_array<T[]> : true_type {
};

} // namespace Type_Traits_Type_Properties

inline namespace Type_Traits_Type_Relationships {
template<typename T, typename U>
struct is_same : false_type {
};

template<typename T>
struct is_same<T, T> : true_type {
};

namespace Implementation {

template<typename>
using true_type_if_substitution_succeeds = true_type;

template<typename T>
auto is_returnable( int ) -> true_type_if_substitution_succeeds<T()>;

template<typename T>
auto is_returnable( ... ) -> false_type;

template<typename From, typename To>
auto is_convertible( int )
    -> true_type_if_substitution_succeeds<decltype( declval<void ( & )( To )>()( declval<From>() ) )>;

template<typename From, typename To>
auto is_convertible( ... ) -> false_type;

} // namespace Implementation

template<typename From, typename To>
struct is_convertible
    : bool_constant<
          (is_void_v<From> and is_void_v<To>)
          or ( decltype( Implementation::is_returnable<To>( 0 ) )::value and decltype(
                 Implementation::is_convertible<From, To>( 0 ) )::value )> {
};

} // namespace Type_Traits_Type_Relationships

inline namespace Type_Traits_Const_Volatility_Specifiers {
template<typename T>
struct remove_const : type_identity<T> {
};

template<typename T>
struct remove_const<T const> : type_identity<T> {
};

template<typename T>
struct remove_volatile : type_identity<T> {
};

template<typename T>
struct remove_volatile<T volatile> : type_identity<T> {
};

template<typename T>
struct remove_cv : type_identity<remove_const_t<remove_volatile_t<T>>> {
};

} // namespace Type_Traits_Const_Volatility_Specifiers

inline namespace Type_Traits_References {
template<typename T>
struct remove_reference : type_identity<T> {
};

template<typename T>
struct remove_reference<T &> : type_identity<T> {
};

template<typename T>
struct remove_reference<T &&> : type_identity<T> {
};

namespace Implementation {

template<typename T>
auto add_lvalue_reference( int ) -> type_identity<T &>;

template<typename T>
auto add_lvalue_reference( ... ) -> type_identity<T>;

} // namespace Implementation

template<typename T>
struct add_lvalue_reference : decltype( Implementation::add_lvalue_reference<T>( 0 ) ) {
};

namespace Implementation {

template<typename T>
auto add_rvalue_reference( int ) -> type_identity<T &>;

template<typename T>
auto add_rvalue_reference( ... ) -> type_identity<T>;

} // namespace Implementation

template<typename T>
struct add_rvalue_reference : decltype( Implementation::add_rvalue_reference<T>( 0 ) ) {
};

} // namespace Type_Traits_References

inline namespace Type_Traits_Pointers {
namespace Implementation {

template<typename T>
auto add_pointer( int ) -> type_identity<remove_reference_t<T> *>;

template<typename T>
auto add_pointer( ... ) -> type_identity<T>;

} // namespace Implementation

template<typename T>
struct add_pointer : decltype( Implementation::add_pointer<T>( 0 ) ) {
};

} // namespace Type_Traits_Pointers

inline namespace Type_Traits_Arrays {
template<typename T>
struct remove_extent : type_identity<T> {
};

template<typename T>
struct remove_extent<T[]> : type_identity<T> {
};

template<typename T, size_t N>
struct remove_extent<T[ N ]> : type_identity<T> {
};

} // namespace Type_Traits_Arrays

inline namespace Type_Traits_Miscellaneous_Transformations {
template<typename T>
struct decay
    : type_identity<conditional_t<
          is_array_v<remove_reference_t<T>>,
          remove_extent_t<remove_reference_t<T>> *,
          conditional_t<is_function_v<remove_reference_t<T>>, add_pointer_t<remove_reference_t<T>>, remove_cv_t<remove_reference_t<T>>>>> {
};

template<bool B, typename T>
struct enable_if {
};

template<typename T>
struct enable_if<true, T> : type_identity<T> {
};

template<bool B, typename T, typename F>
struct conditional : type_identity<T> {
};

template<typename T, typename F>
struct conditional<false, T, F> : type_identity<F> {
};

template<typename T>
struct underlying_type : type_identity<__underlying_type( T )> {
};

} // namespace Type_Traits_Miscellaneous_Transformations

} // namespace std

#endif // STD_TYPE_TRAITS_H

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
 * \brief type_traits interface.
 */

#ifndef STD_TYPE_TRAITS_H
#define STD_TYPE_TRAITS_H

#include <cstddef>
#include <cstdint>

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

template<typename T>
struct is_lvalue_reference;

template<typename T>
constexpr auto is_lvalue_reference_v = is_lvalue_reference<T>::value;

template<typename T>
struct is_rvalue_reference;

template<typename T>
constexpr auto is_rvalue_reference_v = is_rvalue_reference<T>::value;

template<typename T>
struct is_member_object_pointer;

template<typename T>
constexpr auto is_member_object_pointer_v = is_member_object_pointer<T>::value;

template<typename T>
struct is_member_function_pointer;

template<typename T>
constexpr auto is_member_function_pointer_v = is_member_function_pointer<T>::value;

} // namespace Type_Traits_Primary_Type_Categories

inline namespace Type_Traits_Composite_Type_Categories {
template<typename T>
struct is_fundamental;

template<typename T>
constexpr auto is_fundamental_v = is_fundamental<T>::value;

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
constexpr auto is_object_v = is_object<T>::value;

template<typename T>
struct is_compound;

template<typename T>
constexpr auto is_compound_v = is_compound<T>::value;

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

template<typename T>
struct is_volatile;

template<typename T>
constexpr auto is_volatile_v = is_volatile<T>::value;

template<typename T>
struct is_trivial;

template<typename T>
constexpr auto is_trivial_v = is_trivial<T>::value;

template<typename T>
struct is_trivially_copyable;

template<typename T>
constexpr auto is_trivially_copyable_v = is_trivially_copyable<T>::value;

template<typename T>
struct is_standard_layout;

template<typename T>
constexpr auto is_standard_layout_v = is_standard_layout<T>::value;

template<typename T>
struct is_pod;

template<typename T>
constexpr auto is_pod_v = is_pod<T>::value;

template<typename T>
struct has_unique_object_representations;

template<typename T>
constexpr auto has_unique_object_representations_v = has_unique_object_representations<T>::value;

template<typename T>
struct is_empty;

template<typename T>
constexpr auto is_empty_v = is_empty<T>::value;

template<typename T>
struct is_polymorphic;

template<typename T>
constexpr auto is_polymorphic_v = is_polymorphic<T>::value;

template<typename T>
struct is_abstract;

template<typename T>
constexpr auto is_abstract_v = is_abstract<T>::value;

template<typename T>
struct is_final;

template<typename T>
constexpr auto is_final_v = is_final<T>::value;

template<typename T>
struct is_aggregate;

template<typename T>
constexpr auto is_aggregate_v = is_aggregate<T>::value;

template<typename T>
struct is_signed;

template<typename T>
constexpr auto is_signed_v = is_signed<T>::value;

template<typename T>
struct is_unsigned;

template<typename T>
constexpr auto is_unsigned_v = is_unsigned<T>::value;

// C++20
template<typename T>
struct is_bounded_array;

// C++20
template<typename T>
constexpr auto is_bounded_array_v = is_bounded_array<T>::value;

// C++20
template<typename T>
struct is_unbounded_array;

// C++20
template<typename T>
constexpr auto is_unbounded_array_v = is_unbounded_array<T>::value;

} // namespace Type_Traits_Type_Properties

inline namespace Type_Traits_Supported_Operations {
template<typename T>
struct is_destructible;

template<typename T>
constexpr auto is_destructible_v = is_destructible<T>::value;

template<typename T>
struct is_trivially_destructible;

template<typename T>
constexpr auto is_trivially_destructible_v = is_trivially_destructible<T>::value;

} // namespace Type_Traits_Supported_Operations

inline namespace Property_queries {
template<typename T>
struct alignment_of;

template<typename T>
constexpr auto alignment_of_v = alignment_of<T>::value;

template<typename T>
struct rank;

template<typename T>
constexpr auto rank_v = rank<T>::value;

template<typename T, unsigned int N = 0>
struct extent;

template<typename T, unsigned int N = 0>
constexpr auto extent_v = extent<T>::value;

} // namespace Property_queries

inline namespace Type_Traits_Type_Relationships {
template<typename T, typename U>
struct is_same;

template<typename T, typename U>
constexpr auto is_same_v = is_same<T, U>::value;

template<typename Base, typename Derived>
struct is_base_of;

template<typename Base, typename Derived>
constexpr auto is_base_of_v = is_base_of<Base, Derived>::value;

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

template<typename T>
struct add_const;

template<typename T>
using add_const_t = typename add_const<T>::type;

template<typename T>
struct add_volatile;

template<typename T>
using add_volatile_t = typename add_volatile<T>::type;

template<typename T>
struct add_cv;

template<typename T>
using add_cv_t = typename add_cv<T>::type;

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
struct remove_pointer;

template<typename T>
using remove_pointer_t = typename remove_pointer<T>::type;

template<typename T>
struct add_pointer;

template<typename T>
using add_pointer_t = typename add_pointer<T>::type;

} // namespace Type_Traits_Pointers

inline namespace Type_Traits_Sign_Modifiers {
template<typename T>
struct make_unsigned;

template<typename T>
using make_unsigned_t = typename make_unsigned<T>::type;

} // namespace Type_Traits_Sign_Modifiers

inline namespace Type_Traits_Arrays {
template<typename T>
struct remove_extent;

template<typename T>
using remove_extent_t = typename remove_extent<T>::type;

template<typename T>
struct remove_all_extents;

template<typename T>
using remove_all_extents_t = typename remove_all_extents<T>::type;

} // namespace Type_Traits_Arrays

inline namespace Type_Traits_Miscellaneous_Transformations {
template<size_t LENGTH, size_t ALIGNMENT = alignof( char )>
struct aligned_storage;

template<size_t LENGTH, size_t ALIGNMENT = alignof( char )>
using aligned_storage_t = typename aligned_storage<LENGTH, ALIGNMENT>::type;

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

template<typename Functor, typename... Arguments>
struct invoke_result;

template<typename Functor, typename... Arguments>
using invoke_result_t = typename invoke_result<Functor, Arguments...>::type;

template<typename...>
using void_t = void;

} // namespace Type_Traits_Miscellaneous_Transformations

inline namespace Operations_On_Traits {
template<typename... B>
struct conjunction;

template<typename... B>
constexpr auto conjunction_v = conjunction<B...>::value;

template<typename... B>
struct disjunction;

template<typename... B>
constexpr auto disjunction_v = disjunction<B...>::value;

template<typename B>
struct negation;

template<typename B>
constexpr auto negation_v = negation<B>::value;

} // namespace Operations_On_Traits

//---------- supporting declarations/definitions ----------//

template<typename T>
auto declval() noexcept -> add_rvalue_reference_t<T>;

template<typename T>
constexpr auto forward( remove_reference_t<T> && t ) noexcept
{
    return static_cast<T &&>( t );
}

template<typename T>
constexpr auto forward( remove_reference_t<T> & t ) noexcept
{
    return static_cast<T &&>( t );
}

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
struct is_function : conjunction<negation<is_const<T const>>, negation<is_reference<T>>> {
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

template<typename T>
struct is_lvalue_reference : false_type {
};

template<typename T>
struct is_lvalue_reference<T &> : true_type {
};

template<typename T>
struct is_rvalue_reference : false_type {
};

template<typename T>
struct is_rvalue_reference<T &&> : true_type {
};

namespace Implementation {

template<typename T>
struct is_member_object_pointer : false_type {
};

template<typename T, typename C>
struct is_member_object_pointer<T C::*> : negation<is_function<T>> {
};

} // namespace Implementation

template<typename T>
struct is_member_object_pointer : Implementation::is_member_object_pointer<remove_cv_t<T>> {
};

namespace Implementation {

template<typename T>
struct is_member_function_pointer : false_type {
};

template<typename T, typename C>
struct is_member_function_pointer<T C::*> : is_function<T> {
};

} // namespace Implementation

template<typename T>
struct is_member_function_pointer : Implementation::is_member_function_pointer<remove_cv_t<T>> {
};

} // namespace Type_Traits_Primary_Type_Categories

inline namespace Type_Traits_Composite_Type_Categories {
template<typename T>
struct is_fundamental : disjunction<is_arithmetic<T>, is_void<T>, is_null_pointer<T>> {
};

template<typename T>
struct is_arithmetic : disjunction<is_integral<T>, is_floating_point<T>> {
};

template<typename T>
struct is_scalar :
    disjunction<is_arithmetic<T>, is_enum<T>, is_pointer<T>, is_member_pointer<T>, is_null_pointer<T>> {
};

template<typename T>
struct is_object : disjunction<is_scalar<T>, is_array<T>, is_union<T>, is_class<T>> {
};

template<typename T>
struct is_compound : negation<is_fundamental<T>> {
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
struct is_volatile : false_type {
};

template<typename T>
struct is_volatile<T volatile> : true_type {
};

template<typename T>
struct is_trivial : bool_constant<__is_trivial( T )> {
};

template<typename T>
struct is_trivially_copyable : bool_constant<__is_trivially_copyable( T )> {
};

template<typename T>
struct is_standard_layout : bool_constant<__is_standard_layout( T )> {
};

template<typename T>
struct is_pod : bool_constant<__is_pod( T )> {
};

template<typename T>
struct has_unique_object_representations :
    bool_constant<__has_unique_object_representations( remove_cv_t<remove_all_extents_t<T>> )> {
};

template<typename T>
struct is_empty : bool_constant<__is_empty( T )> {
};

template<typename T>
struct is_polymorphic : bool_constant<__is_polymorphic( T )> {
};

template<typename T>
struct is_abstract : bool_constant<__is_abstract( T )> {
};

template<typename T>
struct is_final : bool_constant<__is_final( T )> {
};

template<typename T>
struct is_aggregate : bool_constant<__is_aggregate( remove_cv_t<T> )> {
};

namespace Implementation {

template<typename T, bool = is_arithmetic_v<T>>
struct is_signed : bool_constant<static_cast<T>( -1 ) < static_cast<T>( 0 )> {
};

template<typename T>
struct is_signed<T, false> : false_type {
};

} // namespace Implementation

template<typename T>
struct is_signed : Implementation::is_signed<T> {
};

namespace Implementation {

template<typename T, bool = is_arithmetic_v<T>>
struct is_unsigned : bool_constant<static_cast<T>( 0 ) < static_cast<T>( -1 )> {
};

template<typename T>
struct is_unsigned<T, false> : false_type {
};

} // namespace Implementation

template<typename T>
struct is_unsigned : Implementation::is_unsigned<T> {
};

template<typename T>
struct is_bounded_array : false_type {
};

template<typename T, size_t N>
struct is_bounded_array<T[ N ]> : true_type {
};

template<typename T>
struct is_unbounded_array : false_type {
};

template<typename T>
struct is_unbounded_array<T[]> : true_type {
};

} // namespace Type_Traits_Type_Properties

inline namespace Type_Traits_Supported_Operations {
namespace Implementation {
template<typename T, typename = decltype( declval<T &>().~T() )>
auto has_destructor( int ) -> true_type;

template<typename T>
auto has_destructor( ... ) -> false_type;

template<typename T, bool = is_reference_v<T>, bool = disjunction_v<is_void<T>, is_function<T>, is_unbounded_array<T>>>
struct is_destructible;

template<typename T>
struct is_destructible<T, true, false> : true_type {
};

template<typename T>
struct is_destructible<T, false, true> : false_type {
};

template<typename T>
struct is_destructible<T, false, false> : decltype( has_destructor<T>( 0 ) ) {
};

} // namespace Implementation

template<typename T>
struct is_destructible : Implementation::is_destructible<T> {
};

template<typename T>
struct is_trivially_destructible :
    conjunction<is_destructible<T>, bool_constant<__has_trivial_destructor( T )>> {
};

} // namespace Type_Traits_Supported_Operations

inline namespace Property_Queries {
template<typename T>
struct alignment_of : integral_constant<size_t, alignof( T )> {
};

template<typename T>
struct rank : integral_constant<size_t, 0> {
};

template<typename T>
struct rank<T[]> : integral_constant<size_t, rank_v<T> + 1> {
};

template<typename T, size_t N>
struct rank<T[ N ]> : integral_constant<size_t, rank_v<T> + 1> {
};

template<typename T, unsigned int N = 0>
struct extent : integral_constant<size_t, 0> {
};

template<typename T>
struct extent<T[], 0> : integral_constant<size_t, 0> {
};

template<typename T, unsigned int N>
struct extent<T[], N> : extent<T, N - 1> {
};

template<typename T, size_t I>
struct extent<T[ I ], 0> : integral_constant<size_t, I> {
};

template<typename T, size_t I, unsigned int N>
struct extent<T[ I ], N> : extent<T, N - 1> {
};

} // namespace Property_Queries

inline namespace Type_Traits_Type_Relationships {
template<typename T, typename U>
struct is_same : false_type {
};

template<typename T>
struct is_same<T, T> : true_type {
};

template<typename Base, typename Derived>
struct is_base_of : bool_constant<__is_base_of( Base, Derived )> {
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
struct is_convertible :
    disjunction<
        conjunction<is_void<From>, is_void<To>>,
        is_same<From, To>,
        conjunction<decltype( Implementation::is_returnable<To>( 0 ) ), decltype( Implementation::is_convertible<From, To>( 0 ) )>> {
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

template<typename T>
struct add_const : type_identity<T const> {
};

template<typename T>
struct add_volatile : type_identity<T volatile> {
};

template<typename T>
struct add_cv : type_identity<add_const_t<add_volatile_t<T>>> {
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
template<typename T>
struct remove_pointer : type_identity<T> {
};

template<typename T>
struct remove_pointer<T *> : type_identity<T> {
};

template<typename T>
struct remove_pointer<T * const> : type_identity<T> {
};

template<typename T>
struct remove_pointer<T * volatile> : type_identity<T> {
};

template<typename T>
struct remove_pointer<T * const volatile> : type_identity<T> {
};

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

inline namespace Type_Traits_Sign_Modifiers {
namespace Implementation {

template<typename T>
struct make_unsigned_integral : type_identity<T> {
};

template<>
struct make_unsigned_integral<signed char> : type_identity<unsigned char> {
};

template<>
struct make_unsigned_integral<signed short> : type_identity<unsigned short> {
};

template<>
struct make_unsigned_integral<signed int> : type_identity<unsigned int> {
};

template<>
struct make_unsigned_integral<signed long> : type_identity<unsigned long> {
};

template<>
struct make_unsigned_integral<signed long long> : type_identity<unsigned long long> {
};

template<>
struct make_unsigned_integral<char> : type_identity<unsigned char> {
};

static_assert( sizeof( wchar_t ) == sizeof( unsigned int ) );

template<>
struct make_unsigned_integral<wchar_t> : type_identity<unsigned int> {
};

static_assert( sizeof( char16_t ) == sizeof( unsigned int ) );

template<>
struct make_unsigned_integral<char16_t> : type_identity<unsigned int> {
};

static_assert( sizeof( char32_t ) == sizeof( unsigned long ) );

template<>
struct make_unsigned_integral<char32_t> : type_identity<unsigned long> {
};

template<typename T>
using make_unsigned_integral_t = typename make_unsigned_integral<T>::type;

template<typename T, bool = is_integral_v<T> and not is_same_v<T, bool>, bool = is_enum_v<T>>
struct make_unsigned;

template<typename T>
struct make_unsigned<T, true, false> : type_identity<make_unsigned_integral_t<T>> {
};

template<typename T>
struct make_unsigned<T const, true, false> : type_identity<make_unsigned_integral_t<T> const> {
};

template<typename T>
struct make_unsigned<T volatile, true, false> :
    type_identity<make_unsigned_integral_t<T> volatile> {
};

template<typename T>
struct make_unsigned<T const volatile, true, false> :
    type_identity<make_unsigned_integral_t<T> const volatile> {
};

template<typename T>
struct make_unsigned<T, false, true> :
    type_identity<make_unsigned_integral<underlying_type_t<T>>> {
};

template<typename T>
struct make_unsigned<T const, false, true> :
    type_identity<make_unsigned_integral<underlying_type_t<T>> const> {
};

template<typename T>
struct make_unsigned<T volatile, false, true> :
    type_identity<make_unsigned_integral<underlying_type_t<T>> volatile> {
};

template<typename T>
struct make_unsigned<T const volatile, false, true> :
    type_identity<make_unsigned_integral<underlying_type_t<T>> const volatile> {
};

} // namespace Implementation

template<typename T>
struct make_unsigned : Implementation::make_unsigned<T> {
};

} // namespace Type_Traits_Sign_Modifiers

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

template<typename T>
struct remove_all_extents : type_identity<T> {
};

template<typename T>
struct remove_all_extents<T[]> : type_identity<remove_all_extents_t<T>> {
};

template<typename T, size_t N>
struct remove_all_extents<T[ N ]> : type_identity<remove_all_extents_t<T>> {
};

} // namespace Type_Traits_Arrays

inline namespace Type_Traits_Miscellaneous_Transformations {
template<size_t LENGTH, size_t ALIGNMENT>
struct aligned_storage {
    struct type {
        alignas( ALIGNMENT ) uint8_t storage[ LENGTH ];
    };
};

template<typename T>
struct decay :
    type_identity<conditional_t<
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

namespace Implementation {

template<typename T>
struct is_reference_wrapper : false_type {
};

template<typename T>
constexpr auto is_reference_wrapper_v = is_reference_wrapper<T>::value;

template<typename Free_Function>
struct invocations {
    template<typename Functor, typename... Arguments>
    static auto invoke( Functor && functor, Arguments &&... arguments )
        -> decltype( forward<Functor>( functor )( forward<Arguments>( arguments )... ) );
};

template<typename Class, typename Member>
struct invocations<Member Class::*> {
    template<typename T, typename = enable_if_t<is_base_of_v<Class, decay_t<T>>>>
    static auto get( T && t ) -> T &&;

    template<typename T, typename = enable_if_t<is_reference_wrapper_v<decay_t<T>>>>
    static auto get( T && t ) -> decltype( t.get() );

    template<typename T, typename = enable_if_t<negation_v<is_base_of<Class, decay_t<T>>>>, typename = enable_if_t<negation_v<is_reference_wrapper<decay_t<T>>>>>
    static auto get( T && t ) -> decltype( *forward<T>( t ) );

    template<typename T, typename... Arguments, typename Member_1, typename = enable_if_t<is_function_v<Member_1>>>
    static auto invoke( Member_1 Class::*function, T && t, Arguments &&... arguments )
        -> decltype( ( invocations::get( forward<T>( t ) ).*function )( forward<Arguments>( arguments )... ) );

    template<typename T>
    static auto invoke( Member Class::*data, T && t )
        -> decltype( invocations::get( forward<T>( t ) ).*data );
};

template<typename Functor, typename... Arguments, typename Decayed_Functor = decay_t<Functor>>
auto INVOKE( Functor && functor, Arguments &&... arguments )
    -> decltype( invocations<Decayed_Functor>::invoke( forward<Functor>( functor ), forward<Arguments>( arguments )... ) );

template<typename Invocable_Test, typename Functor, typename... Arguments>
struct invoke_result {
};

template<typename Functor, typename... Arguments>
struct invoke_result<void_t<decltype( INVOKE( declval<Functor>(), declval<Arguments>()... ) )>, Functor, Arguments...> :
    type_identity<decltype( INVOKE( declval<Functor>(), declval<Arguments>()... ) )> {
};

} // namespace Implementation

template<typename Functor, typename... Arguments>
struct invoke_result : Implementation::invoke_result<void, Functor, Arguments...> {
};

} // namespace Type_Traits_Miscellaneous_Transformations

inline namespace Operations_On_Traits {
template<typename...>
struct conjuction : true_type {
};

template<typename B1>
struct conjunction<B1> : B1 {
};

template<typename B1, typename... BN>
struct conjunction<B1, BN...> :
    conditional_t<static_cast<bool>( B1::value ), conjunction<BN...>, B1> {
};

template<typename...>
struct disjunction : false_type {
};

template<typename B1>
struct disjunction<B1> : B1 {
};

template<typename B1, typename... BN>
struct disjunction<B1, BN...> :
    conditional_t<static_cast<bool>( B1::value ), B1, disjunction<BN...>> {
};

template<typename B>
struct negation : bool_constant<not static_cast<bool>( B::value )> {
};

} // namespace Operations_On_Traits

} // namespace std

#endif // STD_TYPE_TRAITS_H

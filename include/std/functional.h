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
 * \brief functional interface.
 */

#ifndef STD_FUNCTIONAL_H
#define STD_FUNCTIONAL_H

#include <memory>
#include <type_traits>
#include <utility>

namespace std {

template<typename T>
class reference_wrapper {
  public:
    template<typename U, typename = decltype( FUN( declval<U>() ) ), typename = enable_if_t<not is_same_v<decay_t<U>, reference_wrapper>>>
    reference_wrapper( U && u ) noexcept( noexcept( FUN( declval<U>() ) ) ) :
        m_pointer{ pointer( std::forward<U>( u ) ) }
    {
    }

    reference_wrapper( reference_wrapper const & original ) noexcept = default;

    auto operator=( reference_wrapper const & expression ) noexcept -> reference_wrapper & = default;

    operator T &() const noexcept
    {
        return *m_pointer;
    }

    auto get() const noexcept -> T &
    {
        return *m_pointer;
    }

    template<typename... Arguments>
    auto operator()( Arguments &&... arguments ) const -> invoke_result_t<T &, Arguments...>
    {
        return ( *m_pointer )( forward<Arguments>( arguments )... );
    }

  private:
    static void FUN( T & ) noexcept;

    static void FUN( T && ) = delete;

    static auto pointer( T & t ) noexcept -> T *
    {
        return addressof( t );
    }

    T * m_pointer{};
};

template<typename T>
reference_wrapper( T & ) -> reference_wrapper<T>;

template<typename T>
auto ref( T & t ) noexcept -> reference_wrapper<T>
{
    return { t };
}

template<typename T>
auto ref( reference_wrapper<T> t ) noexcept -> reference_wrapper<T>
{
    return t;
}

template<typename T>
void ref( T const && ) = delete;

template<typename T>
auto cref( T const & t ) noexcept -> reference_wrapper<T const>
{
    return { t };
}

template<typename T>
auto cref( std::reference_wrapper<T> t ) noexcept -> reference_wrapper<T const>
{
    return { t.get() };
}

template<typename T>
void cref( T const && ) = delete;

} // namespace std

#endif // STD_FUNCTIONAL_H

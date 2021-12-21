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
 * \brief initializer_list interface.
 */

#ifndef STD_INITIALIZER_LIST_H
#define STD_INITIALIZER_LIST_H

#include <cstddef>

namespace std {

template<typename T>
class initializer_list {
  public:
    using value_type = T;

    using reference = T const &;

    using const_reference = T const &;

    using size_type = size_t;

    using iterator = T const *;

    using const_iterator = T const *;

    constexpr initializer_list() noexcept = default;

    constexpr auto size() const noexcept -> size_type
    {
        return m_size;
    }

    constexpr auto begin() const noexcept -> const_iterator
    {
        return m_begin;
    }

    constexpr auto end() const noexcept -> const_iterator
    {
        return m_begin + size;
    }

  private:
    iterator m_begin{};

    size_type m_size{};

    /*
     * GCC appears to require a pointer + size based implementation, and is able to
     * call this private constructor
     */
    constexpr initializer_list( const_iterator begin, size_type size ) noexcept :
        m_begin{ begin },
        m_size{ size }
    {
    }
};

template<typename T>
constexpr auto begin( initializer_list<T> initializer_list_ ) noexcept -> T const *
{
    return initializer_list_.begin();
}

template<typename T>
constexpr auto end( initializer_list<T> initializer_list_ ) noexcept -> T const *
{
    return initializer_list_.end();
}

} // namespace std

#endif // STD_INITIALIZER_LIST_H

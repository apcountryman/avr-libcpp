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
 * \brief iterator interface.
 */

#ifndef STD_ITERATOR_H
#define STD_ITERATOR_H

#include <cstddef>
#include <memory>
#include <type_traits>

namespace std {

struct input_iterator_tag {
};

struct output_iterator_tag {
};

struct forward_iterator_tag : input_iterator_tag {
};

struct bidirectional_iterator_tag : forward_iterator_tag {
};

struct random_access_iterator_tag : bidirectional_iterator_tag {
};

template<typename Iterator, typename = void_t<>>
struct iterator_traits {
};

template<typename Iterator>
struct iterator_traits<Iterator, void_t<typename Iterator::difference_type, typename Iterator::value_type, typename Iterator::pointer, typename Iterator::reference, typename Iterator::iterator_category>> {
    using difference_type = typename Iterator::difference_type;

    using value_type = typename Iterator::value_type;

    using pointer = typename Iterator::pointer;

    using reference = typename Iterator::reference;

    using iterator_category = typename Iterator::iterator_category;
};

template<typename T>
struct iterator_traits<T *> {
    using difference_type = ptrdiff_t;

    using value_type = T;

    using pointer = T *;

    using reference = T &;

    using iterator_category = random_access_iterator_tag;
};

template<typename T>
struct iterator_traits<T const *> {
    using difference_type = ptrdiff_t;

    using value_type = T;

    using pointer = T const *;

    using reference = T const &;

    using iterator_category = random_access_iterator_tag;
};

template<typename Iterator>
class reverse_iterator {
  public:
    using iterator_type = Iterator;

    using iterator_category = typename iterator_traits<iterator_type>::iterator_category;

    using value_type = typename iterator_traits<iterator_type>::value_type;

    using difference_type = typename iterator_traits<iterator_type>::difference_type;

    using pointer = typename iterator_traits<iterator_type>::pointer;

    using reference = typename iterator_traits<iterator_type>::reference;

    constexpr reverse_iterator() = default;

    constexpr explicit reverse_iterator( iterator_type iterator ) : current{ iterator }
    {
    }

    template<typename Other_Iterator>
    constexpr reverse_iterator( reverse_iterator<Other_Iterator> const & other_iterator ) :
        current{ other_iterator.current }
    {
    }

    template<typename Other_Iterator>
    constexpr auto operator=( reverse_iterator<Other_Iterator> const & other_iterator )
        -> reverse_iterator &
    {
        current = other_iterator.current;

        return *this;
    }

    constexpr auto base() const -> iterator_type
    {
        return current;
    }

    constexpr auto operator*() const -> reference
    {
        auto iterator = current;

        return *--iterator;
    }

    constexpr auto operator->() const -> pointer
    {
        return addressof( operator*() );
    }

    constexpr auto operator[]( difference_type offset ) const -> reference
    {
        return current[ -offset - 1 ];
    }

    constexpr auto operator++() -> reverse_iterator &
    {
        --current;

        return *this;
    }

    constexpr auto operator--() -> reverse_iterator &
    {
        ++current;

        return *this;
    }

    constexpr auto operator++( int ) -> reverse_iterator
    {
        auto iterator = current;

        --current;

        return iterator;
    }

    constexpr auto operator--( int ) -> reverse_iterator
    {
        auto iterator = current;

        ++current;

        return iterator;
    }

    constexpr auto operator+( difference_type n ) const -> reverse_iterator
    {
        return current - n;
    }

    constexpr auto operator-( difference_type n ) const -> reverse_iterator
    {
        return current + n;
    }

    constexpr auto operator+=( difference_type n ) -> reverse_iterator &
    {
        current -= n;

        return *this;
    }

    constexpr auto operator-=( difference_type n ) -> reverse_iterator &
    {
        current += n;

        return *this;
    }

  protected:
    iterator_type current{};
};

template<typename Iterator_LHS, typename Iterator_RHS>
constexpr auto operator==( reverse_iterator<Iterator_LHS> const & lhs, reverse_iterator<Iterator_RHS> const & rhs )
    -> bool
{
    return lhs.base() == rhs.base();
}

template<typename Iterator_LHS, typename Iterator_RHS>
constexpr auto operator!=( reverse_iterator<Iterator_LHS> const & lhs, reverse_iterator<Iterator_RHS> const & rhs )
    -> bool
{
    return not( lhs == rhs );
}

template<typename Iterator_LHS, typename Iterator_RHS>
constexpr auto operator<( reverse_iterator<Iterator_LHS> const & lhs, reverse_iterator<Iterator_RHS> const & rhs )
    -> bool
{
    return lhs.base() > rhs.base();
}

template<typename Iterator_LHS, typename Iterator_RHS>
constexpr auto operator>( reverse_iterator<Iterator_LHS> const & lhs, reverse_iterator<Iterator_RHS> const & rhs )
    -> bool
{
    return lhs.base() < rhs.base();
}

template<typename Iterator_LHS, typename Iterator_RHS>
constexpr auto operator<=( reverse_iterator<Iterator_LHS> const & lhs, reverse_iterator<Iterator_RHS> const & rhs )
    -> bool
{
    return lhs.base() >= rhs.base();
}

template<typename Iterator_LHS, typename Iterator_RHS>
constexpr auto operator>=( reverse_iterator<Iterator_LHS> const & lhs, reverse_iterator<Iterator_RHS> const & rhs )
    -> bool
{
    return lhs.base() <= rhs.base();
}

template<typename Iterator>
constexpr auto operator+( typename reverse_iterator<Iterator>::difference_type n, reverse_iterator<Iterator> const & iterator )
    -> reverse_iterator<Iterator>
{
    return iterator.base() - n;
}

template<typename Iterator_LHS, typename Iterator_RHS>
constexpr auto operator-( reverse_iterator<Iterator_LHS> const & lhs, reverse_iterator<Iterator_RHS> const & rhs )
    -> decltype( rhs.base() - lhs.base() )
{
    return rhs.base() - lhs.base();
}

template<typename Iterator>
constexpr auto make_reverse_iterator( Iterator iterator ) -> reverse_iterator<Iterator>
{
    return iterator;
}

} // namespace std

#endif // STD_ITERATOR_H

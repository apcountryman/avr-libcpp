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
 * \brief new interface.
 */

#ifndef STD_NEW_H
#define STD_NEW_H

#include <cstddef>

namespace std {
} // namespace std

inline void * operator new( std::size_t, void * location ) noexcept
{
    return location;
}

inline void operator delete(void *, void *)noexcept
{
}

inline void * operator new[]( std::size_t, void * location ) noexcept
{
    return location;
}

inline void operator delete[]( void *, void * ) noexcept
{
}

#endif // STD_NEW_H

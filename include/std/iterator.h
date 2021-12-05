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

} // namespace std

#endif // STD_ITERATOR_H

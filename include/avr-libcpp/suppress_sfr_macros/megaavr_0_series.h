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
 * \brief avr-libcpp/suppress_sfr_macros/megaavr_0_series interface.
 */

#ifndef AVRLIBCPP_SUPPRESS_SFR_MACROS_MEGAAVR_0_SERIES_H
#define AVRLIBCPP_SUPPRESS_SFR_MACROS_MEGAAVR_0_SERIES_H

#include <avr/io.h>

#if defined( __AVR_ATmega808__ ) || defined( __AVR_ATmega809__ )      \
    || defined( __AVR_ATmega1608__ ) || defined( __AVR_ATmega1609__ ) \
    || defined( __AVR_ATmega3208__ ) || defined( __AVR_ATmega3209__ ) \
    || defined( __AVR_ATmega4808__ ) || defined( __AVR_ATmega4809__ )
#ifdef AVRLIBCPP_SUPPRESS_SFR_MACROS

#ifdef AC0
#undef AC0
#endif // AC0

#ifdef ADC0
#undef ADC0
#endif // ADC0

#ifdef BOD
#undef BOD
#endif // BOD

#ifdef CCL
#undef CCL
#endif // CCL

#ifdef CCP
#undef CCP
#endif // CCP

#ifdef CLKCTRL
#undef CLKCTRL
#endif // CLKCTRL

#ifdef CPUINT
#undef CPUINT
#endif // CPUINT

#ifdef CRCSCAN
#undef CRCSCAN
#endif // CRCSCAN

#ifdef DD0
#undef DD0
#endif // DD0

#ifdef DD1
#undef DD1
#endif // DD1

#ifdef DD2
#undef DD2
#endif // DD2

#ifdef DD3
#undef DD3
#endif // DD3

#ifdef DD4
#undef DD4
#endif // DD4

#ifdef DD5
#undef DD5
#endif // DD5

#ifdef DD6
#undef DD6
#endif // DD6

#ifdef DD7
#undef DD7
#endif // DD7

#ifdef EVSYS
#undef EVSYS
#endif // EVSYS

#ifdef FUSE
#undef FUSE
#endif // FUSE

#ifdef GPIO0
#undef GPIO0
#endif // GPIO0

#ifdef GPIO1
#undef GPIO1
#endif // GPIO1

#ifdef GPIO2
#undef GPIO2
#endif // GPIO2

#ifdef GPIO3
#undef GPIO3
#endif // GPIO3

#ifdef GPIOR0
#undef GPIOR0
#endif // GPIOR0

#ifdef GPIOR1
#undef GPIOR1
#endif // GPIOR1

#ifdef GPIOR2
#undef GPIOR2
#endif // GPIOR2

#ifdef GPIOR3
#undef GPIOR3
#endif // GPIOR3

#ifdef LOCKBIT
#undef LOCKBIT
#endif // LOCKBIT

#ifdef NVMCTRL
#undef NVMCTRL
#endif // NVMCTRL

#ifdef PIN0
#undef PIN0
#endif // PIN0

#ifdef PIN1
#undef PIN1
#endif // PIN1

#ifdef PIN2
#undef PIN2
#endif // PIN2

#ifdef PIN3
#undef PIN3
#endif // PIN3

#ifdef PIN4
#undef PIN4
#endif // PIN4

#ifdef PIN5
#undef PIN5
#endif // PIN5

#ifdef PIN6
#undef PIN6
#endif // PIN6

#ifdef PIN7
#undef PIN7
#endif // PIN7

#ifdef PORT0
#undef PORT0
#endif // PORT0

#ifdef PORT1
#undef PORT1
#endif // PORT1

#ifdef PORT2
#undef PORT2
#endif // PORT2

#ifdef PORT3
#undef PORT3
#endif // PORT3

#ifdef PORT4
#undef PORT4
#endif // PORT4

#ifdef PORT5
#undef PORT5
#endif // PORT5

#ifdef PORT6
#undef PORT6
#endif // PORT6

#ifdef PORT7
#undef PORT7
#endif // PORT7

#ifdef PORTA
#undef PORTA
#endif // PORTA

#ifdef PORTB
#undef PORTB
#endif // PORTB

#ifdef PORTC
#undef PORTC
#endif // PORTC

#ifdef PORTD
#undef PORTD
#endif // PORTD

#ifdef PORTE
#undef PORTE
#endif // PORTE

#ifdef PORTF
#undef PORTF
#endif // PORTF

#ifdef PORTMUX
#undef PORTMUX
#endif // PORTMUX

#ifdef RSTCTRL
#undef RSTCTRL
#endif // RSTCTRL

#ifdef RTC
#undef RTC
#endif // RTC

#ifdef SIGROW
#undef SIGROW
#endif // SIGROW

#ifdef SLPCTRL
#undef SLPCTRL
#endif // SLPCTRL

#ifdef SP
#undef SP
#endif // SP

#ifdef SPH
#undef SPH
#endif // SPH

#ifdef SPI0
#undef SPI0
#endif // SPI0

#ifdef SPL
#undef SPL
#endif // SPL

#ifdef SREG
#undef SREG
#endif // SREG

#ifdef SYSCFG
#undef SYSCFG
#endif // SYSCFG

#ifdef TCA0
#undef TCA0
#endif // TCA0

#ifdef TCB0
#undef TCB0
#endif // TCB0

#ifdef TCB1
#undef TCB1
#endif // TCB1

#ifdef TCB2
#undef TCB2
#endif // TCB2

#ifdef TCB3
#undef TCB3
#endif // TCB3

#ifdef TWI0
#undef TWI0
#endif // TWI0

#ifdef USART0
#undef USART0
#endif // USART0

#ifdef USART1
#undef USART1
#endif // USART1

#ifdef USART2
#undef USART2
#endif // USART2

#ifdef USART3
#undef USART3
#endif // USART3

#ifdef USERROW
#undef USERROW
#endif // USERROW

#ifdef VPORTA
#undef VPORTA
#endif // VPORTA

#ifdef VPORTB
#undef VPORTB
#endif // VPORTB

#ifdef VPORTC
#undef VPORTC
#endif // VPORTC

#ifdef VPORTD
#undef VPORTD
#endif // VPORTD

#ifdef VPORTE
#undef VPORTE
#endif // VPORTE

#ifdef VPORTF
#undef VPORTF
#endif // VPORTF

#ifdef VREF
#undef VREF
#endif // VREF

#ifdef WDT
#undef WDT
#endif // WDT

#endif // AVRLIBCPP_SUPPRESS_SFR_MACROS
#endif // defined( __AVR_ATmega808__ ) || defined( __AVR_ATmega809__ ) || defined( __AVR_ATmega1608__
       // ) || defined( __AVR_ATmega1609__ ) || defined( __AVR_ATmega3208__ ) || defined( __AVR_ATmega3209__ ) || defined( __AVR_ATmega4808__ ) || defined( __AVR_ATmega4809__ )

#endif // AVRLIBCPP_SUPPRESS_SFR_MACROS_MEGAAVR_0_SERIES_H

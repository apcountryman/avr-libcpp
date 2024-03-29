/**
 * avr-libcpp
 *
 * Copyright 2020-2024, Andrew Countryman <apcountryman@gmail.com> and the avr-libcpp
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
 * \brief avr-libcpp/suppress_sfr_macros/atmega2560 interface.
 */

#ifndef AVRLIBCPP_SUPPRESS_SFR_MACROS_ATMEGA2560_H
#define AVRLIBCPP_SUPPRESS_SFR_MACROS_ATMEGA2560_H

#include <avr/io.h>

#ifdef __AVR_ATmega2560__
#if AVRLIBCPP_SUPPRESS_SFR_MACROS

#ifdef ACBG
#undef ACBG
#endif // ACBG

#ifdef ACD
#undef ACD
#endif // ACD

#ifdef ACI
#undef ACI
#endif // ACI

#ifdef ACIC
#undef ACIC
#endif // ACIC

#ifdef ACIE
#undef ACIE
#endif // ACIE

#ifdef ACIS0
#undef ACIS0
#endif // ACIS0

#ifdef ACIS1
#undef ACIS1
#endif // ACIS1

#ifdef ACME
#undef ACME
#endif // ACME

#ifdef ACO
#undef ACO
#endif // ACO

#ifdef ACSR
#undef ACSR
#endif // ACSR

#ifdef ADATE
#undef ADATE
#endif // ADATE

#ifdef ADC
#undef ADC
#endif // ADC

#ifdef ADC0D
#undef ADC0D
#endif // ADC0D

#ifdef ADC10D
#undef ADC10D
#endif // ADC10D

#ifdef ADC11D
#undef ADC11D
#endif // ADC11D

#ifdef ADC12D
#undef ADC12D
#endif // ADC12D

#ifdef ADC13D
#undef ADC13D
#endif // ADC13D

#ifdef ADC14D
#undef ADC14D
#endif // ADC14D

#ifdef ADC15D
#undef ADC15D
#endif // ADC15D

#ifdef ADC1D
#undef ADC1D
#endif // ADC1D

#ifdef ADC2D
#undef ADC2D
#endif // ADC2D

#ifdef ADC3D
#undef ADC3D
#endif // ADC3D

#ifdef ADC4D
#undef ADC4D
#endif // ADC4D

#ifdef ADC5D
#undef ADC5D
#endif // ADC5D

#ifdef ADC6D
#undef ADC6D
#endif // ADC6D

#ifdef ADC7D
#undef ADC7D
#endif // ADC7D

#ifdef ADC8D
#undef ADC8D
#endif // ADC8D

#ifdef ADC9D
#undef ADC9D
#endif // ADC9D

#ifdef ADCH
#undef ADCH
#endif // ADCH

#ifdef ADCL
#undef ADCL
#endif // ADCL

#ifdef ADCSRA
#undef ADCSRA
#endif // ADCSRA

#ifdef ADCSRB
#undef ADCSRB
#endif // ADCSRB

#ifdef ADCW
#undef ADCW
#endif // ADCW

#ifdef ADEN
#undef ADEN
#endif // ADEN

#ifdef ADIE
#undef ADIE
#endif // ADIE

#ifdef ADIF
#undef ADIF
#endif // ADIF

#ifdef ADLAR
#undef ADLAR
#endif // ADLAR

#ifdef ADMUX
#undef ADMUX
#endif // ADMUX

#ifdef ADPS0
#undef ADPS0
#endif // ADPS0

#ifdef ADPS1
#undef ADPS1
#endif // ADPS1

#ifdef ADPS2
#undef ADPS2
#endif // ADPS2

#ifdef ADSC
#undef ADSC
#endif // ADSC

#ifdef ADTS0
#undef ADTS0
#endif // ADTS0

#ifdef ADTS1
#undef ADTS1
#endif // ADTS1

#ifdef ADTS2
#undef ADTS2
#endif // ADTS2

#ifdef AIN0D
#undef AIN0D
#endif // AIN0D

#ifdef AIN1D
#undef AIN1D
#endif // AIN1D

#ifdef AS2
#undef AS2
#endif // AS2

#ifdef ASSR
#undef ASSR
#endif // ASSR

#ifdef BLBSET
#undef BLBSET
#endif // BLBSET

#ifdef BORF
#undef BORF
#endif // BORF

#ifdef CLKPCE
#undef CLKPCE
#endif // CLKPCE

#ifdef CLKPR
#undef CLKPR
#endif // CLKPR

#ifdef CLKPS0
#undef CLKPS0
#endif // CLKPS0

#ifdef CLKPS1
#undef CLKPS1
#endif // CLKPS1

#ifdef CLKPS2
#undef CLKPS2
#endif // CLKPS2

#ifdef CLKPS3
#undef CLKPS3
#endif // CLKPS3

#ifdef COM0A0
#undef COM0A0
#endif // COM0A0

#ifdef COM0A1
#undef COM0A1
#endif // COM0A1

#ifdef COM0B0
#undef COM0B0
#endif // COM0B0

#ifdef COM0B1
#undef COM0B1
#endif // COM0B1

#ifdef COM1A0
#undef COM1A0
#endif // COM1A0

#ifdef COM1A1
#undef COM1A1
#endif // COM1A1

#ifdef COM1B0
#undef COM1B0
#endif // COM1B0

#ifdef COM1B1
#undef COM1B1
#endif // COM1B1

#ifdef COM1C0
#undef COM1C0
#endif // COM1C0

#ifdef COM1C1
#undef COM1C1
#endif // COM1C1

#ifdef COM2A0
#undef COM2A0
#endif // COM2A0

#ifdef COM2A1
#undef COM2A1
#endif // COM2A1

#ifdef COM2B0
#undef COM2B0
#endif // COM2B0

#ifdef COM2B1
#undef COM2B1
#endif // COM2B1

#ifdef COM3A0
#undef COM3A0
#endif // COM3A0

#ifdef COM3A1
#undef COM3A1
#endif // COM3A1

#ifdef COM3B0
#undef COM3B0
#endif // COM3B0

#ifdef COM3B1
#undef COM3B1
#endif // COM3B1

#ifdef COM3C0
#undef COM3C0
#endif // COM3C0

#ifdef COM3C1
#undef COM3C1
#endif // COM3C1

#ifdef COM4A0
#undef COM4A0
#endif // COM4A0

#ifdef COM4A1
#undef COM4A1
#endif // COM4A1

#ifdef COM4B0
#undef COM4B0
#endif // COM4B0

#ifdef COM4B1
#undef COM4B1
#endif // COM4B1

#ifdef COM4C0
#undef COM4C0
#endif // COM4C0

#ifdef COM4C1
#undef COM4C1
#endif // COM4C1

#ifdef COM5A0
#undef COM5A0
#endif // COM5A0

#ifdef COM5A1
#undef COM5A1
#endif // COM5A1

#ifdef COM5B0
#undef COM5B0
#endif // COM5B0

#ifdef COM5B1
#undef COM5B1
#endif // COM5B1

#ifdef COM5C0
#undef COM5C0
#endif // COM5C0

#ifdef COM5C1
#undef COM5C1
#endif // COM5C1

#ifdef CPHA
#undef CPHA
#endif // CPHA

#ifdef CPOL
#undef CPOL
#endif // CPOL

#ifdef CS00
#undef CS00
#endif // CS00

#ifdef CS01
#undef CS01
#endif // CS01

#ifdef CS02
#undef CS02
#endif // CS02

#ifdef CS10
#undef CS10
#endif // CS10

#ifdef CS11
#undef CS11
#endif // CS11

#ifdef CS12
#undef CS12
#endif // CS12

#ifdef CS20
#undef CS20
#endif // CS20

#ifdef CS21
#undef CS21
#endif // CS21

#ifdef CS22
#undef CS22
#endif // CS22

#ifdef CS30
#undef CS30
#endif // CS30

#ifdef CS31
#undef CS31
#endif // CS31

#ifdef CS32
#undef CS32
#endif // CS32

#ifdef CS40
#undef CS40
#endif // CS40

#ifdef CS41
#undef CS41
#endif // CS41

#ifdef CS42
#undef CS42
#endif // CS42

#ifdef CS50
#undef CS50
#endif // CS50

#ifdef CS51
#undef CS51
#endif // CS51

#ifdef CS52
#undef CS52
#endif // CS52

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

#ifdef DDA0
#undef DDA0
#endif // DDA0

#ifdef DDA1
#undef DDA1
#endif // DDA1

#ifdef DDA2
#undef DDA2
#endif // DDA2

#ifdef DDA3
#undef DDA3
#endif // DDA3

#ifdef DDA4
#undef DDA4
#endif // DDA4

#ifdef DDA5
#undef DDA5
#endif // DDA5

#ifdef DDA6
#undef DDA6
#endif // DDA6

#ifdef DDA7
#undef DDA7
#endif // DDA7

#ifdef DDB0
#undef DDB0
#endif // DDB0

#ifdef DDB1
#undef DDB1
#endif // DDB1

#ifdef DDB2
#undef DDB2
#endif // DDB2

#ifdef DDB3
#undef DDB3
#endif // DDB3

#ifdef DDB4
#undef DDB4
#endif // DDB4

#ifdef DDB5
#undef DDB5
#endif // DDB5

#ifdef DDB6
#undef DDB6
#endif // DDB6

#ifdef DDB7
#undef DDB7
#endif // DDB7

#ifdef DDC0
#undef DDC0
#endif // DDC0

#ifdef DDC1
#undef DDC1
#endif // DDC1

#ifdef DDC2
#undef DDC2
#endif // DDC2

#ifdef DDC3
#undef DDC3
#endif // DDC3

#ifdef DDC4
#undef DDC4
#endif // DDC4

#ifdef DDC5
#undef DDC5
#endif // DDC5

#ifdef DDC6
#undef DDC6
#endif // DDC6

#ifdef DDC7
#undef DDC7
#endif // DDC7

#ifdef DDD0
#undef DDD0
#endif // DDD0

#ifdef DDD1
#undef DDD1
#endif // DDD1

#ifdef DDD2
#undef DDD2
#endif // DDD2

#ifdef DDD3
#undef DDD3
#endif // DDD3

#ifdef DDD4
#undef DDD4
#endif // DDD4

#ifdef DDD5
#undef DDD5
#endif // DDD5

#ifdef DDD6
#undef DDD6
#endif // DDD6

#ifdef DDD7
#undef DDD7
#endif // DDD7

#ifdef DDE0
#undef DDE0
#endif // DDE0

#ifdef DDE1
#undef DDE1
#endif // DDE1

#ifdef DDE2
#undef DDE2
#endif // DDE2

#ifdef DDE3
#undef DDE3
#endif // DDE3

#ifdef DDE4
#undef DDE4
#endif // DDE4

#ifdef DDE5
#undef DDE5
#endif // DDE5

#ifdef DDE6
#undef DDE6
#endif // DDE6

#ifdef DDE7
#undef DDE7
#endif // DDE7

#ifdef DDF0
#undef DDF0
#endif // DDF0

#ifdef DDF1
#undef DDF1
#endif // DDF1

#ifdef DDF2
#undef DDF2
#endif // DDF2

#ifdef DDF3
#undef DDF3
#endif // DDF3

#ifdef DDF4
#undef DDF4
#endif // DDF4

#ifdef DDF5
#undef DDF5
#endif // DDF5

#ifdef DDF6
#undef DDF6
#endif // DDF6

#ifdef DDF7
#undef DDF7
#endif // DDF7

#ifdef DDG0
#undef DDG0
#endif // DDG0

#ifdef DDG1
#undef DDG1
#endif // DDG1

#ifdef DDG2
#undef DDG2
#endif // DDG2

#ifdef DDG3
#undef DDG3
#endif // DDG3

#ifdef DDG4
#undef DDG4
#endif // DDG4

#ifdef DDG5
#undef DDG5
#endif // DDG5

#ifdef DDH0
#undef DDH0
#endif // DDH0

#ifdef DDH1
#undef DDH1
#endif // DDH1

#ifdef DDH2
#undef DDH2
#endif // DDH2

#ifdef DDH3
#undef DDH3
#endif // DDH3

#ifdef DDH4
#undef DDH4
#endif // DDH4

#ifdef DDH5
#undef DDH5
#endif // DDH5

#ifdef DDH6
#undef DDH6
#endif // DDH6

#ifdef DDH7
#undef DDH7
#endif // DDH7

#ifdef DDJ0
#undef DDJ0
#endif // DDJ0

#ifdef DDJ1
#undef DDJ1
#endif // DDJ1

#ifdef DDJ2
#undef DDJ2
#endif // DDJ2

#ifdef DDJ3
#undef DDJ3
#endif // DDJ3

#ifdef DDJ4
#undef DDJ4
#endif // DDJ4

#ifdef DDJ5
#undef DDJ5
#endif // DDJ5

#ifdef DDJ6
#undef DDJ6
#endif // DDJ6

#ifdef DDJ7
#undef DDJ7
#endif // DDJ7

#ifdef DDK0
#undef DDK0
#endif // DDK0

#ifdef DDK1
#undef DDK1
#endif // DDK1

#ifdef DDK2
#undef DDK2
#endif // DDK2

#ifdef DDK3
#undef DDK3
#endif // DDK3

#ifdef DDK4
#undef DDK4
#endif // DDK4

#ifdef DDK5
#undef DDK5
#endif // DDK5

#ifdef DDK6
#undef DDK6
#endif // DDK6

#ifdef DDK7
#undef DDK7
#endif // DDK7

#ifdef DDL0
#undef DDL0
#endif // DDL0

#ifdef DDL1
#undef DDL1
#endif // DDL1

#ifdef DDL2
#undef DDL2
#endif // DDL2

#ifdef DDL3
#undef DDL3
#endif // DDL3

#ifdef DDL4
#undef DDL4
#endif // DDL4

#ifdef DDL5
#undef DDL5
#endif // DDL5

#ifdef DDL6
#undef DDL6
#endif // DDL6

#ifdef DDL7
#undef DDL7
#endif // DDL7

#ifdef DDRA
#undef DDRA
#endif // DDRA

#ifdef DDRB
#undef DDRB
#endif // DDRB

#ifdef DDRC
#undef DDRC
#endif // DDRC

#ifdef DDRD
#undef DDRD
#endif // DDRD

#ifdef DDRE
#undef DDRE
#endif // DDRE

#ifdef DDRF
#undef DDRF
#endif // DDRF

#ifdef DDRG
#undef DDRG
#endif // DDRG

#ifdef DDRH
#undef DDRH
#endif // DDRH

#ifdef DDRJ
#undef DDRJ
#endif // DDRJ

#ifdef DDRK
#undef DDRK
#endif // DDRK

#ifdef DDRL
#undef DDRL
#endif // DDRL

#ifdef DIDR0
#undef DIDR0
#endif // DIDR0

#ifdef DIDR1
#undef DIDR1
#endif // DIDR1

#ifdef DIDR2
#undef DIDR2
#endif // DIDR2

#ifdef DOR0
#undef DOR0
#endif // DOR0

#ifdef DOR1
#undef DOR1
#endif // DOR1

#ifdef DOR2
#undef DOR2
#endif // DOR2

#ifdef DOR3
#undef DOR3
#endif // DOR3

#ifdef DORD
#undef DORD
#endif // DORD

#ifdef EEAR
#undef EEAR
#endif // EEAR

#ifdef EEARH
#undef EEARH
#endif // EEARH

#ifdef EEARL
#undef EEARL
#endif // EEARL

#ifdef EECR
#undef EECR
#endif // EECR

#ifdef EEDR
#undef EEDR
#endif // EEDR

#ifdef EEMPE
#undef EEMPE
#endif // EEMPE

#ifdef EEPE
#undef EEPE
#endif // EEPE

#ifdef EEPM0
#undef EEPM0
#endif // EEPM0

#ifdef EEPM1
#undef EEPM1
#endif // EEPM1

#ifdef EERE
#undef EERE
#endif // EERE

#ifdef EERIE
#undef EERIE
#endif // EERIE

#ifdef EICRA
#undef EICRA
#endif // EICRA

#ifdef EICRB
#undef EICRB
#endif // EICRB

#ifdef EIFR
#undef EIFR
#endif // EIFR

#ifdef EIMSK
#undef EIMSK
#endif // EIMSK

#ifdef EIND
#undef EIND
#endif // EIND

#ifdef EIND0
#undef EIND0
#endif // EIND0

#ifdef EXCLK
#undef EXCLK
#endif // EXCLK

#ifdef EXTRF
#undef EXTRF
#endif // EXTRF

#ifdef FE0
#undef FE0
#endif // FE0

#ifdef FE1
#undef FE1
#endif // FE1

#ifdef FE2
#undef FE2
#endif // FE2

#ifdef FE3
#undef FE3
#endif // FE3

#ifdef FOC0A
#undef FOC0A
#endif // FOC0A

#ifdef FOC0B
#undef FOC0B
#endif // FOC0B

#ifdef FOC1A
#undef FOC1A
#endif // FOC1A

#ifdef FOC1B
#undef FOC1B
#endif // FOC1B

#ifdef FOC1C
#undef FOC1C
#endif // FOC1C

#ifdef FOC2A
#undef FOC2A
#endif // FOC2A

#ifdef FOC2B
#undef FOC2B
#endif // FOC2B

#ifdef FOC3A
#undef FOC3A
#endif // FOC3A

#ifdef FOC3B
#undef FOC3B
#endif // FOC3B

#ifdef FOC3C
#undef FOC3C
#endif // FOC3C

#ifdef FOC4A
#undef FOC4A
#endif // FOC4A

#ifdef FOC4B
#undef FOC4B
#endif // FOC4B

#ifdef FOC4C
#undef FOC4C
#endif // FOC4C

#ifdef FOC5A
#undef FOC5A
#endif // FOC5A

#ifdef FOC5B
#undef FOC5B
#endif // FOC5B

#ifdef FOC5C
#undef FOC5C
#endif // FOC5C

#ifdef GPIOR0
#undef GPIOR0
#endif // GPIOR0

#ifdef GPIOR1
#undef GPIOR1
#endif // GPIOR1

#ifdef GPIOR2
#undef GPIOR2
#endif // GPIOR2

#ifdef GTCCR
#undef GTCCR
#endif // GTCCR

#ifdef ICES1
#undef ICES1
#endif // ICES1

#ifdef ICES3
#undef ICES3
#endif // ICES3

#ifdef ICES4
#undef ICES4
#endif // ICES4

#ifdef ICES5
#undef ICES5
#endif // ICES5

#ifdef ICF1
#undef ICF1
#endif // ICF1

#ifdef ICF3
#undef ICF3
#endif // ICF3

#ifdef ICF4
#undef ICF4
#endif // ICF4

#ifdef ICF5
#undef ICF5
#endif // ICF5

#ifdef ICIE1
#undef ICIE1
#endif // ICIE1

#ifdef ICIE3
#undef ICIE3
#endif // ICIE3

#ifdef ICIE4
#undef ICIE4
#endif // ICIE4

#ifdef ICIE5
#undef ICIE5
#endif // ICIE5

#ifdef ICNC1
#undef ICNC1
#endif // ICNC1

#ifdef ICNC3
#undef ICNC3
#endif // ICNC3

#ifdef ICNC4
#undef ICNC4
#endif // ICNC4

#ifdef ICNC5
#undef ICNC5
#endif // ICNC5

#ifdef ICR1
#undef ICR1
#endif // ICR1

#ifdef ICR1H
#undef ICR1H
#endif // ICR1H

#ifdef ICR1L
#undef ICR1L
#endif // ICR1L

#ifdef ICR3
#undef ICR3
#endif // ICR3

#ifdef ICR3H
#undef ICR3H
#endif // ICR3H

#ifdef ICR3L
#undef ICR3L
#endif // ICR3L

#ifdef ICR4
#undef ICR4
#endif // ICR4

#ifdef ICR4H
#undef ICR4H
#endif // ICR4H

#ifdef ICR4L
#undef ICR4L
#endif // ICR4L

#ifdef ICR5
#undef ICR5
#endif // ICR5

#ifdef ICR5H
#undef ICR5H
#endif // ICR5H

#ifdef ICR5L
#undef ICR5L
#endif // ICR5L

#ifdef IDRD
#undef IDRD
#endif // IDRD

#ifdef INT0
#undef INT0
#endif // INT0

#ifdef INT1
#undef INT1
#endif // INT1

#ifdef INT2
#undef INT2
#endif // INT2

#ifdef INT3
#undef INT3
#endif // INT3

#ifdef INT4
#undef INT4
#endif // INT4

#ifdef INT5
#undef INT5
#endif // INT5

#ifdef INT6
#undef INT6
#endif // INT6

#ifdef INT7
#undef INT7
#endif // INT7

#ifdef INTF0
#undef INTF0
#endif // INTF0

#ifdef INTF1
#undef INTF1
#endif // INTF1

#ifdef INTF2
#undef INTF2
#endif // INTF2

#ifdef INTF3
#undef INTF3
#endif // INTF3

#ifdef INTF4
#undef INTF4
#endif // INTF4

#ifdef INTF5
#undef INTF5
#endif // INTF5

#ifdef INTF6
#undef INTF6
#endif // INTF6

#ifdef INTF7
#undef INTF7
#endif // INTF7

#ifdef ISC00
#undef ISC00
#endif // ISC00

#ifdef ISC01
#undef ISC01
#endif // ISC01

#ifdef ISC10
#undef ISC10
#endif // ISC10

#ifdef ISC11
#undef ISC11
#endif // ISC11

#ifdef ISC20
#undef ISC20
#endif // ISC20

#ifdef ISC21
#undef ISC21
#endif // ISC21

#ifdef ISC30
#undef ISC30
#endif // ISC30

#ifdef ISC31
#undef ISC31
#endif // ISC31

#ifdef ISC40
#undef ISC40
#endif // ISC40

#ifdef ISC41
#undef ISC41
#endif // ISC41

#ifdef ISC50
#undef ISC50
#endif // ISC50

#ifdef ISC51
#undef ISC51
#endif // ISC51

#ifdef ISC60
#undef ISC60
#endif // ISC60

#ifdef ISC61
#undef ISC61
#endif // ISC61

#ifdef ISC70
#undef ISC70
#endif // ISC70

#ifdef ISC71
#undef ISC71
#endif // ISC71

#ifdef IVCE
#undef IVCE
#endif // IVCE

#ifdef IVSEL
#undef IVSEL
#endif // IVSEL

#ifdef JTD
#undef JTD
#endif // JTD

#ifdef JTRF
#undef JTRF
#endif // JTRF

#ifdef MCUCR
#undef MCUCR
#endif // MCUCR

#ifdef MCUSR
#undef MCUSR
#endif // MCUSR

#ifdef MPCM0
#undef MPCM0
#endif // MPCM0

#ifdef MPCM1
#undef MPCM1
#endif // MPCM1

#ifdef MPCM2
#undef MPCM2
#endif // MPCM2

#ifdef MPCM3
#undef MPCM3
#endif // MPCM3

#ifdef MSTR
#undef MSTR
#endif // MSTR

#ifdef MUX0
#undef MUX0
#endif // MUX0

#ifdef MUX1
#undef MUX1
#endif // MUX1

#ifdef MUX2
#undef MUX2
#endif // MUX2

#ifdef MUX3
#undef MUX3
#endif // MUX3

#ifdef MUX4
#undef MUX4
#endif // MUX4

#ifdef MUX5
#undef MUX5
#endif // MUX5

#ifdef OCDR
#undef OCDR
#endif // OCDR

#ifdef OCDR0
#undef OCDR0
#endif // OCDR0

#ifdef OCDR1
#undef OCDR1
#endif // OCDR1

#ifdef OCDR2
#undef OCDR2
#endif // OCDR2

#ifdef OCDR3
#undef OCDR3
#endif // OCDR3

#ifdef OCDR4
#undef OCDR4
#endif // OCDR4

#ifdef OCDR5
#undef OCDR5
#endif // OCDR5

#ifdef OCDR6
#undef OCDR6
#endif // OCDR6

#ifdef OCDR7
#undef OCDR7
#endif // OCDR7

#ifdef OCF0A
#undef OCF0A
#endif // OCF0A

#ifdef OCF0B
#undef OCF0B
#endif // OCF0B

#ifdef OCF1A
#undef OCF1A
#endif // OCF1A

#ifdef OCF1B
#undef OCF1B
#endif // OCF1B

#ifdef OCF1C
#undef OCF1C
#endif // OCF1C

#ifdef OCF2A
#undef OCF2A
#endif // OCF2A

#ifdef OCF2B
#undef OCF2B
#endif // OCF2B

#ifdef OCF3A
#undef OCF3A
#endif // OCF3A

#ifdef OCF3B
#undef OCF3B
#endif // OCF3B

#ifdef OCF3C
#undef OCF3C
#endif // OCF3C

#ifdef OCF4A
#undef OCF4A
#endif // OCF4A

#ifdef OCF4B
#undef OCF4B
#endif // OCF4B

#ifdef OCF4C
#undef OCF4C
#endif // OCF4C

#ifdef OCF5A
#undef OCF5A
#endif // OCF5A

#ifdef OCF5B
#undef OCF5B
#endif // OCF5B

#ifdef OCF5C
#undef OCF5C
#endif // OCF5C

#ifdef OCIE0A
#undef OCIE0A
#endif // OCIE0A

#ifdef OCIE0B
#undef OCIE0B
#endif // OCIE0B

#ifdef OCIE1A
#undef OCIE1A
#endif // OCIE1A

#ifdef OCIE1B
#undef OCIE1B
#endif // OCIE1B

#ifdef OCIE1C
#undef OCIE1C
#endif // OCIE1C

#ifdef OCIE2A
#undef OCIE2A
#endif // OCIE2A

#ifdef OCIE2B
#undef OCIE2B
#endif // OCIE2B

#ifdef OCIE3A
#undef OCIE3A
#endif // OCIE3A

#ifdef OCIE3B
#undef OCIE3B
#endif // OCIE3B

#ifdef OCIE3C
#undef OCIE3C
#endif // OCIE3C

#ifdef OCIE4A
#undef OCIE4A
#endif // OCIE4A

#ifdef OCIE4B
#undef OCIE4B
#endif // OCIE4B

#ifdef OCIE4C
#undef OCIE4C
#endif // OCIE4C

#ifdef OCIE5A
#undef OCIE5A
#endif // OCIE5A

#ifdef OCIE5B
#undef OCIE5B
#endif // OCIE5B

#ifdef OCIE5C
#undef OCIE5C
#endif // OCIE5C

#ifdef OCR0A
#undef OCR0A
#endif // OCR0A

#ifdef OCR0B
#undef OCR0B
#endif // OCR0B

#ifdef OCR1A
#undef OCR1A
#endif // OCR1A

#ifdef OCR1AH
#undef OCR1AH
#endif // OCR1AH

#ifdef OCR1AL
#undef OCR1AL
#endif // OCR1AL

#ifdef OCR1B
#undef OCR1B
#endif // OCR1B

#ifdef OCR1BH
#undef OCR1BH
#endif // OCR1BH

#ifdef OCR1BL
#undef OCR1BL
#endif // OCR1BL

#ifdef OCR1C
#undef OCR1C
#endif // OCR1C

#ifdef OCR1CH
#undef OCR1CH
#endif // OCR1CH

#ifdef OCR1CL
#undef OCR1CL
#endif // OCR1CL

#ifdef OCR2A
#undef OCR2A
#endif // OCR2A

#ifdef OCR2AUB
#undef OCR2AUB
#endif // OCR2AUB

#ifdef OCR2B
#undef OCR2B
#endif // OCR2B

#ifdef OCR2BUB
#undef OCR2BUB
#endif // OCR2BUB

#ifdef OCR3A
#undef OCR3A
#endif // OCR3A

#ifdef OCR3AH
#undef OCR3AH
#endif // OCR3AH

#ifdef OCR3AL
#undef OCR3AL
#endif // OCR3AL

#ifdef OCR3B
#undef OCR3B
#endif // OCR3B

#ifdef OCR3BH
#undef OCR3BH
#endif // OCR3BH

#ifdef OCR3BL
#undef OCR3BL
#endif // OCR3BL

#ifdef OCR3C
#undef OCR3C
#endif // OCR3C

#ifdef OCR3CH
#undef OCR3CH
#endif // OCR3CH

#ifdef OCR3CL
#undef OCR3CL
#endif // OCR3CL

#ifdef OCR4A
#undef OCR4A
#endif // OCR4A

#ifdef OCR4AH
#undef OCR4AH
#endif // OCR4AH

#ifdef OCR4AL
#undef OCR4AL
#endif // OCR4AL

#ifdef OCR4B
#undef OCR4B
#endif // OCR4B

#ifdef OCR4BH
#undef OCR4BH
#endif // OCR4BH

#ifdef OCR4BL
#undef OCR4BL
#endif // OCR4BL

#ifdef OCR4C
#undef OCR4C
#endif // OCR4C

#ifdef OCR4CH
#undef OCR4CH
#endif // OCR4CH

#ifdef OCR4CL
#undef OCR4CL
#endif // OCR4CL

#ifdef OCR5A
#undef OCR5A
#endif // OCR5A

#ifdef OCR5AH
#undef OCR5AH
#endif // OCR5AH

#ifdef OCR5AL
#undef OCR5AL
#endif // OCR5AL

#ifdef OCR5B
#undef OCR5B
#endif // OCR5B

#ifdef OCR5BH
#undef OCR5BH
#endif // OCR5BH

#ifdef OCR5BL
#undef OCR5BL
#endif // OCR5BL

#ifdef OCR5C
#undef OCR5C
#endif // OCR5C

#ifdef OCR5CH
#undef OCR5CH
#endif // OCR5CH

#ifdef OCR5CL
#undef OCR5CL
#endif // OCR5CL

#ifdef OSCCAL
#undef OSCCAL
#endif // OSCCAL

#ifdef PA0
#undef PA0
#endif // PA0

#ifdef PA1
#undef PA1
#endif // PA1

#ifdef PA2
#undef PA2
#endif // PA2

#ifdef PA3
#undef PA3
#endif // PA3

#ifdef PA4
#undef PA4
#endif // PA4

#ifdef PA5
#undef PA5
#endif // PA5

#ifdef PA6
#undef PA6
#endif // PA6

#ifdef PA7
#undef PA7
#endif // PA7

#ifdef PB0
#undef PB0
#endif // PB0

#ifdef PB1
#undef PB1
#endif // PB1

#ifdef PB2
#undef PB2
#endif // PB2

#ifdef PB3
#undef PB3
#endif // PB3

#ifdef PB4
#undef PB4
#endif // PB4

#ifdef PB5
#undef PB5
#endif // PB5

#ifdef PB6
#undef PB6
#endif // PB6

#ifdef PB7
#undef PB7
#endif // PB7

#ifdef PC0
#undef PC0
#endif // PC0

#ifdef PC1
#undef PC1
#endif // PC1

#ifdef PC2
#undef PC2
#endif // PC2

#ifdef PC3
#undef PC3
#endif // PC3

#ifdef PC4
#undef PC4
#endif // PC4

#ifdef PC5
#undef PC5
#endif // PC5

#ifdef PC6
#undef PC6
#endif // PC6

#ifdef PC7
#undef PC7
#endif // PC7

#ifdef PCICR
#undef PCICR
#endif // PCICR

#ifdef PCIE0
#undef PCIE0
#endif // PCIE0

#ifdef PCIE1
#undef PCIE1
#endif // PCIE1

#ifdef PCIE2
#undef PCIE2
#endif // PCIE2

#ifdef PCIF0
#undef PCIF0
#endif // PCIF0

#ifdef PCIF1
#undef PCIF1
#endif // PCIF1

#ifdef PCIF2
#undef PCIF2
#endif // PCIF2

#ifdef PCIFR
#undef PCIFR
#endif // PCIFR

#ifdef PCINT0
#undef PCINT0
#endif // PCINT0

#ifdef PCINT1
#undef PCINT1
#endif // PCINT1

#ifdef PCINT10
#undef PCINT10
#endif // PCINT10

#ifdef PCINT11
#undef PCINT11
#endif // PCINT11

#ifdef PCINT12
#undef PCINT12
#endif // PCINT12

#ifdef PCINT13
#undef PCINT13
#endif // PCINT13

#ifdef PCINT14
#undef PCINT14
#endif // PCINT14

#ifdef PCINT15
#undef PCINT15
#endif // PCINT15

#ifdef PCINT16
#undef PCINT16
#endif // PCINT16

#ifdef PCINT17
#undef PCINT17
#endif // PCINT17

#ifdef PCINT18
#undef PCINT18
#endif // PCINT18

#ifdef PCINT19
#undef PCINT19
#endif // PCINT19

#ifdef PCINT2
#undef PCINT2
#endif // PCINT2

#ifdef PCINT20
#undef PCINT20
#endif // PCINT20

#ifdef PCINT21
#undef PCINT21
#endif // PCINT21

#ifdef PCINT22
#undef PCINT22
#endif // PCINT22

#ifdef PCINT23
#undef PCINT23
#endif // PCINT23

#ifdef PCINT3
#undef PCINT3
#endif // PCINT3

#ifdef PCINT4
#undef PCINT4
#endif // PCINT4

#ifdef PCINT5
#undef PCINT5
#endif // PCINT5

#ifdef PCINT6
#undef PCINT6
#endif // PCINT6

#ifdef PCINT7
#undef PCINT7
#endif // PCINT7

#ifdef PCINT8
#undef PCINT8
#endif // PCINT8

#ifdef PCINT9
#undef PCINT9
#endif // PCINT9

#ifdef PCMSK0
#undef PCMSK0
#endif // PCMSK0

#ifdef PCMSK1
#undef PCMSK1
#endif // PCMSK1

#ifdef PCMSK2
#undef PCMSK2
#endif // PCMSK2

#ifdef PD0
#undef PD0
#endif // PD0

#ifdef PD1
#undef PD1
#endif // PD1

#ifdef PD2
#undef PD2
#endif // PD2

#ifdef PD3
#undef PD3
#endif // PD3

#ifdef PD4
#undef PD4
#endif // PD4

#ifdef PD5
#undef PD5
#endif // PD5

#ifdef PD6
#undef PD6
#endif // PD6

#ifdef PD7
#undef PD7
#endif // PD7

#ifdef PE0
#undef PE0
#endif // PE0

#ifdef PE1
#undef PE1
#endif // PE1

#ifdef PE2
#undef PE2
#endif // PE2

#ifdef PE3
#undef PE3
#endif // PE3

#ifdef PE4
#undef PE4
#endif // PE4

#ifdef PE5
#undef PE5
#endif // PE5

#ifdef PE6
#undef PE6
#endif // PE6

#ifdef PE7
#undef PE7
#endif // PE7

#ifdef PF0
#undef PF0
#endif // PF0

#ifdef PF1
#undef PF1
#endif // PF1

#ifdef PF2
#undef PF2
#endif // PF2

#ifdef PF3
#undef PF3
#endif // PF3

#ifdef PF4
#undef PF4
#endif // PF4

#ifdef PF5
#undef PF5
#endif // PF5

#ifdef PF6
#undef PF6
#endif // PF6

#ifdef PF7
#undef PF7
#endif // PF7

#ifdef PG0
#undef PG0
#endif // PG0

#ifdef PG1
#undef PG1
#endif // PG1

#ifdef PG2
#undef PG2
#endif // PG2

#ifdef PG3
#undef PG3
#endif // PG3

#ifdef PG4
#undef PG4
#endif // PG4

#ifdef PG5
#undef PG5
#endif // PG5

#ifdef PGERS
#undef PGERS
#endif // PGERS

#ifdef PGWRT
#undef PGWRT
#endif // PGWRT

#ifdef PH0
#undef PH0
#endif // PH0

#ifdef PH1
#undef PH1
#endif // PH1

#ifdef PH2
#undef PH2
#endif // PH2

#ifdef PH3
#undef PH3
#endif // PH3

#ifdef PH4
#undef PH4
#endif // PH4

#ifdef PH5
#undef PH5
#endif // PH5

#ifdef PH6
#undef PH6
#endif // PH6

#ifdef PH7
#undef PH7
#endif // PH7

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

#ifdef PINA
#undef PINA
#endif // PINA

#ifdef PINA0
#undef PINA0
#endif // PINA0

#ifdef PINA1
#undef PINA1
#endif // PINA1

#ifdef PINA2
#undef PINA2
#endif // PINA2

#ifdef PINA3
#undef PINA3
#endif // PINA3

#ifdef PINA4
#undef PINA4
#endif // PINA4

#ifdef PINA5
#undef PINA5
#endif // PINA5

#ifdef PINA6
#undef PINA6
#endif // PINA6

#ifdef PINA7
#undef PINA7
#endif // PINA7

#ifdef PINB
#undef PINB
#endif // PINB

#ifdef PINB0
#undef PINB0
#endif // PINB0

#ifdef PINB1
#undef PINB1
#endif // PINB1

#ifdef PINB2
#undef PINB2
#endif // PINB2

#ifdef PINB3
#undef PINB3
#endif // PINB3

#ifdef PINB4
#undef PINB4
#endif // PINB4

#ifdef PINB5
#undef PINB5
#endif // PINB5

#ifdef PINB6
#undef PINB6
#endif // PINB6

#ifdef PINB7
#undef PINB7
#endif // PINB7

#ifdef PINC
#undef PINC
#endif // PINC

#ifdef PINC0
#undef PINC0
#endif // PINC0

#ifdef PINC1
#undef PINC1
#endif // PINC1

#ifdef PINC2
#undef PINC2
#endif // PINC2

#ifdef PINC3
#undef PINC3
#endif // PINC3

#ifdef PINC4
#undef PINC4
#endif // PINC4

#ifdef PINC5
#undef PINC5
#endif // PINC5

#ifdef PINC6
#undef PINC6
#endif // PINC6

#ifdef PINC7
#undef PINC7
#endif // PINC7

#ifdef PIND
#undef PIND
#endif // PIND

#ifdef PIND0
#undef PIND0
#endif // PIND0

#ifdef PIND1
#undef PIND1
#endif // PIND1

#ifdef PIND2
#undef PIND2
#endif // PIND2

#ifdef PIND3
#undef PIND3
#endif // PIND3

#ifdef PIND4
#undef PIND4
#endif // PIND4

#ifdef PIND5
#undef PIND5
#endif // PIND5

#ifdef PIND6
#undef PIND6
#endif // PIND6

#ifdef PIND7
#undef PIND7
#endif // PIND7

#ifdef PINE
#undef PINE
#endif // PINE

#ifdef PINE0
#undef PINE0
#endif // PINE0

#ifdef PINE1
#undef PINE1
#endif // PINE1

#ifdef PINE2
#undef PINE2
#endif // PINE2

#ifdef PINE3
#undef PINE3
#endif // PINE3

#ifdef PINE4
#undef PINE4
#endif // PINE4

#ifdef PINE5
#undef PINE5
#endif // PINE5

#ifdef PINE6
#undef PINE6
#endif // PINE6

#ifdef PINE7
#undef PINE7
#endif // PINE7

#ifdef PINF
#undef PINF
#endif // PINF

#ifdef PINF0
#undef PINF0
#endif // PINF0

#ifdef PINF1
#undef PINF1
#endif // PINF1

#ifdef PINF2
#undef PINF2
#endif // PINF2

#ifdef PINF3
#undef PINF3
#endif // PINF3

#ifdef PINF4
#undef PINF4
#endif // PINF4

#ifdef PINF5
#undef PINF5
#endif // PINF5

#ifdef PINF6
#undef PINF6
#endif // PINF6

#ifdef PINF7
#undef PINF7
#endif // PINF7

#ifdef PING
#undef PING
#endif // PING

#ifdef PING0
#undef PING0
#endif // PING0

#ifdef PING1
#undef PING1
#endif // PING1

#ifdef PING2
#undef PING2
#endif // PING2

#ifdef PING3
#undef PING3
#endif // PING3

#ifdef PING4
#undef PING4
#endif // PING4

#ifdef PING5
#undef PING5
#endif // PING5

#ifdef PINH
#undef PINH
#endif // PINH

#ifdef PINH0
#undef PINH0
#endif // PINH0

#ifdef PINH1
#undef PINH1
#endif // PINH1

#ifdef PINH2
#undef PINH2
#endif // PINH2

#ifdef PINH3
#undef PINH3
#endif // PINH3

#ifdef PINH4
#undef PINH4
#endif // PINH4

#ifdef PINH5
#undef PINH5
#endif // PINH5

#ifdef PINH6
#undef PINH6
#endif // PINH6

#ifdef PINH7
#undef PINH7
#endif // PINH7

#ifdef PINJ
#undef PINJ
#endif // PINJ

#ifdef PINJ0
#undef PINJ0
#endif // PINJ0

#ifdef PINJ1
#undef PINJ1
#endif // PINJ1

#ifdef PINJ2
#undef PINJ2
#endif // PINJ2

#ifdef PINJ3
#undef PINJ3
#endif // PINJ3

#ifdef PINJ4
#undef PINJ4
#endif // PINJ4

#ifdef PINJ5
#undef PINJ5
#endif // PINJ5

#ifdef PINJ6
#undef PINJ6
#endif // PINJ6

#ifdef PINJ7
#undef PINJ7
#endif // PINJ7

#ifdef PINK
#undef PINK
#endif // PINK

#ifdef PINK0
#undef PINK0
#endif // PINK0

#ifdef PINK1
#undef PINK1
#endif // PINK1

#ifdef PINK2
#undef PINK2
#endif // PINK2

#ifdef PINK3
#undef PINK3
#endif // PINK3

#ifdef PINK4
#undef PINK4
#endif // PINK4

#ifdef PINK5
#undef PINK5
#endif // PINK5

#ifdef PINK6
#undef PINK6
#endif // PINK6

#ifdef PINK7
#undef PINK7
#endif // PINK7

#ifdef PINL
#undef PINL
#endif // PINL

#ifdef PINL0
#undef PINL0
#endif // PINL0

#ifdef PINL1
#undef PINL1
#endif // PINL1

#ifdef PINL2
#undef PINL2
#endif // PINL2

#ifdef PINL3
#undef PINL3
#endif // PINL3

#ifdef PINL4
#undef PINL4
#endif // PINL4

#ifdef PINL5
#undef PINL5
#endif // PINL5

#ifdef PINL6
#undef PINL6
#endif // PINL6

#ifdef PINL7
#undef PINL7
#endif // PINL7

#ifdef PJ0
#undef PJ0
#endif // PJ0

#ifdef PJ1
#undef PJ1
#endif // PJ1

#ifdef PJ2
#undef PJ2
#endif // PJ2

#ifdef PJ3
#undef PJ3
#endif // PJ3

#ifdef PJ4
#undef PJ4
#endif // PJ4

#ifdef PJ5
#undef PJ5
#endif // PJ5

#ifdef PJ6
#undef PJ6
#endif // PJ6

#ifdef PJ7
#undef PJ7
#endif // PJ7

#ifdef PK0
#undef PK0
#endif // PK0

#ifdef PK1
#undef PK1
#endif // PK1

#ifdef PK2
#undef PK2
#endif // PK2

#ifdef PK3
#undef PK3
#endif // PK3

#ifdef PK4
#undef PK4
#endif // PK4

#ifdef PK5
#undef PK5
#endif // PK5

#ifdef PK6
#undef PK6
#endif // PK6

#ifdef PK7
#undef PK7
#endif // PK7

#ifdef PL0
#undef PL0
#endif // PL0

#ifdef PL1
#undef PL1
#endif // PL1

#ifdef PL2
#undef PL2
#endif // PL2

#ifdef PL3
#undef PL3
#endif // PL3

#ifdef PL4
#undef PL4
#endif // PL4

#ifdef PL5
#undef PL5
#endif // PL5

#ifdef PL6
#undef PL6
#endif // PL6

#ifdef PL7
#undef PL7
#endif // PL7

#ifdef PORF
#undef PORF
#endif // PORF

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

#ifdef PORTA0
#undef PORTA0
#endif // PORTA0

#ifdef PORTA1
#undef PORTA1
#endif // PORTA1

#ifdef PORTA2
#undef PORTA2
#endif // PORTA2

#ifdef PORTA3
#undef PORTA3
#endif // PORTA3

#ifdef PORTA4
#undef PORTA4
#endif // PORTA4

#ifdef PORTA5
#undef PORTA5
#endif // PORTA5

#ifdef PORTA6
#undef PORTA6
#endif // PORTA6

#ifdef PORTA7
#undef PORTA7
#endif // PORTA7

#ifdef PORTB
#undef PORTB
#endif // PORTB

#ifdef PORTB0
#undef PORTB0
#endif // PORTB0

#ifdef PORTB1
#undef PORTB1
#endif // PORTB1

#ifdef PORTB2
#undef PORTB2
#endif // PORTB2

#ifdef PORTB3
#undef PORTB3
#endif // PORTB3

#ifdef PORTB4
#undef PORTB4
#endif // PORTB4

#ifdef PORTB5
#undef PORTB5
#endif // PORTB5

#ifdef PORTB6
#undef PORTB6
#endif // PORTB6

#ifdef PORTB7
#undef PORTB7
#endif // PORTB7

#ifdef PORTC
#undef PORTC
#endif // PORTC

#ifdef PORTC0
#undef PORTC0
#endif // PORTC0

#ifdef PORTC1
#undef PORTC1
#endif // PORTC1

#ifdef PORTC2
#undef PORTC2
#endif // PORTC2

#ifdef PORTC3
#undef PORTC3
#endif // PORTC3

#ifdef PORTC4
#undef PORTC4
#endif // PORTC4

#ifdef PORTC5
#undef PORTC5
#endif // PORTC5

#ifdef PORTC6
#undef PORTC6
#endif // PORTC6

#ifdef PORTC7
#undef PORTC7
#endif // PORTC7

#ifdef PORTD
#undef PORTD
#endif // PORTD

#ifdef PORTD0
#undef PORTD0
#endif // PORTD0

#ifdef PORTD1
#undef PORTD1
#endif // PORTD1

#ifdef PORTD2
#undef PORTD2
#endif // PORTD2

#ifdef PORTD3
#undef PORTD3
#endif // PORTD3

#ifdef PORTD4
#undef PORTD4
#endif // PORTD4

#ifdef PORTD5
#undef PORTD5
#endif // PORTD5

#ifdef PORTD6
#undef PORTD6
#endif // PORTD6

#ifdef PORTD7
#undef PORTD7
#endif // PORTD7

#ifdef PORTE
#undef PORTE
#endif // PORTE

#ifdef PORTE0
#undef PORTE0
#endif // PORTE0

#ifdef PORTE1
#undef PORTE1
#endif // PORTE1

#ifdef PORTE2
#undef PORTE2
#endif // PORTE2

#ifdef PORTE3
#undef PORTE3
#endif // PORTE3

#ifdef PORTE4
#undef PORTE4
#endif // PORTE4

#ifdef PORTE5
#undef PORTE5
#endif // PORTE5

#ifdef PORTE6
#undef PORTE6
#endif // PORTE6

#ifdef PORTE7
#undef PORTE7
#endif // PORTE7

#ifdef PORTF
#undef PORTF
#endif // PORTF

#ifdef PORTF0
#undef PORTF0
#endif // PORTF0

#ifdef PORTF1
#undef PORTF1
#endif // PORTF1

#ifdef PORTF2
#undef PORTF2
#endif // PORTF2

#ifdef PORTF3
#undef PORTF3
#endif // PORTF3

#ifdef PORTF4
#undef PORTF4
#endif // PORTF4

#ifdef PORTF5
#undef PORTF5
#endif // PORTF5

#ifdef PORTF6
#undef PORTF6
#endif // PORTF6

#ifdef PORTF7
#undef PORTF7
#endif // PORTF7

#ifdef PORTG
#undef PORTG
#endif // PORTG

#ifdef PORTG0
#undef PORTG0
#endif // PORTG0

#ifdef PORTG1
#undef PORTG1
#endif // PORTG1

#ifdef PORTG2
#undef PORTG2
#endif // PORTG2

#ifdef PORTG3
#undef PORTG3
#endif // PORTG3

#ifdef PORTG4
#undef PORTG4
#endif // PORTG4

#ifdef PORTG5
#undef PORTG5
#endif // PORTG5

#ifdef PORTH
#undef PORTH
#endif // PORTH

#ifdef PORTH0
#undef PORTH0
#endif // PORTH0

#ifdef PORTH1
#undef PORTH1
#endif // PORTH1

#ifdef PORTH2
#undef PORTH2
#endif // PORTH2

#ifdef PORTH3
#undef PORTH3
#endif // PORTH3

#ifdef PORTH4
#undef PORTH4
#endif // PORTH4

#ifdef PORTH5
#undef PORTH5
#endif // PORTH5

#ifdef PORTH6
#undef PORTH6
#endif // PORTH6

#ifdef PORTH7
#undef PORTH7
#endif // PORTH7

#ifdef PORTJ
#undef PORTJ
#endif // PORTJ

#ifdef PORTJ0
#undef PORTJ0
#endif // PORTJ0

#ifdef PORTJ1
#undef PORTJ1
#endif // PORTJ1

#ifdef PORTJ2
#undef PORTJ2
#endif // PORTJ2

#ifdef PORTJ3
#undef PORTJ3
#endif // PORTJ3

#ifdef PORTJ4
#undef PORTJ4
#endif // PORTJ4

#ifdef PORTJ5
#undef PORTJ5
#endif // PORTJ5

#ifdef PORTJ6
#undef PORTJ6
#endif // PORTJ6

#ifdef PORTJ7
#undef PORTJ7
#endif // PORTJ7

#ifdef PORTK
#undef PORTK
#endif // PORTK

#ifdef PORTK0
#undef PORTK0
#endif // PORTK0

#ifdef PORTK1
#undef PORTK1
#endif // PORTK1

#ifdef PORTK2
#undef PORTK2
#endif // PORTK2

#ifdef PORTK3
#undef PORTK3
#endif // PORTK3

#ifdef PORTK4
#undef PORTK4
#endif // PORTK4

#ifdef PORTK5
#undef PORTK5
#endif // PORTK5

#ifdef PORTK6
#undef PORTK6
#endif // PORTK6

#ifdef PORTK7
#undef PORTK7
#endif // PORTK7

#ifdef PORTL
#undef PORTL
#endif // PORTL

#ifdef PORTL0
#undef PORTL0
#endif // PORTL0

#ifdef PORTL1
#undef PORTL1
#endif // PORTL1

#ifdef PORTL2
#undef PORTL2
#endif // PORTL2

#ifdef PORTL3
#undef PORTL3
#endif // PORTL3

#ifdef PORTL4
#undef PORTL4
#endif // PORTL4

#ifdef PORTL5
#undef PORTL5
#endif // PORTL5

#ifdef PORTL6
#undef PORTL6
#endif // PORTL6

#ifdef PORTL7
#undef PORTL7
#endif // PORTL7

#ifdef PRADC
#undef PRADC
#endif // PRADC

#ifdef PRR0
#undef PRR0
#endif // PRR0

#ifdef PRR1
#undef PRR1
#endif // PRR1

#ifdef PRSPI
#undef PRSPI
#endif // PRSPI

#ifdef PRTIM0
#undef PRTIM0
#endif // PRTIM0

#ifdef PRTIM1
#undef PRTIM1
#endif // PRTIM1

#ifdef PRTIM2
#undef PRTIM2
#endif // PRTIM2

#ifdef PRTIM3
#undef PRTIM3
#endif // PRTIM3

#ifdef PRTIM4
#undef PRTIM4
#endif // PRTIM4

#ifdef PRTIM5
#undef PRTIM5
#endif // PRTIM5

#ifdef PRTWI
#undef PRTWI
#endif // PRTWI

#ifdef PRUSART0
#undef PRUSART0
#endif // PRUSART0

#ifdef PRUSART1
#undef PRUSART1
#endif // PRUSART1

#ifdef PRUSART2
#undef PRUSART2
#endif // PRUSART2

#ifdef PRUSART3
#undef PRUSART3
#endif // PRUSART3

#ifdef PSRASY
#undef PSRASY
#endif // PSRASY

#ifdef PSRSYNC
#undef PSRSYNC
#endif // PSRSYNC

#ifdef PUD
#undef PUD
#endif // PUD

#ifdef RAMPZ
#undef RAMPZ
#endif // RAMPZ

#ifdef RAMPZ0
#undef RAMPZ0
#endif // RAMPZ0

#ifdef REFS0
#undef REFS0
#endif // REFS0

#ifdef REFS1
#undef REFS1
#endif // REFS1

#ifdef RWWSB
#undef RWWSB
#endif // RWWSB

#ifdef RWWSRE
#undef RWWSRE
#endif // RWWSRE

#ifdef RXB80
#undef RXB80
#endif // RXB80

#ifdef RXB81
#undef RXB81
#endif // RXB81

#ifdef RXB82
#undef RXB82
#endif // RXB82

#ifdef RXB83
#undef RXB83
#endif // RXB83

#ifdef RXC0
#undef RXC0
#endif // RXC0

#ifdef RXC1
#undef RXC1
#endif // RXC1

#ifdef RXC2
#undef RXC2
#endif // RXC2

#ifdef RXC3
#undef RXC3
#endif // RXC3

#ifdef RXCIE0
#undef RXCIE0
#endif // RXCIE0

#ifdef RXCIE1
#undef RXCIE1
#endif // RXCIE1

#ifdef RXCIE2
#undef RXCIE2
#endif // RXCIE2

#ifdef RXCIE3
#undef RXCIE3
#endif // RXCIE3

#ifdef RXEN0
#undef RXEN0
#endif // RXEN0

#ifdef RXEN1
#undef RXEN1
#endif // RXEN1

#ifdef RXEN2
#undef RXEN2
#endif // RXEN2

#ifdef RXEN3
#undef RXEN3
#endif // RXEN3

#ifdef SE
#undef SE
#endif // SE

#ifdef SIGRD
#undef SIGRD
#endif // SIGRD

#ifdef SM0
#undef SM0
#endif // SM0

#ifdef SM1
#undef SM1
#endif // SM1

#ifdef SM2
#undef SM2
#endif // SM2

#ifdef SMCR
#undef SMCR
#endif // SMCR

#ifdef SP
#undef SP
#endif // SP

#ifdef SPCR
#undef SPCR
#endif // SPCR

#ifdef SPDR
#undef SPDR
#endif // SPDR

#ifdef SPE
#undef SPE
#endif // SPE

#ifdef SPH
#undef SPH
#endif // SPH

#ifdef SPI2X
#undef SPI2X
#endif // SPI2X

#ifdef SPIE
#undef SPIE
#endif // SPIE

#ifdef SPIF
#undef SPIF
#endif // SPIF

#ifdef SPL
#undef SPL
#endif // SPL

#ifdef SPMCSR
#undef SPMCSR
#endif // SPMCSR

#ifdef SPMEN
#undef SPMEN
#endif // SPMEN

#ifdef SPMIE
#undef SPMIE
#endif // SPMIE

#ifdef SPR0
#undef SPR0
#endif // SPR0

#ifdef SPR1
#undef SPR1
#endif // SPR1

#ifdef SPSR
#undef SPSR
#endif // SPSR

#ifdef SRE
#undef SRE
#endif // SRE

#ifdef SREG
#undef SREG
#endif // SREG

#ifdef SRL0
#undef SRL0
#endif // SRL0

#ifdef SRL1
#undef SRL1
#endif // SRL1

#ifdef SRL2
#undef SRL2
#endif // SRL2

#ifdef SRW00
#undef SRW00
#endif // SRW00

#ifdef SRW01
#undef SRW01
#endif // SRW01

#ifdef SRW10
#undef SRW10
#endif // SRW10

#ifdef SRW11
#undef SRW11
#endif // SRW11

#ifdef TCCR0A
#undef TCCR0A
#endif // TCCR0A

#ifdef TCCR0B
#undef TCCR0B
#endif // TCCR0B

#ifdef TCCR1A
#undef TCCR1A
#endif // TCCR1A

#ifdef TCCR1B
#undef TCCR1B
#endif // TCCR1B

#ifdef TCCR1C
#undef TCCR1C
#endif // TCCR1C

#ifdef TCCR2A
#undef TCCR2A
#endif // TCCR2A

#ifdef TCCR2B
#undef TCCR2B
#endif // TCCR2B

#ifdef TCCR3A
#undef TCCR3A
#endif // TCCR3A

#ifdef TCCR3B
#undef TCCR3B
#endif // TCCR3B

#ifdef TCCR3C
#undef TCCR3C
#endif // TCCR3C

#ifdef TCCR4A
#undef TCCR4A
#endif // TCCR4A

#ifdef TCCR4B
#undef TCCR4B
#endif // TCCR4B

#ifdef TCCR4C
#undef TCCR4C
#endif // TCCR4C

#ifdef TCCR5A
#undef TCCR5A
#endif // TCCR5A

#ifdef TCCR5B
#undef TCCR5B
#endif // TCCR5B

#ifdef TCCR5C
#undef TCCR5C
#endif // TCCR5C

#ifdef TCN2UB
#undef TCN2UB
#endif // TCN2UB

#ifdef TCNT0
#undef TCNT0
#endif // TCNT0

#ifdef TCNT1
#undef TCNT1
#endif // TCNT1

#ifdef TCNT1H
#undef TCNT1H
#endif // TCNT1H

#ifdef TCNT1L
#undef TCNT1L
#endif // TCNT1L

#ifdef TCNT2
#undef TCNT2
#endif // TCNT2

#ifdef TCNT3
#undef TCNT3
#endif // TCNT3

#ifdef TCNT3H
#undef TCNT3H
#endif // TCNT3H

#ifdef TCNT3L
#undef TCNT3L
#endif // TCNT3L

#ifdef TCNT4
#undef TCNT4
#endif // TCNT4

#ifdef TCNT4H
#undef TCNT4H
#endif // TCNT4H

#ifdef TCNT4L
#undef TCNT4L
#endif // TCNT4L

#ifdef TCNT5
#undef TCNT5
#endif // TCNT5

#ifdef TCNT5H
#undef TCNT5H
#endif // TCNT5H

#ifdef TCNT5L
#undef TCNT5L
#endif // TCNT5L

#ifdef TCR2AUB
#undef TCR2AUB
#endif // TCR2AUB

#ifdef TCR2BUB
#undef TCR2BUB
#endif // TCR2BUB

#ifdef TIFR0
#undef TIFR0
#endif // TIFR0

#ifdef TIFR1
#undef TIFR1
#endif // TIFR1

#ifdef TIFR2
#undef TIFR2
#endif // TIFR2

#ifdef TIFR3
#undef TIFR3
#endif // TIFR3

#ifdef TIFR4
#undef TIFR4
#endif // TIFR4

#ifdef TIFR5
#undef TIFR5
#endif // TIFR5

#ifdef TIMSK0
#undef TIMSK0
#endif // TIMSK0

#ifdef TIMSK1
#undef TIMSK1
#endif // TIMSK1

#ifdef TIMSK2
#undef TIMSK2
#endif // TIMSK2

#ifdef TIMSK3
#undef TIMSK3
#endif // TIMSK3

#ifdef TIMSK4
#undef TIMSK4
#endif // TIMSK4

#ifdef TIMSK5
#undef TIMSK5
#endif // TIMSK5

#ifdef TOIE0
#undef TOIE0
#endif // TOIE0

#ifdef TOIE1
#undef TOIE1
#endif // TOIE1

#ifdef TOIE2
#undef TOIE2
#endif // TOIE2

#ifdef TOIE3
#undef TOIE3
#endif // TOIE3

#ifdef TOIE4
#undef TOIE4
#endif // TOIE4

#ifdef TOIE5
#undef TOIE5
#endif // TOIE5

#ifdef TOV0
#undef TOV0
#endif // TOV0

#ifdef TOV1
#undef TOV1
#endif // TOV1

#ifdef TOV2
#undef TOV2
#endif // TOV2

#ifdef TOV3
#undef TOV3
#endif // TOV3

#ifdef TOV4
#undef TOV4
#endif // TOV4

#ifdef TOV5
#undef TOV5
#endif // TOV5

#ifdef TSM
#undef TSM
#endif // TSM

#ifdef TWA0
#undef TWA0
#endif // TWA0

#ifdef TWA1
#undef TWA1
#endif // TWA1

#ifdef TWA2
#undef TWA2
#endif // TWA2

#ifdef TWA3
#undef TWA3
#endif // TWA3

#ifdef TWA4
#undef TWA4
#endif // TWA4

#ifdef TWA5
#undef TWA5
#endif // TWA5

#ifdef TWA6
#undef TWA6
#endif // TWA6

#ifdef TWAM0
#undef TWAM0
#endif // TWAM0

#ifdef TWAM1
#undef TWAM1
#endif // TWAM1

#ifdef TWAM2
#undef TWAM2
#endif // TWAM2

#ifdef TWAM3
#undef TWAM3
#endif // TWAM3

#ifdef TWAM4
#undef TWAM4
#endif // TWAM4

#ifdef TWAM5
#undef TWAM5
#endif // TWAM5

#ifdef TWAM6
#undef TWAM6
#endif // TWAM6

#ifdef TWAMR
#undef TWAMR
#endif // TWAMR

#ifdef TWAR
#undef TWAR
#endif // TWAR

#ifdef TWBR
#undef TWBR
#endif // TWBR

#ifdef TWCR
#undef TWCR
#endif // TWCR

#ifdef TWDR
#undef TWDR
#endif // TWDR

#ifdef TWEA
#undef TWEA
#endif // TWEA

#ifdef TWEN
#undef TWEN
#endif // TWEN

#ifdef TWGCE
#undef TWGCE
#endif // TWGCE

#ifdef TWIE
#undef TWIE
#endif // TWIE

#ifdef TWINT
#undef TWINT
#endif // TWINT

#ifdef TWPS0
#undef TWPS0
#endif // TWPS0

#ifdef TWPS1
#undef TWPS1
#endif // TWPS1

#ifdef TWS3
#undef TWS3
#endif // TWS3

#ifdef TWS4
#undef TWS4
#endif // TWS4

#ifdef TWS5
#undef TWS5
#endif // TWS5

#ifdef TWS6
#undef TWS6
#endif // TWS6

#ifdef TWS7
#undef TWS7
#endif // TWS7

#ifdef TWSR
#undef TWSR
#endif // TWSR

#ifdef TWSTA
#undef TWSTA
#endif // TWSTA

#ifdef TWSTO
#undef TWSTO
#endif // TWSTO

#ifdef TWWC
#undef TWWC
#endif // TWWC

#ifdef TXB80
#undef TXB80
#endif // TXB80

#ifdef TXB81
#undef TXB81
#endif // TXB81

#ifdef TXB82
#undef TXB82
#endif // TXB82

#ifdef TXB83
#undef TXB83
#endif // TXB83

#ifdef TXC0
#undef TXC0
#endif // TXC0

#ifdef TXC1
#undef TXC1
#endif // TXC1

#ifdef TXC2
#undef TXC2
#endif // TXC2

#ifdef TXC3
#undef TXC3
#endif // TXC3

#ifdef TXCIE0
#undef TXCIE0
#endif // TXCIE0

#ifdef TXCIE1
#undef TXCIE1
#endif // TXCIE1

#ifdef TXCIE2
#undef TXCIE2
#endif // TXCIE2

#ifdef TXCIE3
#undef TXCIE3
#endif // TXCIE3

#ifdef TXEN0
#undef TXEN0
#endif // TXEN0

#ifdef TXEN1
#undef TXEN1
#endif // TXEN1

#ifdef TXEN2
#undef TXEN2
#endif // TXEN2

#ifdef TXEN3
#undef TXEN3
#endif // TXEN3

#ifdef U2X0
#undef U2X0
#endif // U2X0

#ifdef U2X1
#undef U2X1
#endif // U2X1

#ifdef U2X2
#undef U2X2
#endif // U2X2

#ifdef U2X3
#undef U2X3
#endif // U2X3

#ifdef UBRR0
#undef UBRR0
#endif // UBRR0

#ifdef UBRR0H
#undef UBRR0H
#endif // UBRR0H

#ifdef UBRR0L
#undef UBRR0L
#endif // UBRR0L

#ifdef UBRR1
#undef UBRR1
#endif // UBRR1

#ifdef UBRR1H
#undef UBRR1H
#endif // UBRR1H

#ifdef UBRR1L
#undef UBRR1L
#endif // UBRR1L

#ifdef UBRR2
#undef UBRR2
#endif // UBRR2

#ifdef UBRR2H
#undef UBRR2H
#endif // UBRR2H

#ifdef UBRR2L
#undef UBRR2L
#endif // UBRR2L

#ifdef UBRR3
#undef UBRR3
#endif // UBRR3

#ifdef UBRR3H
#undef UBRR3H
#endif // UBRR3H

#ifdef UBRR3L
#undef UBRR3L
#endif // UBRR3L

#ifdef UCPOL0
#undef UCPOL0
#endif // UCPOL0

#ifdef UCPOL1
#undef UCPOL1
#endif // UCPOL1

#ifdef UCPOL2
#undef UCPOL2
#endif // UCPOL2

#ifdef UCPOL3
#undef UCPOL3
#endif // UCPOL3

#ifdef UCSR0A
#undef UCSR0A
#endif // UCSR0A

#ifdef UCSR0B
#undef UCSR0B
#endif // UCSR0B

#ifdef UCSR0C
#undef UCSR0C
#endif // UCSR0C

#ifdef UCSR1A
#undef UCSR1A
#endif // UCSR1A

#ifdef UCSR1B
#undef UCSR1B
#endif // UCSR1B

#ifdef UCSR1C
#undef UCSR1C
#endif // UCSR1C

#ifdef UCSR2A
#undef UCSR2A
#endif // UCSR2A

#ifdef UCSR2B
#undef UCSR2B
#endif // UCSR2B

#ifdef UCSR2C
#undef UCSR2C
#endif // UCSR2C

#ifdef UCSR3A
#undef UCSR3A
#endif // UCSR3A

#ifdef UCSR3B
#undef UCSR3B
#endif // UCSR3B

#ifdef UCSR3C
#undef UCSR3C
#endif // UCSR3C

#ifdef UCSZ00
#undef UCSZ00
#endif // UCSZ00

#ifdef UCSZ01
#undef UCSZ01
#endif // UCSZ01

#ifdef UCSZ02
#undef UCSZ02
#endif // UCSZ02

#ifdef UCSZ10
#undef UCSZ10
#endif // UCSZ10

#ifdef UCSZ11
#undef UCSZ11
#endif // UCSZ11

#ifdef UCSZ12
#undef UCSZ12
#endif // UCSZ12

#ifdef UCSZ20
#undef UCSZ20
#endif // UCSZ20

#ifdef UCSZ21
#undef UCSZ21
#endif // UCSZ21

#ifdef UCSZ22
#undef UCSZ22
#endif // UCSZ22

#ifdef UCSZ30
#undef UCSZ30
#endif // UCSZ30

#ifdef UCSZ31
#undef UCSZ31
#endif // UCSZ31

#ifdef UCSZ32
#undef UCSZ32
#endif // UCSZ32

#ifdef UDR0
#undef UDR0
#endif // UDR0

#ifdef UDR1
#undef UDR1
#endif // UDR1

#ifdef UDR2
#undef UDR2
#endif // UDR2

#ifdef UDR3
#undef UDR3
#endif // UDR3

#ifdef UDRE0
#undef UDRE0
#endif // UDRE0

#ifdef UDRE1
#undef UDRE1
#endif // UDRE1

#ifdef UDRE2
#undef UDRE2
#endif // UDRE2

#ifdef UDRE3
#undef UDRE3
#endif // UDRE3

#ifdef UDRIE0
#undef UDRIE0
#endif // UDRIE0

#ifdef UDRIE1
#undef UDRIE1
#endif // UDRIE1

#ifdef UDRIE2
#undef UDRIE2
#endif // UDRIE2

#ifdef UDRIE3
#undef UDRIE3
#endif // UDRIE3

#ifdef UMSEL00
#undef UMSEL00
#endif // UMSEL00

#ifdef UMSEL01
#undef UMSEL01
#endif // UMSEL01

#ifdef UMSEL10
#undef UMSEL10
#endif // UMSEL10

#ifdef UMSEL11
#undef UMSEL11
#endif // UMSEL11

#ifdef UMSEL20
#undef UMSEL20
#endif // UMSEL20

#ifdef UMSEL21
#undef UMSEL21
#endif // UMSEL21

#ifdef UMSEL30
#undef UMSEL30
#endif // UMSEL30

#ifdef UMSEL31
#undef UMSEL31
#endif // UMSEL31

#ifdef UPE0
#undef UPE0
#endif // UPE0

#ifdef UPE1
#undef UPE1
#endif // UPE1

#ifdef UPE2
#undef UPE2
#endif // UPE2

#ifdef UPE3
#undef UPE3
#endif // UPE3

#ifdef UPM00
#undef UPM00
#endif // UPM00

#ifdef UPM01
#undef UPM01
#endif // UPM01

#ifdef UPM10
#undef UPM10
#endif // UPM10

#ifdef UPM11
#undef UPM11
#endif // UPM11

#ifdef UPM20
#undef UPM20
#endif // UPM20

#ifdef UPM21
#undef UPM21
#endif // UPM21

#ifdef UPM30
#undef UPM30
#endif // UPM30

#ifdef UPM31
#undef UPM31
#endif // UPM31

#ifdef USBS0
#undef USBS0
#endif // USBS0

#ifdef USBS1
#undef USBS1
#endif // USBS1

#ifdef USBS2
#undef USBS2
#endif // USBS2

#ifdef USBS3
#undef USBS3
#endif // USBS3

#ifdef WCOL
#undef WCOL
#endif // WCOL

#ifdef WDCE
#undef WDCE
#endif // WDCE

#ifdef WDE
#undef WDE
#endif // WDE

#ifdef WDIE
#undef WDIE
#endif // WDIE

#ifdef WDIF
#undef WDIF
#endif // WDIF

#ifdef WDP0
#undef WDP0
#endif // WDP0

#ifdef WDP1
#undef WDP1
#endif // WDP1

#ifdef WDP2
#undef WDP2
#endif // WDP2

#ifdef WDP3
#undef WDP3
#endif // WDP3

#ifdef WDRF
#undef WDRF
#endif // WDRF

#ifdef WDTCSR
#undef WDTCSR
#endif // WDTCSR

#ifdef WGM00
#undef WGM00
#endif // WGM00

#ifdef WGM01
#undef WGM01
#endif // WGM01

#ifdef WGM02
#undef WGM02
#endif // WGM02

#ifdef WGM10
#undef WGM10
#endif // WGM10

#ifdef WGM11
#undef WGM11
#endif // WGM11

#ifdef WGM12
#undef WGM12
#endif // WGM12

#ifdef WGM13
#undef WGM13
#endif // WGM13

#ifdef WGM20
#undef WGM20
#endif // WGM20

#ifdef WGM21
#undef WGM21
#endif // WGM21

#ifdef WGM22
#undef WGM22
#endif // WGM22

#ifdef WGM30
#undef WGM30
#endif // WGM30

#ifdef WGM31
#undef WGM31
#endif // WGM31

#ifdef WGM32
#undef WGM32
#endif // WGM32

#ifdef WGM33
#undef WGM33
#endif // WGM33

#ifdef WGM40
#undef WGM40
#endif // WGM40

#ifdef WGM41
#undef WGM41
#endif // WGM41

#ifdef WGM42
#undef WGM42
#endif // WGM42

#ifdef WGM43
#undef WGM43
#endif // WGM43

#ifdef WGM50
#undef WGM50
#endif // WGM50

#ifdef WGM51
#undef WGM51
#endif // WGM51

#ifdef WGM52
#undef WGM52
#endif // WGM52

#ifdef WGM53
#undef WGM53
#endif // WGM53

#ifdef XMBK
#undef XMBK
#endif // XMBK

#ifdef XMCRA
#undef XMCRA
#endif // XMCRA

#ifdef XMCRB
#undef XMCRB
#endif // XMCRB

#ifdef XMM0
#undef XMM0
#endif // XMM0

#ifdef XMM1
#undef XMM1
#endif // XMM1

#ifdef XMM2
#undef XMM2
#endif // XMM2

#endif // AVRLIBCPP_SUPPRESS_SFR_MACROS
#endif // __AVR_ATmega2560__

#endif // AVRLIBCPP_SUPPRESS_SFR_MACROS_ATMEGA2560_H

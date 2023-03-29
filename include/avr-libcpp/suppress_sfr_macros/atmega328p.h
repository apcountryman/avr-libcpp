/**
 * avr-libcpp
 *
 * Copyright 2020-2023, Andrew Countryman <apcountryman@gmail.com> and the avr-libcpp
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
 * \brief avr-libcpp/suppress_sfr_macros/atmega328p interface.
 */

#ifndef AVRLIBCPP_SUPPRESS_SFR_MACROS_ATMEGA328P_H
#define AVRLIBCPP_SUPPRESS_SFR_MACROS_ATMEGA328P_H

#include <avr/io.h>

#ifdef __AVR_ATmega328P__
#ifdef AVRLIBCPP_SUPPRESS_SFR_MACROS

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

#ifdef ADCH
#undef ADCH
#endif // ADCH

#ifdef ADCH0
#undef ADCH0
#endif // ADCH0

#ifdef ADCH1
#undef ADCH1
#endif // ADCH1

#ifdef ADCH2
#undef ADCH2
#endif // ADCH2

#ifdef ADCH3
#undef ADCH3
#endif // ADCH3

#ifdef ADCH4
#undef ADCH4
#endif // ADCH4

#ifdef ADCH5
#undef ADCH5
#endif // ADCH5

#ifdef ADCH6
#undef ADCH6
#endif // ADCH6

#ifdef ADCH7
#undef ADCH7
#endif // ADCH7

#ifdef ADCL
#undef ADCL
#endif // ADCL

#ifdef ADCL0
#undef ADCL0
#endif // ADCL0

#ifdef ADCL1
#undef ADCL1
#endif // ADCL1

#ifdef ADCL2
#undef ADCL2
#endif // ADCL2

#ifdef ADCL3
#undef ADCL3
#endif // ADCL3

#ifdef ADCL4
#undef ADCL4
#endif // ADCL4

#ifdef ADCL5
#undef ADCL5
#endif // ADCL5

#ifdef ADCL6
#undef ADCL6
#endif // ADCL6

#ifdef ADCL7
#undef ADCL7
#endif // ADCL7

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

#ifdef BODS
#undef BODS
#endif // BODS

#ifdef BODSE
#undef BODSE
#endif // BODSE

#ifdef BORF
#undef BORF
#endif // BORF

#ifdef CAL0
#undef CAL0
#endif // CAL0

#ifdef CAL1
#undef CAL1
#endif // CAL1

#ifdef CAL2
#undef CAL2
#endif // CAL2

#ifdef CAL3
#undef CAL3
#endif // CAL3

#ifdef CAL4
#undef CAL4
#endif // CAL4

#ifdef CAL5
#undef CAL5
#endif // CAL5

#ifdef CAL6
#undef CAL6
#endif // CAL6

#ifdef CAL7
#undef CAL7
#endif // CAL7

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

#ifdef DDRB
#undef DDRB
#endif // DDRB

#ifdef DDRC
#undef DDRC
#endif // DDRC

#ifdef DDRD
#undef DDRD
#endif // DDRD

#ifdef DIDR0
#undef DIDR0
#endif // DIDR0

#ifdef DIDR1
#undef DIDR1
#endif // DIDR1

#ifdef DOR0
#undef DOR0
#endif // DOR0

#ifdef DORD
#undef DORD
#endif // DORD

#ifdef EEAR
#undef EEAR
#endif // EEAR

#ifdef EEAR0
#undef EEAR0
#endif // EEAR0

#ifdef EEAR1
#undef EEAR1
#endif // EEAR1

#ifdef EEAR2
#undef EEAR2
#endif // EEAR2

#ifdef EEAR3
#undef EEAR3
#endif // EEAR3

#ifdef EEAR4
#undef EEAR4
#endif // EEAR4

#ifdef EEAR5
#undef EEAR5
#endif // EEAR5

#ifdef EEAR6
#undef EEAR6
#endif // EEAR6

#ifdef EEAR7
#undef EEAR7
#endif // EEAR7

#ifdef EEAR8
#undef EEAR8
#endif // EEAR8

#ifdef EEAR9
#undef EEAR9
#endif // EEAR9

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

#ifdef EEDR0
#undef EEDR0
#endif // EEDR0

#ifdef EEDR1
#undef EEDR1
#endif // EEDR1

#ifdef EEDR2
#undef EEDR2
#endif // EEDR2

#ifdef EEDR3
#undef EEDR3
#endif // EEDR3

#ifdef EEDR4
#undef EEDR4
#endif // EEDR4

#ifdef EEDR5
#undef EEDR5
#endif // EEDR5

#ifdef EEDR6
#undef EEDR6
#endif // EEDR6

#ifdef EEDR7
#undef EEDR7
#endif // EEDR7

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

#ifdef EIFR
#undef EIFR
#endif // EIFR

#ifdef EIMSK
#undef EIMSK
#endif // EIMSK

#ifdef EXCLK
#undef EXCLK
#endif // EXCLK

#ifdef EXTRF
#undef EXTRF
#endif // EXTRF

#ifdef FE0
#undef FE0
#endif // FE0

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

#ifdef FOC2A
#undef FOC2A
#endif // FOC2A

#ifdef FOC2B
#undef FOC2B
#endif // FOC2B

#ifdef GPIOR0
#undef GPIOR0
#endif // GPIOR0

#ifdef GPIOR00
#undef GPIOR00
#endif // GPIOR00

#ifdef GPIOR01
#undef GPIOR01
#endif // GPIOR01

#ifdef GPIOR02
#undef GPIOR02
#endif // GPIOR02

#ifdef GPIOR03
#undef GPIOR03
#endif // GPIOR03

#ifdef GPIOR04
#undef GPIOR04
#endif // GPIOR04

#ifdef GPIOR05
#undef GPIOR05
#endif // GPIOR05

#ifdef GPIOR06
#undef GPIOR06
#endif // GPIOR06

#ifdef GPIOR07
#undef GPIOR07
#endif // GPIOR07

#ifdef GPIOR1
#undef GPIOR1
#endif // GPIOR1

#ifdef GPIOR10
#undef GPIOR10
#endif // GPIOR10

#ifdef GPIOR11
#undef GPIOR11
#endif // GPIOR11

#ifdef GPIOR12
#undef GPIOR12
#endif // GPIOR12

#ifdef GPIOR13
#undef GPIOR13
#endif // GPIOR13

#ifdef GPIOR14
#undef GPIOR14
#endif // GPIOR14

#ifdef GPIOR15
#undef GPIOR15
#endif // GPIOR15

#ifdef GPIOR16
#undef GPIOR16
#endif // GPIOR16

#ifdef GPIOR17
#undef GPIOR17
#endif // GPIOR17

#ifdef GPIOR2
#undef GPIOR2
#endif // GPIOR2

#ifdef GPIOR20
#undef GPIOR20
#endif // GPIOR20

#ifdef GPIOR21
#undef GPIOR21
#endif // GPIOR21

#ifdef GPIOR22
#undef GPIOR22
#endif // GPIOR22

#ifdef GPIOR23
#undef GPIOR23
#endif // GPIOR23

#ifdef GPIOR24
#undef GPIOR24
#endif // GPIOR24

#ifdef GPIOR25
#undef GPIOR25
#endif // GPIOR25

#ifdef GPIOR26
#undef GPIOR26
#endif // GPIOR26

#ifdef GPIOR27
#undef GPIOR27
#endif // GPIOR27

#ifdef GTCCR
#undef GTCCR
#endif // GTCCR

#ifdef ICES1
#undef ICES1
#endif // ICES1

#ifdef ICF1
#undef ICF1
#endif // ICF1

#ifdef ICIE1
#undef ICIE1
#endif // ICIE1

#ifdef ICNC1
#undef ICNC1
#endif // ICNC1

#ifdef ICR1
#undef ICR1
#endif // ICR1

#ifdef ICR1H
#undef ICR1H
#endif // ICR1H

#ifdef ICR1H0
#undef ICR1H0
#endif // ICR1H0

#ifdef ICR1H1
#undef ICR1H1
#endif // ICR1H1

#ifdef ICR1H2
#undef ICR1H2
#endif // ICR1H2

#ifdef ICR1H3
#undef ICR1H3
#endif // ICR1H3

#ifdef ICR1H4
#undef ICR1H4
#endif // ICR1H4

#ifdef ICR1H5
#undef ICR1H5
#endif // ICR1H5

#ifdef ICR1H6
#undef ICR1H6
#endif // ICR1H6

#ifdef ICR1H7
#undef ICR1H7
#endif // ICR1H7

#ifdef ICR1L
#undef ICR1L
#endif // ICR1L

#ifdef ICR1L0
#undef ICR1L0
#endif // ICR1L0

#ifdef ICR1L1
#undef ICR1L1
#endif // ICR1L1

#ifdef ICR1L2
#undef ICR1L2
#endif // ICR1L2

#ifdef ICR1L3
#undef ICR1L3
#endif // ICR1L3

#ifdef ICR1L4
#undef ICR1L4
#endif // ICR1L4

#ifdef ICR1L5
#undef ICR1L5
#endif // ICR1L5

#ifdef ICR1L6
#undef ICR1L6
#endif // ICR1L6

#ifdef ICR1L7
#undef ICR1L7
#endif // ICR1L7

#ifdef INT0
#undef INT0
#endif // INT0

#ifdef INT1
#undef INT1
#endif // INT1

#ifdef INTF0
#undef INTF0
#endif // INTF0

#ifdef INTF1
#undef INTF1
#endif // INTF1

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

#ifdef IVCE
#undef IVCE
#endif // IVCE

#ifdef IVSEL
#undef IVSEL
#endif // IVSEL

#ifdef MCUCR
#undef MCUCR
#endif // MCUCR

#ifdef MCUSR
#undef MCUSR
#endif // MCUSR

#ifdef MPCM0
#undef MPCM0
#endif // MPCM0

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

#ifdef OCF2A
#undef OCF2A
#endif // OCF2A

#ifdef OCF2B
#undef OCF2B
#endif // OCF2B

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

#ifdef OCIE2A
#undef OCIE2A
#endif // OCIE2A

#ifdef OCIE2B
#undef OCIE2B
#endif // OCIE2B

#ifdef OCR0A
#undef OCR0A
#endif // OCR0A

#ifdef OCR0A_0
#undef OCR0A_0
#endif // OCR0A_0

#ifdef OCR0A_1
#undef OCR0A_1
#endif // OCR0A_1

#ifdef OCR0A_2
#undef OCR0A_2
#endif // OCR0A_2

#ifdef OCR0A_3
#undef OCR0A_3
#endif // OCR0A_3

#ifdef OCR0A_4
#undef OCR0A_4
#endif // OCR0A_4

#ifdef OCR0A_5
#undef OCR0A_5
#endif // OCR0A_5

#ifdef OCR0A_6
#undef OCR0A_6
#endif // OCR0A_6

#ifdef OCR0A_7
#undef OCR0A_7
#endif // OCR0A_7

#ifdef OCR0B
#undef OCR0B
#endif // OCR0B

#ifdef OCR0B_0
#undef OCR0B_0
#endif // OCR0B_0

#ifdef OCR0B_1
#undef OCR0B_1
#endif // OCR0B_1

#ifdef OCR0B_2
#undef OCR0B_2
#endif // OCR0B_2

#ifdef OCR0B_3
#undef OCR0B_3
#endif // OCR0B_3

#ifdef OCR0B_4
#undef OCR0B_4
#endif // OCR0B_4

#ifdef OCR0B_5
#undef OCR0B_5
#endif // OCR0B_5

#ifdef OCR0B_6
#undef OCR0B_6
#endif // OCR0B_6

#ifdef OCR0B_7
#undef OCR0B_7
#endif // OCR0B_7

#ifdef OCR1A
#undef OCR1A
#endif // OCR1A

#ifdef OCR1AH
#undef OCR1AH
#endif // OCR1AH

#ifdef OCR1AH0
#undef OCR1AH0
#endif // OCR1AH0

#ifdef OCR1AH1
#undef OCR1AH1
#endif // OCR1AH1

#ifdef OCR1AH2
#undef OCR1AH2
#endif // OCR1AH2

#ifdef OCR1AH3
#undef OCR1AH3
#endif // OCR1AH3

#ifdef OCR1AH4
#undef OCR1AH4
#endif // OCR1AH4

#ifdef OCR1AH5
#undef OCR1AH5
#endif // OCR1AH5

#ifdef OCR1AH6
#undef OCR1AH6
#endif // OCR1AH6

#ifdef OCR1AH7
#undef OCR1AH7
#endif // OCR1AH7

#ifdef OCR1AL
#undef OCR1AL
#endif // OCR1AL

#ifdef OCR1AL0
#undef OCR1AL0
#endif // OCR1AL0

#ifdef OCR1AL1
#undef OCR1AL1
#endif // OCR1AL1

#ifdef OCR1AL2
#undef OCR1AL2
#endif // OCR1AL2

#ifdef OCR1AL3
#undef OCR1AL3
#endif // OCR1AL3

#ifdef OCR1AL4
#undef OCR1AL4
#endif // OCR1AL4

#ifdef OCR1AL5
#undef OCR1AL5
#endif // OCR1AL5

#ifdef OCR1AL6
#undef OCR1AL6
#endif // OCR1AL6

#ifdef OCR1AL7
#undef OCR1AL7
#endif // OCR1AL7

#ifdef OCR1B
#undef OCR1B
#endif // OCR1B

#ifdef OCR1BH
#undef OCR1BH
#endif // OCR1BH

#ifdef OCR1BH0
#undef OCR1BH0
#endif // OCR1BH0

#ifdef OCR1BH1
#undef OCR1BH1
#endif // OCR1BH1

#ifdef OCR1BH2
#undef OCR1BH2
#endif // OCR1BH2

#ifdef OCR1BH3
#undef OCR1BH3
#endif // OCR1BH3

#ifdef OCR1BH4
#undef OCR1BH4
#endif // OCR1BH4

#ifdef OCR1BH5
#undef OCR1BH5
#endif // OCR1BH5

#ifdef OCR1BH6
#undef OCR1BH6
#endif // OCR1BH6

#ifdef OCR1BH7
#undef OCR1BH7
#endif // OCR1BH7

#ifdef OCR1BL
#undef OCR1BL
#endif // OCR1BL

#ifdef OCR1BL0
#undef OCR1BL0
#endif // OCR1BL0

#ifdef OCR1BL1
#undef OCR1BL1
#endif // OCR1BL1

#ifdef OCR1BL2
#undef OCR1BL2
#endif // OCR1BL2

#ifdef OCR1BL3
#undef OCR1BL3
#endif // OCR1BL3

#ifdef OCR1BL4
#undef OCR1BL4
#endif // OCR1BL4

#ifdef OCR1BL5
#undef OCR1BL5
#endif // OCR1BL5

#ifdef OCR1BL6
#undef OCR1BL6
#endif // OCR1BL6

#ifdef OCR1BL7
#undef OCR1BL7
#endif // OCR1BL7

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

#ifdef OCR2_0
#undef OCR2_0
#endif // OCR2_0

#ifdef OCR2_1
#undef OCR2_1
#endif // OCR2_1

#ifdef OCR2_2
#undef OCR2_2
#endif // OCR2_2

#ifdef OCR2_3
#undef OCR2_3
#endif // OCR2_3

#ifdef OCR2_4
#undef OCR2_4
#endif // OCR2_4

#ifdef OCR2_5
#undef OCR2_5
#endif // OCR2_5

#ifdef OCR2_6
#undef OCR2_6
#endif // OCR2_6

#ifdef OCR2_7
#undef OCR2_7
#endif // OCR2_7

#ifdef OSCCAL
#undef OSCCAL
#endif // OSCCAL

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

#ifdef PGERS
#undef PGERS
#endif // PGERS

#ifdef PGWRT
#undef PGWRT
#endif // PGWRT

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

#ifdef PRADC
#undef PRADC
#endif // PRADC

#ifdef PRR
#undef PRR
#endif // PRR

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

#ifdef PRTWI
#undef PRTWI
#endif // PRTWI

#ifdef PRUSART0
#undef PRUSART0
#endif // PRUSART0

#ifdef PSRASY
#undef PSRASY
#endif // PSRASY

#ifdef PSRSYNC
#undef PSRSYNC
#endif // PSRSYNC

#ifdef PUD
#undef PUD
#endif // PUD

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

#ifdef RXC0
#undef RXC0
#endif // RXC0

#ifdef RXCIE0
#undef RXCIE0
#endif // RXCIE0

#ifdef RXEN0
#undef RXEN0
#endif // RXEN0

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

#ifdef SPDR0
#undef SPDR0
#endif // SPDR0

#ifdef SPDR1
#undef SPDR1
#endif // SPDR1

#ifdef SPDR2
#undef SPDR2
#endif // SPDR2

#ifdef SPDR3
#undef SPDR3
#endif // SPDR3

#ifdef SPDR4
#undef SPDR4
#endif // SPDR4

#ifdef SPDR5
#undef SPDR5
#endif // SPDR5

#ifdef SPDR6
#undef SPDR6
#endif // SPDR6

#ifdef SPDR7
#undef SPDR7
#endif // SPDR7

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

#ifdef SREG
#undef SREG
#endif // SREG

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

#ifdef TCN2UB
#undef TCN2UB
#endif // TCN2UB

#ifdef TCNT0
#undef TCNT0
#endif // TCNT0

#ifdef TCNT0_0
#undef TCNT0_0
#endif // TCNT0_0

#ifdef TCNT0_1
#undef TCNT0_1
#endif // TCNT0_1

#ifdef TCNT0_2
#undef TCNT0_2
#endif // TCNT0_2

#ifdef TCNT0_3
#undef TCNT0_3
#endif // TCNT0_3

#ifdef TCNT0_4
#undef TCNT0_4
#endif // TCNT0_4

#ifdef TCNT0_5
#undef TCNT0_5
#endif // TCNT0_5

#ifdef TCNT0_6
#undef TCNT0_6
#endif // TCNT0_6

#ifdef TCNT0_7
#undef TCNT0_7
#endif // TCNT0_7

#ifdef TCNT1
#undef TCNT1
#endif // TCNT1

#ifdef TCNT1H
#undef TCNT1H
#endif // TCNT1H

#ifdef TCNT1H0
#undef TCNT1H0
#endif // TCNT1H0

#ifdef TCNT1H1
#undef TCNT1H1
#endif // TCNT1H1

#ifdef TCNT1H2
#undef TCNT1H2
#endif // TCNT1H2

#ifdef TCNT1H3
#undef TCNT1H3
#endif // TCNT1H3

#ifdef TCNT1H4
#undef TCNT1H4
#endif // TCNT1H4

#ifdef TCNT1H5
#undef TCNT1H5
#endif // TCNT1H5

#ifdef TCNT1H6
#undef TCNT1H6
#endif // TCNT1H6

#ifdef TCNT1H7
#undef TCNT1H7
#endif // TCNT1H7

#ifdef TCNT1L
#undef TCNT1L
#endif // TCNT1L

#ifdef TCNT1L0
#undef TCNT1L0
#endif // TCNT1L0

#ifdef TCNT1L1
#undef TCNT1L1
#endif // TCNT1L1

#ifdef TCNT1L2
#undef TCNT1L2
#endif // TCNT1L2

#ifdef TCNT1L3
#undef TCNT1L3
#endif // TCNT1L3

#ifdef TCNT1L4
#undef TCNT1L4
#endif // TCNT1L4

#ifdef TCNT1L5
#undef TCNT1L5
#endif // TCNT1L5

#ifdef TCNT1L6
#undef TCNT1L6
#endif // TCNT1L6

#ifdef TCNT1L7
#undef TCNT1L7
#endif // TCNT1L7

#ifdef TCNT2
#undef TCNT2
#endif // TCNT2

#ifdef TCNT2_0
#undef TCNT2_0
#endif // TCNT2_0

#ifdef TCNT2_1
#undef TCNT2_1
#endif // TCNT2_1

#ifdef TCNT2_2
#undef TCNT2_2
#endif // TCNT2_2

#ifdef TCNT2_3
#undef TCNT2_3
#endif // TCNT2_3

#ifdef TCNT2_4
#undef TCNT2_4
#endif // TCNT2_4

#ifdef TCNT2_5
#undef TCNT2_5
#endif // TCNT2_5

#ifdef TCNT2_6
#undef TCNT2_6
#endif // TCNT2_6

#ifdef TCNT2_7
#undef TCNT2_7
#endif // TCNT2_7

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

#ifdef TIMSK0
#undef TIMSK0
#endif // TIMSK0

#ifdef TIMSK1
#undef TIMSK1
#endif // TIMSK1

#ifdef TIMSK2
#undef TIMSK2
#endif // TIMSK2

#ifdef TOIE0
#undef TOIE0
#endif // TOIE0

#ifdef TOIE1
#undef TOIE1
#endif // TOIE1

#ifdef TOIE2
#undef TOIE2
#endif // TOIE2

#ifdef TOV0
#undef TOV0
#endif // TOV0

#ifdef TOV1
#undef TOV1
#endif // TOV1

#ifdef TOV2
#undef TOV2
#endif // TOV2

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

#ifdef TWBR0
#undef TWBR0
#endif // TWBR0

#ifdef TWBR1
#undef TWBR1
#endif // TWBR1

#ifdef TWBR2
#undef TWBR2
#endif // TWBR2

#ifdef TWBR3
#undef TWBR3
#endif // TWBR3

#ifdef TWBR4
#undef TWBR4
#endif // TWBR4

#ifdef TWBR5
#undef TWBR5
#endif // TWBR5

#ifdef TWBR6
#undef TWBR6
#endif // TWBR6

#ifdef TWBR7
#undef TWBR7
#endif // TWBR7

#ifdef TWCR
#undef TWCR
#endif // TWCR

#ifdef TWD0
#undef TWD0
#endif // TWD0

#ifdef TWD1
#undef TWD1
#endif // TWD1

#ifdef TWD2
#undef TWD2
#endif // TWD2

#ifdef TWD3
#undef TWD3
#endif // TWD3

#ifdef TWD4
#undef TWD4
#endif // TWD4

#ifdef TWD5
#undef TWD5
#endif // TWD5

#ifdef TWD6
#undef TWD6
#endif // TWD6

#ifdef TWD7
#undef TWD7
#endif // TWD7

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

#ifdef TXC0
#undef TXC0
#endif // TXC0

#ifdef TXCIE0
#undef TXCIE0
#endif // TXCIE0

#ifdef TXEN0
#undef TXEN0
#endif // TXEN0

#ifdef U2X0
#undef U2X0
#endif // U2X0

#ifdef UBRR0
#undef UBRR0
#endif // UBRR0

#ifdef UBRR0H
#undef UBRR0H
#endif // UBRR0H

#ifdef UBRR0L
#undef UBRR0L
#endif // UBRR0L

#ifdef UBRR0_0
#undef UBRR0_0
#endif // UBRR0_0

#ifdef UBRR0_1
#undef UBRR0_1
#endif // UBRR0_1

#ifdef UBRR0_10
#undef UBRR0_10
#endif // UBRR0_10

#ifdef UBRR0_11
#undef UBRR0_11
#endif // UBRR0_11

#ifdef UBRR0_2
#undef UBRR0_2
#endif // UBRR0_2

#ifdef UBRR0_3
#undef UBRR0_3
#endif // UBRR0_3

#ifdef UBRR0_4
#undef UBRR0_4
#endif // UBRR0_4

#ifdef UBRR0_5
#undef UBRR0_5
#endif // UBRR0_5

#ifdef UBRR0_6
#undef UBRR0_6
#endif // UBRR0_6

#ifdef UBRR0_7
#undef UBRR0_7
#endif // UBRR0_7

#ifdef UBRR0_8
#undef UBRR0_8
#endif // UBRR0_8

#ifdef UBRR0_9
#undef UBRR0_9
#endif // UBRR0_9

#ifdef UCPHA0
#undef UCPHA0
#endif // UCPHA0

#ifdef UCPOL0
#undef UCPOL0
#endif // UCPOL0

#ifdef UCSR0A
#undef UCSR0A
#endif // UCSR0A

#ifdef UCSR0B
#undef UCSR0B
#endif // UCSR0B

#ifdef UCSR0C
#undef UCSR0C
#endif // UCSR0C

#ifdef UCSZ00
#undef UCSZ00
#endif // UCSZ00

#ifdef UCSZ01
#undef UCSZ01
#endif // UCSZ01

#ifdef UCSZ02
#undef UCSZ02
#endif // UCSZ02

#ifdef UDORD0
#undef UDORD0
#endif // UDORD0

#ifdef UDR0
#undef UDR0
#endif // UDR0

#ifdef UDR0_0
#undef UDR0_0
#endif // UDR0_0

#ifdef UDR0_1
#undef UDR0_1
#endif // UDR0_1

#ifdef UDR0_2
#undef UDR0_2
#endif // UDR0_2

#ifdef UDR0_3
#undef UDR0_3
#endif // UDR0_3

#ifdef UDR0_4
#undef UDR0_4
#endif // UDR0_4

#ifdef UDR0_5
#undef UDR0_5
#endif // UDR0_5

#ifdef UDR0_6
#undef UDR0_6
#endif // UDR0_6

#ifdef UDR0_7
#undef UDR0_7
#endif // UDR0_7

#ifdef UDRE0
#undef UDRE0
#endif // UDRE0

#ifdef UDRIE0
#undef UDRIE0
#endif // UDRIE0

#ifdef UMSEL00
#undef UMSEL00
#endif // UMSEL00

#ifdef UMSEL01
#undef UMSEL01
#endif // UMSEL01

#ifdef UPE0
#undef UPE0
#endif // UPE0

#ifdef UPM00
#undef UPM00
#endif // UPM00

#ifdef UPM01
#undef UPM01
#endif // UPM01

#ifdef USBS0
#undef USBS0
#endif // USBS0

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

#endif // AVRLIBCPP_SUPPRESS_SFR_MACROS
#endif // __AVR_ATmega328P__

#endif // AVRLIBCPP_SUPPRESS_SFR_MACROS_ATMEGA328P_H

#ifndef _BOARD_H
#define _BOARD_H

#define HAS_FHT_8v                      // PROGMEM:  434b, RAM: 19b
#define HAS_FHT_80b                     // PROGMEM: 1158b, RAM:  5b

#undef  FULL_CC1100_PA                  // PROGMEM:  108b

#undef  HAS_RAWSEND                     // PROGMEM:  198b     RAM:  4b
#undef  HAS_FASTRF                      // PROGMEM:  362+106  RAM:  1b
#undef  HAS_RF_ROUTER                   // PROGMEM:  920b  RAM: 38b
#undef  HAS_LONGMSG                     // CUR support     RAM: 20b
#undef  HAS_ONEWIRE                     // OneWire Support

#define SPI_PORT        PORTB
#define SPI_DDR         DDRB
#define SPI_SS          4
#define SPI_MISO        6
#define SPI_MOSI        5
#define SPI_SCLK        7

#define CC1100_CS_DDR       SPI_DDR
#define CC1100_CS_PORT          SPI_PORT
#define CC1100_CS_PIN       SPI_SS

#define CC1100_OUT_DDR      DDRB
#define CC1100_OUT_PORT         PORTB
#define CC1100_OUT_PIN          1

#define CC1100_IN_DDR       DDRB
#define CC1100_IN_PORT          PINB
#define CC1100_IN_PIN           2
#define CC1100_INT      INT2
#define CC1100_INTVECT          INT2_vect
#define CC1100_ISC      ISC20
#define CC1100_EICR             EICRA

#define LED_DDR                 DDRB
#define LED_PORT                PORTB
#define LED_PIN                 0

#define USART_RX_vect           USART0_RX_vect
#define USART_UDRE_vect         USART0_UDRE_vect

#define ENC28J60_CONTROL_PORT   PORTA
#define ENC28J60_CONTROL_DDR    DDRA
#define ENC28J60_CONTROL_CS     4
#define ENC28J60_RESET_PORT     PORTD
#define ENC28J60_RESET_DDR      DDRD
#define ENC28J60_RESET_BIT      4
#define ENC28J60_SPI_PORT       SPI_PORT
#define ENC28J60_SPI_DDR        SPI_DDR
#define ENC28J60_SPI_SCK        SPI_SCLK
#define ENC28J60_SPI_MOSI       SPI_MOSI
#define ENC28J60_SPI_MISO       SPI_MISO
#define ENC28J60_SPI_SS         SPI_SS

#define USB_MAX_POWER           250

#define FHTBUF_SIZE          174      //                 RAM: 174b
#define RCV_BUCKETS            4      //                 RAM: 25b * bucket
#define HAS_RF_ROUTER          1      // PROGMEM: 1106b, RAM: 43b
#define RFR_DEBUG                     // PROGMEM:  354b  RAM: 14b
#define FULL_CC1100_PA                // PROGMEM:  108b
#define HAS_RAWSEND                   //
#define HAS_FASTRF                    // PROGMEM:  468b  RAM:  1b
#define HAS_ASKSIN
#define HAS_ESA
#define HAS_TX3
#define HAS_INTERTECHNO
#define HAS_HOERMANN

#define HAS_IRRX                                //IR Receiption
#define F_INTERRUPTS            15625   // interrupts per second, min: 10000, max: 20000
#define IRMP_PORT               PORTA
#define IRMP_DDR                DDRA
#define IRMP_PIN                PINA
#define IRMP_BIT                2       // use PA2 as IR input on AVR

#define HAS_IRTX                                //IR-Transmission
#define IRSND_OCx               IRSND_OC2A          // use OC2A
#ifndef F_INTERRUPTS            
#define F_INTERRUPTS            15625   // interrupts per second, min: 10000, max: 20000
#endif

#define MULTI_FREQ_DEVICE       // available in multiple versions: 433MHz,868MHz,915MHz
#define BOARD_ID_STR            "CUNO868"
#define BOARD_ID_STR433         "CUNO433"
#define BOARD_ID_STR915         "CUNO915"

#define MARK433_PORT		PORTD
#define MARK433_PIN		PIND	
#define MARK433_BIT		5
#define MARK915_PORT		PORTD
#define MARK915_PIN		PIND
#define MARK915_BIT		6

#define HAS_XRAM                1

#define HAS_UART                1
#define UART_BAUD_RATE          38400
#define HAS_ETHERNET            1   
#define HAS_NTP                 1   

#define HAS_ONEWIRE         10      // OneWire Device Buffer, RAM: 10 * 8 Byte 

#define TTY_BUFSIZE             1024

#define BUSWARE_CUNO2

#endif

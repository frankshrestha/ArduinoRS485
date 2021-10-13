#ifndef _ARDUINO_RS485_DEFS_H_INCLUDED
#define _ARDUINO_RS485_DEFS_H_INCLUDED

#ifndef RS485_DEFAULT_TX_PIN
#ifdef PIN_SERIAL1_TX
#define RS485_DEFAULT_TX_PIN PIN_SERIAL1_TX
#else
#define RS485_DEFAULT_TX_PIN 1
#endif
#endif

#ifdef __AVR__
#define RS485_DEFAULT_DE_PIN 2
#define RS485_DEFAULT_RE_PIN -1
#elif ARDUINO_NANO_RP2040_CONNECT
#define RS485_DEFAULT_DE_PIN A1
#define RS485_DEFAULT_RE_PIN A0
#elif ARDUINO_SAMD_ZERO
#define RS485_DEFAULT_DE_PIN A4
#define RS485_DEFAULT_RE_PIN A5
#elif defined(ESP32) || defined(ESP8266)
#define RS485_DEFAULT_DE_PIN 0
#define RS485_DEFAULT_RE_PIN 0
#else
#ifndef RS485_DEFAULT_DE_PIN
#define RS485_DEFAULT_DE_PIN A6
#define RS485_DEFAULT_RE_PIN A5
#endif
#endif

#if defined(ESP8266)
#define RS485_SER_CONF_TYPE SerialConfig
#elif defined(ESP32)
#define RS485_SER_CONF_TYPE uint32_t
#else
#define RS485_SER_CONF_TYPE uint16_t
#endif


#define RS485_DEFAULT_PRE_DELAY 50
#define RS485_DEFAULT_POST_DELAY 50

#endif

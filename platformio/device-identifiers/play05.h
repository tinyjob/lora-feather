#include <lmic.h>
#include <hal/hal.h>

// OTAA/ABP: defines activation method for the device
#define ABP

// DEVEUI: Unique device ID (LSBF)
static const u1_t DEVEUI[8] PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

// APPEUI: Application ID (LSBF)
static const u1_t APPEUI[8] PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

// APPKEY: Device-specific AES key.
static const u1_t APPKEY[16] PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

// DEVADDR: Unique device ID
static const u4_t DEVADDR = 0x12340105;

// NWKSKEY: network specific session key
static const u1_t NWKSKEY[16] PROGMEM = { 0x38, 0xD4, 0x09, 0xD5, 0x97, 0x57, 0x8F, 0x22, 0x7E, 0xF9, 0x5A, 0x0E, 0x74, 0x39, 0x48, 0x9C };

// APPSKEY: Application specific session key
static const u1_t APPSKEY[16] PROGMEM = { 0x38, 0xD4, 0x09, 0xD5, 0x97, 0x57, 0x8F, 0x22, 0x7E, 0xF9, 0x5A, 0x0E, 0x74, 0x39, 0x48, 0x9C };
x48, 0x9C };

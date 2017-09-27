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
static const u4_t DEVADDR = 0x12340305;

// NWKSKEY: network specific session key
static const u1_t NWKSKEY[16] PROGMEM = { 0x0B, 0x91, 0x2E, 0xDB, 0xEE, 0x7E, 0x09, 0x24, 0xB9, 0x56, 0x0D, 0xB0, 0x14, 0x91, 0x61, 0x6A };

// APPSKEY: Application specific session key
static const u1_t APPSKEY[16] PROGMEM = { 0x0B, 0x91, 0x2E, 0xDB, 0xEE, 0x7E, 0x09, 0x24, 0xB9, 0x56, 0x0D, 0xB0, 0x14, 0x91, 0x61, 0x6A };


#ifndef MOSFET8_H_
#define MOSFET8_H_

#include <stdint.h>

#define RETRY_TIMES	10
#define MOSFET8_INPORT_REG_ADD	0x00
#define MOSFET8_OUTPORT_REG_ADD	0x01
#define MOSFET8_POLINV_REG_ADD	0x02
#define MOSFET8_CFG_REG_ADD		0x03

#define CHANNEL_NR_MIN		1
#define MOSFET_CH_NR_MAX		8

#define ERROR	-1
#define OK		0
#define FAIL	-1

#define MOSFET8_HW_I2C_BASE_ADD	0x38
#define MOSFET8_HW_I2C_ALTERNATE_BASE_ADD 0x20
typedef uint8_t u8;
typedef uint16_t u16;

typedef enum
{
	OFF = 0,
	ON,
	STATE_COUNT
} OutStateEnumType;

typedef struct
{
 const char* name;
 const int namePos;
 void(*pFunc)(int, char**);
 const char* help;
 const char* usage1;
 const char* usage2;
 const char* example;
}CliCmdType;

#endif //MOSFET8_H_

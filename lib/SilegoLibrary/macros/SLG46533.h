// SLG46533.h

#define GreenPAK				"SLG46533"

#define VIRTUAL_INPUTS			0xF4	// I2C Virtual Inputs

#define PATTERN_ID				0xE6	// Unique pattern set in Program Settings

// Counter data holds the number at which the counter will output high
#define CNT0_0_DATA				0xC5    // Counter data for CNT0 LSByte
#define CNT0_1_DATA				0xC6    // Counter data for CNT0 MSByte
#define CNT1_0_DATA				0xC7    // Counter data for CNT1 LSByte
#define CNT1_1_DATA				0xC8    // Counter data for CNT1 MSByte
#define CNT2_DATA				0xC0    // Counter data for CNT2
#define CNT3_DATA				0xC1    // Counter data for CNT3
#define CNT4_DATA				0xC2    // Counter data for CNT4
#define CNT5_DATA				0xC3    // Counter data for CNT5
#define CNT6_DATA				0xC4	// Counter data for CNT6

// Counted value holds the current value of the GreenPAK's counters while it's counting
#define CNT0_0_VAL				0xEB	// Counted value for CNT0 LSByte
#define CNT0_1_VAL				0xEC	// Counted value for CNT0 MSByte
#define CNT1_0_VAL				0xEE	// Counted value for CNT1 LSByte
#define CNT1_1_VAL				0xEF	// Counted value for CNT1 MSByte
#define CNT4_VAL				0xEA	// Counted value for CNT4
#define CNT6_VAL				0xED	// Counted value for CNT6

#define RAM_BYTE_0				0xD8	// User configurable RAM/OTP Byte 0
#define RAM_BYTE_1				0xD9	// User configurable RAM/OTP Byte 1
#define RAM_BYTE_2				0xDA	// User configurable RAM/OTP Byte 2
#define RAM_BYTE_3				0xDB	// User configurable RAM/OTP Byte 3
#define RAM_BYTE_4				0xDC	// User configurable RAM/OTP Byte 4
#define RAM_BYTE_5				0xDD	// User configurable RAM/OTP Byte 5
#define RAM_BYTE_6				0xDE	// User configurable RAM/OTP Byte 6
#define RAM_BYTE_7				0xDF	// User configurable RAM/OTP Byte 7
#define RAM_BYTE_8				0xD0	// User configurable RAM/OTP Byte 8
#define RAM_BYTE_9				0xD1	// User configurable RAM/OTP Byte 9
#define RAM_BYTE_10				0xD2	// User configurable RAM/OTP Byte 10
#define RAM_BYTE_11				0xD3	// User configurable RAM/OTP Byte 11
#define RAM_BYTE_12				0xD4	// User configurable RAM/OTP Byte 12
#define RAM_BYTE_13				0xD5	// User configurable RAM/OTP Byte 13
#define RAM_BYTE_14				0xD6	// User configurable RAM/OTP Byte 14
#define RAM_BYTE_15				0xD7	// User configurable RAM/OTP Byte 15

#define PIN_2_BYTE				0xF0	// PIN2 byte address
#define	PIN_2_BIT				0x02	// PIN2 bit location within byte
#define PIN_3_BYTE				0xF0	// PIN3 byte address
#define	PIN_3_BIT				0x04	// PIN3 bit location within byte
#define PIN_4_BYTE				0xF0	// PIN4 byte address
#define	PIN_4_BIT				0x08	// PIN4 bit location within byte
#define PIN_5_BYTE				0xF0	// PIN5 byte address
#define	PIN_5_BIT				0x10	// PIN5 bit location within byte
#define PIN_6_BYTE				0xF0	// PIN6 byte address
#define	PIN_6_BIT				0x20	// PIN6 bit location within byte
#define PIN_7_BYTE				0xF0	// PIN7 byte address
#define	PIN_7_BIT				0x40	// PIN7 bit location within byte
#define PIN_10_BYTE				0xF0	// PIN10 byte address
#define	PIN_10_BIT				0x80	// PIN10 bit location within byte

#define PIN_12_BYTE				0xF6	// PIN12 byte address
#define	PIN_12_BIT				0x01	// PIN12 bit location within byte
#define PIN_13_BYTE				0xF6	// PIN13 byte address
#define	PIN_13_BIT				0x02	// PIN13 bit location within byte
#define PIN_14_BYTE				0xF6	// PIN14 byte address
#define	PIN_14_BIT				0x04	// PIN14 bit location within byte
#define PIN_15_BYTE				0xF6	// PIN15 byte address
#define	PIN_15_BIT				0x08	// PIN15 bit location within byte
#define PIN_16_BYTE				0xF6	// PIN16 byte address
#define	PIN_16_BIT				0x10	// PIN16 bit location within byte
#define PIN_17_BYTE				0xF6	// PIN17 byte address
#define	PIN_17_BIT				0x20	// PIN17 bit location within byte
#define PIN_18_BYTE				0xF6	// PIN18 byte address
#define	PIN_18_BIT				0x40	// PIN18 bit location within byte
#define PIN_19_BYTE				0xF6	// PIN19 byte address
#define	PIN_19_BIT				0x80	// PIN19 bit location within byte

#define PIN_20_BYTE				0xF7	// PIN20 byte address
#define	PIN_20_BIT				0x01	// PIN20 bit location within byte

#define ACMP_OUT_BYTE			0xF7	// ACMP Output Byte Address
#define ACMP0_OUT_BIT			0x02	// ACMP0 Output Bit
#define ACMP1_OUT_BIT			0x04	// ACMP1 Output Bit
#define ACMP2_OUT_BIT			0x08	// ACMP2 Output Bit
#define ACMP3_OUT_BIT			0x10	// ACMP3 Output Bit

#define VREF_50mv				0x00	// ACMP Voltage Reference 50mv	
#define VREF_100mv				0x01	// ACMP Voltage Reference 100mv	
#define VREF_150mv				0x02	// ACMP Voltage Reference 150mv	
#define VREF_200mv				0x03	// ACMP Voltage Reference 200mv	
#define VREF_250mv				0x04	// ACMP Voltage Reference 250mv	
#define VREF_300mv				0x05	// ACMP Voltage Reference 300mv	
#define VREF_350mv				0x06	// ACMP Voltage Reference 350mv	
#define VREF_400mv				0x07	// ACMP Voltage Reference 400mv	
#define VREF_450mv				0x08	// ACMP Voltage Reference 450mv	
#define VREF_500mv				0x09	// ACMP Voltage Reference 500mv	
#define VREF_550mv				0x0A	// ACMP Voltage Reference 550mv	
#define VREF_600mv				0x0B	// ACMP Voltage Reference 600mv	
#define VREF_650mv				0x0C	// ACMP Voltage Reference 650mv	
#define VREF_700mv				0x0D	// ACMP Voltage Reference 700mv	
#define VREF_750mv				0x0E	// ACMP Voltage Reference 750mv	
#define VREF_800mv				0x0F	// ACMP Voltage Reference 800mv	
#define VREF_850mv				0x10	// ACMP Voltage Reference 850mv	
#define VREF_900mv				0x11	// ACMP Voltage Reference 900mv	
#define VREF_950mv				0x12	// ACMP Voltage Reference 950mv	
#define VREF_1000mv				0x13	// ACMP Voltage Reference 1000mv
#define VREF_1050mv				0x14	// ACMP Voltage Reference 1050mv
#define VREF_1100mv				0x15	// ACMP Voltage Reference 1100mv
#define VREF_1150mv				0x16	// ACMP Voltage Reference 1150mv
#define VREF_1200mv				0x17	// ACMP Voltage Reference 1200mv

#define ACMP0_VREF				0xCB	// ACMP Voltage Reference Address
#define ACMP1_VREF				0xCC	// ACMP Voltage Reference Address
#define ACMP2_VREF				0xCD	// ACMP Voltage Reference Address
#define ACMP3_VREF				0xCE	// ACMP Voltage Reference Address
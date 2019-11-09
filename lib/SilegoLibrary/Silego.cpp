/*
	Silego.h - Silego library for GreenPAK5 I2C commands.
	Copyright (c) 2016 David Riedell.  All right reserved.
*/

#include "Arduino.h"
#include "Silego.h"

Silego::Silego(int device_address) {
	Wire.begin();
	_device_address = device_address;
}


/* ==================== I2C WRITE ==================== */

void Silego::writeI2C(byte byte_address, byte data) {
	Wire.beginTransmission(_device_address);
	Wire.write(byte_address);
	Wire.write(data);
	Wire.endTransmission();
}

void Silego::writeI2C(byte byte_address, bool data, byte bit_location) {
	uint8_t value = 0;
	uint8_t byte_data = readI2C(byte_address);
	if (data == 0) {
		value = byte_data & ~bit_location;
	} else if (data == 1) {
		value = byte_data | bit_location;
	}
	writeI2C(byte_address, value);
	return;
}

void Silego::writeI2C(byte byte_address, byte data, byte bit_location, byte length) {
	uint8_t value = 0;
	uint8_t mask = 0xFF;
	uint8_t i = 0;
	uint8_t temp = bit_location;
	uint8_t byte_data = readI2C(byte_address);
	
	for (i = 0; i < length; i++) {
		mask = mask & ~temp;
		temp = temp << 1;
	}

	data = data << (bit_location / 2);
	temp = mask & byte_data;
	value = data | temp;
	
	writeI2C(byte_address, value);
	return;
}

/* ==================== I2C READ ==================== */


uint8_t Silego::readI2C(byte byte_address) {
	uint8_t value;
	Wire.beginTransmission(_device_address);
	Wire.write(byte_address);
	Wire.endTransmission();
	
	Wire.requestFrom(_device_address, 1);
	while(Wire.available()) {
		value = Wire.read();
	}
	return value;
}

bool Silego::readI2C(byte byte_address, byte bit_location) {
	bool value = 0;
	uint8_t byte_data = readI2C(byte_address, _device_address);
	value = byte_data & bit_location;

	return value;	
}
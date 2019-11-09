/*
	Silego.h - Silego library for Wiring - description
	Copyright (c) 2016 David Riedell.  All right reserved.
*/

// ensure this library description is only included once
#ifndef Silego_h
#define Silego_h

#include "Arduino.h"
#include "Wire.h"

class Silego {
	public:
		// Silego - Creates a Silego class
		Silego(int device_address);
		
		// writeI2C - Writes data to GreenPAK register byte_address
		void writeI2C(byte byte_address, byte data);
		void writeI2C(byte byte_address, bool data, byte bit_location);
		void writeI2C(byte byte_address, byte data, byte bit_location, byte length);

		// readI2C - Reads data from GreenPAK register byte_address
		uint8_t readI2C(byte byte_address);
		bool readI2C(byte byte_address, byte bit_location);
	
	private:
		int _device_address;
};


#endif


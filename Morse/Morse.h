#ifndef Morse_h
#define Morse_h
#if ARDUINO>=100
	#include "Arduino.h"
	#else 
		#include "WProgram.h"
 #endif

class Morse {
	public :
	Morse();
	void moe();
	void moi();
	void mos();
	void moh();
	void mo5();
	void signal_m();
	void signal_o();
	void signal_e();
	void signal_i();
	void signal_s();
	void signal_h();
	void signal_5();
	void signal_short_gap();
	void test();
	void setupMorse(uint8_t pin, long time);
	
	
	private :
	
	uint8_t _pin;
	long _time_unit;
	long _dot;
	long _dash;
	long _igap;
	long _sgap;
	long _mgap;
	unsigned long _time_now;
	
	
	
	
};

#endif

	
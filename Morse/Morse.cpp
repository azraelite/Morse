#include "Morse.h"
#include "Arduino.h"


Morse :: Morse()
{
	
}

void Morse :: setupMorse(uint8_t pin, long time)
{
	_pin=pin;
	_time_unit=time;
	_dot=time;
	_dash=time*3;
	_igap=_dot;
	_sgap=time*3;
	_mgap=time*3;
	
	pinMode(_pin, OUTPUT);
	Serial.begin(9600);

}
void Morse :: signal_m()
{
  _time_now = millis();
  digitalWrite(_pin, HIGH);
  Serial.print("-");
  while (millis() < _time_now + _dash)
  {}

  _time_now = millis();
  digitalWrite(_pin, LOW);
  Serial.print(" ");
  while (millis() < _time_now + _igap)
  {}

  _time_now = millis();
  digitalWrite(_pin, HIGH);
  Serial.print("-");
  while (millis() < _time_now + _dash)
  {}
	
}

void Morse :: signal_o()
{
  _time_now = millis();
  digitalWrite(_pin, HIGH);
  Serial.print("-");
  while (millis() < _time_now + _dash)
  {}

  _time_now = millis();
  digitalWrite(_pin, LOW);
  Serial.print(" ");
  while (millis() < _time_now + _igap)
  {}

  _time_now = millis();
  digitalWrite(_pin, HIGH);
  Serial.print("-");
  while (millis() < _time_now + _dash)
  {}

  _time_now = millis();
  digitalWrite(_pin, LOW);
  Serial.print(" ");
  while (millis() < _time_now + _igap)
  {}

  _time_now = millis();
  digitalWrite(_pin, HIGH);
  Serial.print("-");
  while (millis() < _time_now + _dash)
  {}
	
}

void Morse :: signal_e()
{
  _time_now = millis();
  digitalWrite(13, HIGH);
  Serial.print(".");
  while (millis() < _time_now + _dot)
  {}
	
}

void Morse :: signal_short_gap()
{
  _time_now = millis();
  digitalWrite(13, LOW);
  Serial.print("\t");
  while (millis() < _time_now + _sgap)
  {}
}

void Morse :: signal_i()
{
	_time_now = millis();
  digitalWrite(13, HIGH);
  Serial.print(".");
  while (millis() < _time_now + _dot)
  {}

  _time_now = millis();
  digitalWrite(13, LOW);
  Serial.print(" ");
  while (millis() < _time_now + _igap)
  {}

  _time_now = millis();
  digitalWrite(13, HIGH);
  Serial.print(".");
  while (millis() < _time_now + _dot)
  {}
}

void Morse :: signal_s()
{
  _time_now = millis();
  digitalWrite(13, HIGH);
  Serial.print(".");
  while (millis() < _time_now + _dot)
  {}

  _time_now = millis();
  digitalWrite(13, LOW);
  Serial.print(" ");
  while (millis() < _time_now + _igap)
  {}

  _time_now = millis();
  digitalWrite(13, HIGH);
  Serial.print(".");
  while (millis() < _time_now + _dot)
  {}

  _time_now = millis();
  digitalWrite(13, LOW);
  Serial.print(" ");
  while (millis() < _time_now + _igap)
  {}

  _time_now = millis();
  digitalWrite(13, HIGH);
  Serial.print(".");
  while (millis() < _time_now + _dot)
  {}

}

void Morse :: signal_h()
{
  _time_now = millis();
  digitalWrite(13, HIGH);
  Serial.print(".");
  while (millis() < _time_now + _dot)
  {}

  _time_now = millis();
  digitalWrite(13, LOW);
  Serial.print(" ");
  while (millis() < _time_now + _igap)
  {}

  _time_now = millis();
  digitalWrite(13, HIGH);
  Serial.print(".");
  while (millis() < _time_now + _dot)
  {}

  _time_now = millis();
  digitalWrite(13, LOW);
  Serial.print(" ");
  while (millis() < _time_now + _igap)
  {}

  _time_now = millis();
  digitalWrite(13, HIGH);
  Serial.print(".");
  while (millis() < _time_now + _dot)
  {}

  _time_now = millis();
  digitalWrite(13, LOW);
  Serial.print(" ");
  while (millis() < _time_now + _igap)
  {}

  _time_now = millis();
  digitalWrite(13, HIGH);
  Serial.print(".");
  while (millis() < _time_now + _dot)
  {}


}

void Morse :: signal_5()
{
  _time_now = millis();
  digitalWrite(13, HIGH);
  Serial.print(".");
  while (millis() < _time_now + _dot)
  {}

  _time_now = millis();
  digitalWrite(13, LOW);
  Serial.print(" ");
  while (millis() < _time_now + _igap)
  {}

  _time_now = millis();
  digitalWrite(13, HIGH);
  Serial.print(".");
  while (millis() < _time_now + _dot)
  {}

  _time_now = millis();
  digitalWrite(13, LOW);
  Serial.print(" ");
  while (millis() < _time_now + _igap)
  {}

  _time_now = millis();
  digitalWrite(13, HIGH);
  Serial.print(".");
  while (millis() < _time_now + _dot)
  {}

  _time_now = millis();
  digitalWrite(13, LOW);
  Serial.print(" ");
  while (millis() < _time_now + _igap)
  {}

  _time_now = millis();
  digitalWrite(13, HIGH);
  Serial.print(".");
  while (millis() < _time_now + _dot)
  {}

  _time_now = millis();
  digitalWrite(13, LOW);
  Serial.print(" ");
  while (millis() < _time_now + _igap)
  {}

  _time_now = millis();
  digitalWrite(13, HIGH);
  Serial.print(".");
  while (millis() < _time_now + _dot)
  {}

}

void Morse :: moe()
{
  signal_m(); signal_short_gap();
  signal_o(); signal_short_gap();
  signal_e(); signal_short_gap();

}

void Morse :: moi()
{
  signal_m(); signal_short_gap();
  signal_o(); signal_short_gap();
  signal_i();signal_short_gap();
	
}

void Morse :: mos()
{
  signal_m(); signal_short_gap();
  signal_o(); signal_short_gap();
  signal_s();signal_short_gap();
	
}

void Morse :: moh()
{
  signal_m(); signal_short_gap();
  signal_o(); signal_short_gap();
  signal_h();signal_short_gap();
	
}

void Morse :: mo5()
{
  signal_m(); signal_short_gap();
  signal_o(); signal_short_gap();
  signal_5();signal_short_gap();
	
}

void Morse :: test()
{
	moe();
  delay(2000);
  moi();
  delay(2000);
  mos();
  delay(2000);
  moh();
  delay(2000);
  mo5();
  delay(2000);
  
}
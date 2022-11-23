#include "defs.h"

byte cpBitsMsk8(byte a, byte b, byte msk)
{               // set bit in a matched by msk to value(s) from b
  a |= msk;     // make sure mask bit are 1
  a ^= msk;     // Flip bits where mask is 1 so a is now 0 at msk.
  b &= msk;     // Set bits not in msk to 0
  return a | b; // Or bits in.
}

uint8_t pwm_pins[] = _pwmPins;
// empty array for arrays with the size in the first element.
extern byte eA[]; // = {0};
boolean is_pwmPin(byte p)
{
  byte i;
  if (sizeof(pwm_pins) == 1)
  {
    if (pwm_pins[0] == 0xff)
    {
      return false;
    }
  }
  for (i = 0; i < sizeof(pwm_pins); i++)
  {
    if (p == pwm_pins[i])
      return true;
  }
  return false;
}

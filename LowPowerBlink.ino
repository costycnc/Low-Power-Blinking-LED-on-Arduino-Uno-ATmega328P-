/*
  LowPowerBlink.ino

  This sketch reduces the clock frequency of the ATmega328P (e.g., Arduino Uno)
  by configuring the CLKPR register to divide the system clock by 256.
  As a result, the CPU runs at 62.5 kHz instead of 16 MHz.

  The onboard LED on pin 13 will blink slowly due to the lower system clock,
  and the microcontroller will consume significantly less power.

  ⚠️ Note: All time-based functions (delay, millis, Serial, etc.)
  will run much slower at the reduced clock frequency.
*/

void setup() {
  pinMode(13, OUTPUT);             // Set pin 13 (onboard LED) as output

  cli();                           // Disable global interrupts

  _SFR_MEM8(0x61) = 128;           // Set CLKPCE bit to enable change to CLKPR
  _SFR_MEM8(0x61) = 8;             // Set CLKPS = 0b1000 → divide clock by 256 → 16 MHz / 256 = 62.5 kHz

  sei();                           // Re-enable global interrupts
}

void loop() {
  digitalWrite(13, HIGH);          // Turn LED on
  delay(4);                        // At 62.5 kHz, delay(4) ≈ 1 second
  digitalWrite(13, LOW);           // Turn LED off
  delay(4);                        // Wait again
}

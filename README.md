⚡ Low Power Blinking LED on Arduino Uno (ATmega328P)
This sketch demonstrates how to reduce the power consumption of an ATmega328P (e.g. Arduino Uno) by lowering the system clock frequency using the clock prescaler.


🧠 What It Does
Sets the CPU clock to 62.5 kHz (from the default 16 MHz) using the CLKPR register.

Blinks the onboard LED (pin 13) at a slow, visible rate.

Slower clock = lower energy consumption.

📉 Why Lower the Clock?
Reducing the system clock:

Lowers the dynamic power draw of the microcontroller.

Is useful for low-power applications like battery-powered sensors or embedded devices in sleep cycles.

Reduces the speed of all time-dependent functions (delay(), millis(), Serial, etc.).

🔋 Power Consumption Estimates
Clock	Voltage	Current (typical)
16 MHz	5V	~9 mA
1 MHz	5V	~2 mA
62.5 kHz	5V	~0.3 mA
Power-down	—	< 1 µA

(Values from Atmega328P datasheet, typical conditions)

⚠️ With a divided clock, delays and serial communication slow down dramatically.
For more precise timing, consider using timer interrupts or sleep modes instead.
https://ww1.microchip.com/downloads/en/DeviceDoc/Atmel-7810-Automotive-Microcontrollers-ATmega328P_Datasheet.pdf
<img width="911" height="514" alt="image" src="https://github.com/user-attachments/assets/13a3d324-96cf-4e8c-b60b-b3f2f7e9cc12" />
<img width="871" height="487" alt="image" src="https://github.com/user-attachments/assets/8e5af890-ab12-4b0f-80ea-ab6de733799d" />
<img width="940" height="460" alt="image" src="https://github.com/user-attachments/assets/99a0df87-7a30-4a17-ae03-c37e2b0f3a1e" />






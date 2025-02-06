# Proximity Alert System

An Arduino-based project that uses an HC-SR04 ultrasonic sensor to detect objects within 15 centimeters, triggering an LED and buzzer as alerts.

## Table of Contents

- Introduction
- Components
- Circuit Diagram
- Wiring Instructions
- Setup and Installation
- Code Explanation
- Usage
- Contributing
- License

## Introduction

The Proximity Alert System utilizes an Arduino UNO, an HC-SR04 ultrasonic sensor, an LED, and a buzzer to detect objects at close range. When an object is detected within 15 centimeters, the Arduino activates both the LED and the buzzer to alert the user. This project can be used for obstacle detection, security systems, or interactive installations.

## Components

- **Arduino UNO**  
  Arduino UNO
  *The Arduino UNO is a microcontroller board based on the ATmega328P. It provides digital and analog input/output pins, making it ideal for interactive projects.*

- **HC-SR04 Ultrasonic Sensor**  
  *This sensor sends out ultrasonic waves and measures the time it takes for the echo to return, allowing the Arduino to calculate distance.*

- **LED**  
  *An LED is used to provide a visual alert when an object is detected.*

- **Buzzer**  
  Buzzer Module
  *The buzzer module emits an audible sound to alert the user when an object is too close.*

- **Breadboard and Jumper Wires**  
  *Used to connect all components securely.*

- **220Ω Resistor**  
  *Used with the LED to limit current and protect the LED from damage.*

## Circuit Diagram

Circuit Diagram

*This diagram illustrates how to connect the ultrasonic sensor, LED, and buzzer to the Arduino UNO. Ensure all connections are secure on your breadboard.*

## Wiring Instructions

1. **Ultrasonic Sensor (HC-SR04):**
   - **VCC** → Arduino **5V**
   - **GND** → Arduino **GND**
   - **TRIG** → Arduino **Digital Pin 9**
   - **ECHO** → Arduino **Digital Pin 10**

2. **LED:**
   - **Anode (long leg)** → Arduino **Digital Pin 7** (via a **220Ω resistor**)
   - **Cathode (short leg)** → Arduino **GND**

3. **Buzzer:**
   - **Positive (long leg)** → Arduino **Digital Pin 8**
   - **Negative (short leg)** → Arduino **GND**

## Setup and Installation

1. **Clone the Repository:**

   ```bash
   git clone https://github.com/your-username/proximity-alert-system.git
   cd proximity-alert-system

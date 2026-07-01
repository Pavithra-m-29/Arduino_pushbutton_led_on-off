# Arduino Push Button and LED Interfacing

## Project Overview
This project demonstrates a fundamental input/output interface using an Arduino Uno simulated in Proteus 8 Professional. The system reads the digital state of a tactile push button configuration and controls an LED output accordingly, acting as a basic digital switch system.

---

## Components Used
* **Arduino Uno** (Microcontroller)
* **BUTTON** (Tactile Push Button Switch)
* **LED-PINK** (D1) (Visual Indicator Output)
* **PULLDOWN** (R1) (Resistor Network / External Pulldown configuration)
* **Proteus 8 Professional** (Simulation Platform)

---

## Circuit Connections

| Component / Pin | Arduino Pin | Description |
|-----------------|-------------|-------------|
| **Tactile Push Button** | D13 | Input interface to detect high signal on press |
| **LED-PINK (D1)** | D7 | Output signal indicator |

*Note: The button circuit uses an external pull-down resistor configuration connected to Pin 13 to ensure a clean active-high logic signal when pressed. The LED (D1) cathode terminal is tied directly to the common Ground (GND).*

---

## Features
* **Active-High Input Logic:** The circuit utilizes a pulldown mechanism keeping the input pin state reliably at 0V (LOW) until the button completes the loop to VCC (+5V) upon press.
* **Real-time I/O Control:** Demonstrates direct hardware state mapping where the output LED reflects the momentary physical state of the digital input pin.
* **Educational Template:** Serves as a foundation project for studying GPIO configuration and pull-down network hardware logic.

---

## Software Requirements
* **Arduino IDE** (For writing and compiling the C++ control code)
* **Proteus 8 Professional** (For circuit layout and real-time simulation)

---

## How to Run the Simulation
1. Clone or download this project repository.
2. Open the control code file (`.ino`) in the Arduino IDE.
3. Compile the code and generate the binary file by selecting **Sketch -> Export Compiled Binary**.
4. Open the project schematic named `Screenshot 2026-07-01 194044.png` in Proteus 8 Professional.
5. Double-click the Arduino Uno board, click the folder icon under **Program File**, and select the generated `.hex` file.
6. Click the **Play / Run** button at the bottom-left corner of the Proteus window to start the interactive simulation sequence.

---

## Simulation Preview
Below is the circuit setup capture during simulation:

<img width="1920" height="1080" alt="Screenshot 2026-07-01 194044" src="https://github.com/user-attachments/assets/3059a1ca-2f86-48b7-92b2-0e908b7b3e29" />


---

## Author
Pavithra M

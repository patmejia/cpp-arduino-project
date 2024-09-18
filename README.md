# **Basic LED Blink Setup with 220Ω Resistor for Initial Circuit Testing**

## **Project Overview**
This project demonstrates a simple **LED blink circuit** using an **Arduino Uno R3** and a **220Ω resistor** to ensure safe current flow through the LED. The project was carried out using **Arduino Cloud**, **Arduino Web Editor**, **Tinkercad**, and the **Elegoo Uno R3** kit for physical testing. This project serves as an initial circuit test to ensure proper setup, component connection, and code execution.

![Combined Simulation Side by Side](/media/combined_simulation_sidebyside.gif)

---

## **Hardware Components**
1. **Arduino Uno R3** (Elegoo)
2. **Breadboard**
3. **LED (Red)**
4. **220Ω Resistor** (Current Limiting Resistor)
5. **Connecting Wires**
   - Black Wire (GND)
   - Green Wire (Signal to Pin 13)

---

## **Tools and Platforms Used**
- **Arduino Cloud & Arduino Web Editor**: Used to write and upload the blink sketch.
- **Tinkercad**: Used for simulating the circuit before building the physical setup.
- **Elegoo Uno R3**: Arduino-compatible microcontroller used for the physical test.
- **macOS with USB-C to USB-A Adapter**: Used to connect the Arduino board to the computer for programming.

---

## **Circuit Setup**

1. **LED Connections**:
   - **Anode (long leg)**: Connected to **E12** on the breadboard.
   - **Cathode (short leg)**: Shared with **E13** on the breadboard and connected to the **GND** of the Arduino using a **black wire**.

2. **Resistor (220Ω)**:
   - One leg in **D12** (shared with the anode).
   - The other leg in **D1** on the breadboard.

3. **Green Signal Wire**:
   - Connect from **D1** on the breadboard to **Digital Pin 13** on the Arduino to control the LED.

---

## **Code Explanation**
This is a simple **Blink** sketch that blinks an external LED connected to **pin 13** of the Arduino.
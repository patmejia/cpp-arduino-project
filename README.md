# **Basic LED Blink Setup with 220Ω Resistor for Initial Circuit Testing**

## **Project Overview**
This project demonstrates a simple **LED blink circuit** using an **Arduino Uno R3** and a **220Ω resistor** to ensure safe current flow through the LED. It was completed using **Arduino Cloud**, **Arduino Web Editor**, **Tinkercad**, and the **Elegoo Uno R3** kit for physical testing. This serves as an initial circuit test for proper setup, connections, and code execution.

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
- **Arduino Cloud & Arduino Web Editor**: To write and upload the blink sketch.
- **Tinkercad**: For simulating the circuit before building the physical setup.
- **Elegoo Uno R3**: Arduino-compatible board used for testing.
- **macOS with USB-C to USB-A Adapter**: For connecting the Arduino board to the computer.

---

## **Circuit Setup**

1. **LED Connections**:
   - **Anode (long leg)**: Connected to **E12** on the breadboard.
   - **Cathode (short leg)**: Shared with **E13** on the breadboard and connected to **GND** using a **black wire**.

2. **Resistor (220Ω)**:
   - One leg in **D12** (shared with the anode).
   - The other leg in **D1** on the breadboard.

3. **Green Signal Wire**:
   - Connect **D1** on the breadboard to **Digital Pin 13** on the Arduino to control the LED.

---

## **Code Explanation**
This is a simple **Blink** sketch that blinks an external LED connected to **pin 13**.

```cpp
// Filename: Blink_LED
/*
 * This code blinks an external LED connected to pin 13.
 */

#define LED_PIN 13             // Define LED pin
const int delay_time = 1000;   // Constant for delay time

void setup() {
    pinMode(LED_PIN, OUTPUT);  // Set pin 13 as output
}

void loop() {
    digitalWrite(LED_PIN, HIGH);   // Turn the LED on
    delay(delay_time);             // Wait for 1 second
    digitalWrite(LED_PIN, LOW);    // Turn the LED off
    delay(delay_time);             // Wait for 1 second
}
```

---

### **Why 220Ω Resistor?**

The 220Ω resistor limits current through the LED to prevent damage. Using **Ohm’s Law**, it ensures the LED runs safely at 5V from the Arduino:

\[
R = \frac{V_{supply} - V_{LED}}{I}
\]

Where:
- \( V_{supply} = 5V \)
- \( V_{LED} = 2V \)
- \( I = 20mA \)

\[
R = \frac{5V - 2V}{0.02A} = 150\Omega
\]

A 150Ω resistor would work, but **220Ω** provides a safety margin to protect the LED.

---

## **Best Practices: Simulation to PCB**
When moving from **simulation** to **PCB**, follow best practices:

- **Component Placement**: Optimize layout to reduce interference and power loss.
- **Connections**: Match wiring from simulation, ensuring firm physical connections.
- **Testing**: Prototype on breadboard before finalizing PCB design.

---

## **How to Use**
1. **Tinkercad**:
   - Build the circuit as described and simulate the LED blink.
   - Upload the code using Tinkercad’s editor.
   
2. **Arduino Web Editor (Cloud)**:
   - Copy the provided code into a new sketch.
   - Connect your **Elegoo Uno R3** to your macOS via USB.
   - Upload the sketch and verify that the LED blinks.

---

## **Troubleshooting**
- **LED Not Blinking**:
  - Check wiring, especially the GND and pin 13 connections.
  - Ensure the resistor is in place to protect the LED.
  - Verify successful code upload in the console.

---

## **Conclusion**
This project demonstrates a basic **LED blink setup** using both simulation and physical hardware. It highlights the importance of resistors for safe current control and provides hands-on experience in working with **Arduino** circuits.

--- 

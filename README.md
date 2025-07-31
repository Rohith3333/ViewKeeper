# 🚨 Laptop Proximity Alert System using Ultrasonic Sensor 🖥️

A compact embedded system that alerts users when someone comes too close to their **laptop screen**. It uses an **ultrasonic sensor**, **buzzer**, **LED**, and **LCD display** to notify the user both visually and audibly.

---

## 📌 Features

- 🔴 **Red LED Alert** when someone is too close (≤ 40 cm)
- 🔊 **Buzzer Alarm** for audio feedback
- 💬 **LCD Display**:
  - `"Move Back"` warning when person is near
  - Live distance in cm when area is clear
- ⚙️ Powered by **ESP8266 NodeMCU**

---

## 🎯 Objective

To build a simple yet effective **proximity alert system** for laptops that improves **privacy** and **personal space awareness** in shared or public environments.

---

## 🧠 Concepts Practiced

- Embedded C programming using Arduino IDE  
- Interfacing **HC-SR04 ultrasonic sensor** with ESP8266  
- Working with **digital outputs** (LED & buzzer control)  
- **LCD interfacing** (16x2 parallel)  
- Real-time distance measurement and user feedback  
- Conditional logic & timing in embedded systems  

---

## 🧰 Components Used

- ESP8266 NodeMCU
- HC-SR04 Ultrasonic Sensor
- 16x2 LCD (parallel interface)
- Red LED
- Buzzer
- Jumper Wires
- Breadboard (optional)

---

## 🧠 Working Principle

1. The **ultrasonic sensor** continuously checks for nearby objects.
2. If a person is detected within **40 cm**:
   - LED turns on
   - Buzzer sounds
   - LCD displays: `Move Back`
3. If no one is close:
   - LCD displays the distance in centimeters
   - LED and buzzer remain off

---

## 👨‍💻 Author
Rohith Manne
LinkedIn • GitHub

⭐ Star this repository if you found it helpful!

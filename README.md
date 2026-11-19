# 🌡️ DHT11 Temperature and Humidity Monitoring Using IoT

## 📌 Project Overview

This project is an IoT-based temperature and humidity monitoring system developed using the **DHT11 sensor and NodeMCU ESP8266**.

The DHT11 sensor collects real-time temperature and humidity data. The NodeMCU ESP8266 connects to Wi-Fi and sends the collected data to the **KiwisIoT platform**, where the readings can be monitored through an online dashboard.

## 🎯 Objectives

- To monitor temperature and humidity in real time.
- To understand sensor interfacing with NodeMCU ESP8266.
- To establish Wi-Fi communication using ESP8266.
- To transmit sensor data to the KiwisIoT platform.
- To understand cloud-based IoT monitoring.

## 🧰 Components Required

- NodeMCU ESP8266
- DHT11 Temperature and Humidity Sensor
- Breadboard
- Jumper Wires
- USB Cable

## 💻 Software Requirements

- Arduino IDE
- ESP8266 Board Package
- DHT Sensor Library by Adafruit
- Adafruit Unified Sensor Library
- KiwisIoT Library
- KiwisIoT Platform

## 🔌 Circuit Connections

| DHT11 Sensor | NodeMCU ESP8266 |
|---|---|
| VCC | 3.3V |
| DATA | D2 |
| GND | GND |

## ⚙️ Working Principle

1. The DHT11 sensor measures the surrounding temperature and humidity.
2. NodeMCU ESP8266 reads the sensor values.
3. ESP8266 connects to the Wi-Fi network.
4. The collected temperature and humidity data are sent to the KiwisIoT platform.
5. Temperature and humidity are displayed separately on the dashboard.

## ☁️ KiwisIoT Platform Configuration

The KiwisIoT platform is used for online monitoring of sensor readings.

**Channel Configuration:**

| Channel | Parameter | Unit |
|---|---|---|
| Channel 0 | Temperature | °C |
| Channel 1 | Humidity | % |

## 📊 Data Monitoring

The system continuously updates the sensor readings at regular intervals.

- **Temperature:** Displays the surrounding temperature in Celsius.
- **Humidity:** Displays the relative humidity as a percentage.

## 📚 Learning Outcomes

Through this project, I learned:

- Interfacing DHT11 with NodeMCU ESP8266.
- Reading temperature and humidity values.
- Establishing Wi-Fi connectivity.
- Using Arduino libraries.
- Sending sensor data to an IoT platform.
- Monitoring real-time data through a cloud dashboard.

## 🚀 Future Improvements

- Add multiple environmental sensors.
- Implement temperature-based alerts.
- Develop a mobile monitoring interface.
- Store historical sensor readings for analysis.

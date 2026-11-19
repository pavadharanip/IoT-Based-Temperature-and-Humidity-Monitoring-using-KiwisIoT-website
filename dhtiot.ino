#include <ESP8266WiFi.h>
#include <KiwisIoT.h>
#include <DHT.h>

// WiFi credentials
const char* ssid = "lapptt";
const char* pass = "oppof298";

// KiwisIoT Topic ID
const char* topic = "dash_1794897000023";

// DHT11 configuration
#define DHTPIN D2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

// KiwisIoT object
KiwisIoT kiwisiot(ssid, pass, topic);

void setup() {

  Serial.begin(115200);

  Serial.println("DHT11 IoT Project");

  dht.begin();

  kiwisiot.begin();

  Serial.println("KiwisIoT Initialized");
}

void loop() {

  // Maintain connection
  kiwisiot.run();

  // Read temperature and humidity
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  // Check sensor readings
  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("DHT11 Sensor Error");
    delay(2000);
    return;
  }

  // Send temperature to Channel 0
  kiwisiot.send("0", temperature);

  // Send humidity to Channel 1
  kiwisiot.send("1", humidity);

  // Display readings
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  Serial.println("------------------");

  delay(3000);
}

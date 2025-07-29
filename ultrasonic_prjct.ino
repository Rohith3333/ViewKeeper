#include <LiquidCrystal.h>

#define TRIG_PIN 14  // GPIO14 (D5)
#define ECHO_PIN 12  // GPIO12 (D6)
#define LED_PIN 4     // GPIO4  (D2)

LiquidCrystal lcd(5, 2, 13, 15, 3, 1);  // RS, E, D4, D5, D6, D7

long duration;
float distance;

void setup() {
  Serial.begin(115200);
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);

  lcd.begin(16, 2);
  lcd.print("Ultrasonic Ready");
  delay(1000);
  lcd.clear();
}

void loop() {
  // Send ultrasonic pulse
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Read echo duration
  duration = pulseIn(ECHO_PIN, HIGH);

  // Calculate distance in cm
  distance = (duration * 0.0343) / 2;

  lcd.clear();

  if (distance <= 40) {
    digitalWrite(LED_PIN, HIGH);
    lcd.setCursor(0, 0);
    lcd.print("Move Back");
  } else {
    digitalWrite(LED_PIN, LOW);
    lcd.setCursor(0, 0);
    lcd.print("Distance:");
    lcd.setCursor(0, 1);
    lcd.print(distance);  // One decimal
    lcd.print(" cm");
    lcd.print("   ");
  }

  delay(1000);
}

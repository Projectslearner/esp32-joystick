/*
    Project name : ESP32 Joystick
    Modified Date: 24-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp32-joystick
*/

const int xAxisPin = A0; // Analog pin connected to X axis of joystick
const int yAxisPin = A1; // Analog pin connected to Y axis of joystick

void setup() {
  Serial.begin(115200); // Initialize serial communication
}

void loop() {
  // Read analog values from X and Y axes
  int xValue = analogRead(xAxisPin);
  int yValue = analogRead(yAxisPin);

  // Print values to serial monitor
  Serial.print("X-axis: ");
  Serial.print(xValue);
  Serial.print("\tY-axis: ");
  Serial.println(yValue);

  delay(100); // Small delay before the next reading
}

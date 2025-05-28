Touch Senser Code:
const int touchPin = 15;
const int ledPin = 2;

void setup()
{
Serial.begin(115200);
 pinMode(touchPin, INPUT);
 pinMode(ledPin, OUTPUT);
 digitalWrite(ledPin, LOW);
 Serial.println("TTP223 Touch Sensor Test Initialized!");
}

void loop()
{
 int touchState = digitalRead(touchPin);
 if (touchState == HIGH) {
 Serial.println("Touch detected!");
 digitalWrite(ledPin, HIGH);
 }
else
{
 Serial.println("No touch detected.");
 digitalWrite(ledPin, LOW);
 }
 delay(100);
}

Bluetooth code:
#include <BluetoothSerial.h>
BluetoothSerial SerialBT;
const int ledPin = 2;

void setup()
{
 Serial.begin(115200);
 SerialBT.begin("ESP32_LED_Control");
 Serial.println("Bluetooth is ready. Pair your device and connect!");
 pinMode(ledPin, OUTPUT);
 digitalWrite(ledPin, LOW);
}

void loop()
{
 if (SerialBT.available())
{
 char command = SerialBT.read();
 Serial.print("Received Command: ");
 Serial.println(command);
 if (command == '1')
{
 digitalWrite(ledPin, HIGH);
 Serial.println("LED is ON");
 SerialBT.println("LED is ON");
 }
else if (command == '0')
{
 digitalWrite(ledPin, LOW);
 Serial.println("LED is OFF");
 SerialBT.println("LED is OFF");
 } else
{
 Serial.println("Invalid Command. Use '1' to ON, '0' to OFF");
 SerialBT.println("Invalid Command. Use '1' to ON, '0' to OFF");
 }
 }
}





// Define pin numbers for RGB LED
const int redPin = 9;   // Red LED connected to pin 9
const int greenPin = 10; // Green LED connected to pin 10
const int bluePin = 11;  // Blue LED connected to pin 11

// Setup function runs once when you press reset
void setup() {
  // Set RGB LED pins as OUTPUT
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

// Loop function runs repeatedly
void loop() {
  // Red color
  setColor(255, 0, 0);
  delay(1000); // Wait for 1 second
  
  // Green color
  setColor(0, 255, 0);
  delay(1000); // Wait for 1 second
  
  // Blue color
  setColor(0, 0, 255);
  delay(1000); // Wait for 1 second
  
  // Yellow color (Red + Green)
  setColor(255, 255, 0);
  delay(1000); // Wait for 1 second
  
  // Cyan color (Green + Blue)
  setColor(0, 255, 255);
  delay(1000); // Wait for 1 second
  
  // Magenta color (Red + Blue)
  setColor(255, 0, 255);
  delay(1000); // Wait for 1 second
  
  // White color (Red + Green + Blue)
  setColor(255, 255, 255);
  delay(1000); // Wait for 1 second
  
  // Off
  setColor(0, 0, 0);
  delay(1000); // Wait for 1 second
}

// Function to set color of RGB LED
void setColor(int red, int green, int blue) {
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}

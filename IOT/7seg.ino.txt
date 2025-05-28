// Pin mapping for the 7-segment display
const int a = 2;
const int b = 3;
const int c = 4;
const int d = 5;
const int e = 6;
const int f = 7;
const int g = 8;

// Array to store the digit patterns for numbers 0-9
const int digitPatterns[10][7] = {
  {1, 1, 1, 1, 1, 1, 0},  // 0
  {0, 1, 1, 0, 0, 0, 0},  // 1
  {1, 1, 0, 1, 1, 0, 1},  // 2
  {1, 1, 1, 1, 0, 0, 1},  // 3
  {0, 1, 1, 0, 0, 1, 1},  // 4
  {1, 0, 1, 1, 0, 1, 1},  // 5
  {1, 0, 1, 1, 1, 1, 1},  // 6
  {1, 1, 1, 0, 0, 0, 0},  // 7
  {1, 1, 1, 1, 1, 1, 1},  // 8
  {1, 1, 1, 1, 0, 1, 1}   // 9
};

void setup() {
  // Set all segment pins as output
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

void loop() {
  // Loop through digits 0-9
  for (int i = 0; i < 10; i++) {
    displayDigit(i);  // Display the current digit
    delay(1000);      // Wait for 1 second before showing the next digit
  }
}

// Function to display a digit on the 7-segment display
void displayDigit(int digit) {
  digitalWrite(a, digitPatterns[digit][0]);
  digitalWrite(b, digitPatterns[digit][1]);
  digitalWrite(c, digitPatterns[digit][2]);
  digitalWrite(d, digitPatterns[digit][3]);
  digitalWrite(e, digitPatterns[digit][4]);
  digitalWrite(f, digitPatterns[digit][5]);
  digitalWrite(g, digitPatterns[digit][6]);
}


// 7 Segment display using Arduino
int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;

// Define button pin
int buttonPin = 9;

// Variable to track the current digit
int currentDigit = 0;

// Digit patterns for 0-9 (common cathode)
int digits[10][7] = {
  {1, 1, 1, 1, 1, 1, 0}, // 0
  {0, 1, 1, 0, 0, 0, 0}, // 1
  {1, 1, 0, 1, 1, 0, 1}, // 2
  {1, 1, 1, 1, 0, 0, 1}, // 3
  {0, 1, 1, 0, 0, 1, 1}, // 4
  {1, 0, 1, 1, 0, 1, 1}, // 5
  {1, 0, 1, 1, 1, 1, 1}, // 6
  {1, 1, 1, 0, 0, 0, 0}, // 7
  {1, 1, 1, 1, 1, 1, 1}, // 8
  {1, 1, 1, 1, 0, 1, 1}  // 9
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

  // Set button pin as input
  pinMode(buttonPin, INPUT);
}

void loop() {
  // Check if the button is pressed
  if (digitalRead(buttonPin) == HIGH) {
    delay(200); // Debounce delay
    currentDigit++; // Increment the digit
    if (currentDigit > 9) {
      currentDigit = 0; // Reset to 0 if it exceeds 9
    }
    displayDigit(currentDigit); // Update the display
  }
}

// Function to display a digit
void displayDigit(int num) {
  digitalWrite(a, digits[num][0]);
  digitalWrite(b, digits[num][1]);
  digitalWrite(c, digits[num][2]);
  digitalWrite(d, digits[num][3]);
  digitalWrite(e, digits[num][4]);
  digitalWrite(f, digits[num][5]);
  digitalWrite(g, digits[num][6]);
}
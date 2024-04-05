int led_R = 7;
int led_G = 6;
int led_B = 5;

void setup() {
  pinMode(led_R, OUTPUT);
  pinMode(led_G, OUTPUT);
  pinMode(led_B, OUTPUT);
  quitLed();

}

void loop() {
  onRed();
  delay(400);
  onGreen();
  delay(400);
  onBlue();
  delay(400);
  onFuchsia();
  delay(400);
  onYellow();
  delay(400);
  onCyan();
  delay(400);
  quitLed();
  delay(200);

}

void onRed() {
  digitalWrite(led_R, LOW);
  digitalWrite(led_G, HIGH);
  digitalWrite(led_B, HIGH);

}

void onGreen() {
  digitalWrite(led_R, HIGH);
  digitalWrite(led_G, LOW);
  digitalWrite(led_B, HIGH);

}

void onBlue() {
  digitalWrite(led_R, HIGH);
  digitalWrite(led_G, HIGH);
  digitalWrite(led_B, LOW);

}

void onFuchsia() {
  digitalWrite(led_R, LOW);
  digitalWrite(led_G, HIGH);
  digitalWrite(led_B, LOW);

}

void onYellow() {
  digitalWrite(led_R, LOW);
  digitalWrite(led_G, LOW);
  digitalWrite(led_B, HIGH);

}

void onCyan() {
  digitalWrite(led_R, HIGH);
  digitalWrite(led_G, LOW);
  digitalWrite(led_B, LOW );

}

void quitLed() {
  digitalWrite(led_R, HIGH);
  digitalWrite(led_G, HIGH);
  digitalWrite(led_B, HIGH);

}
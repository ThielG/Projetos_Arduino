int led = 4;
int sensor = A1;
int valorsensor = 0;

void setup() {
  Serial.begin(9600);
  pinMode (led, OUTPUT);

}

void loop() {
  Serial.println(valorsensor);
  valorsensor = analogRead (sensor);

  if((valorsensor) < 20){ 
    digitalWrite(led, HIGH);
  } else {
  digitalWrite(led, LOW);
  }
}
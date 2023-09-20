#define PIN_LED 13
unsigned int count = 0;
bool ledState = false;

void setup() {
  Serial.begin(115200);
  while (!Serial) {
    ;
  }
  Serial.println("Hello World!");
  
  pinMode(PIN_LED, OUTPUT);
  digitalWrite(PIN_LED, LOW);
}

void loop() {
  Serial.println(++count);
  ledState = !ledState;
  digitalWrite(PIN_LED, ledState);
  delay(1000);
}

#define PIN_LED 13
unsigned int count;
bool ledState = false;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while (!Serial) {
    ;
  }
  Serial.println("Hello World!");
  count = 0;
  digitalWrite(PIN_LED, LOW);
}

void loop() {
  Serial.println(++count);
  ledState = !ledState;
  digitalWrite(PIN_LED, ledState);
  delay(1000);
}

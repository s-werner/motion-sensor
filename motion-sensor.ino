const int sensorPin = 0;
int lightCal;
int lightVal;

void setup() {
  Serial.begin(115200);
  lightCal = analogRead(sensorPin);
}

void loop() {
  lightVal = analogRead(sensorPin);
  Serial.println(lightVal);

  if(lightCal - 25 > lightVal){
    Serial.println("****ALERT****");
  }
  delay(500);
}

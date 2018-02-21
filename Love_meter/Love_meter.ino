const int sensorPin = A0;
const float baseTemp = 20.0;

void setup() {
  Serial.begin(9600); //opens a serial port
  for (int pin = 3; pin <= 5; pin++){
    pinMode(pin, OUTPUT);
    digitalWrite(pin, LOW);
  }
  pinMode(7, OUTPUT);
  digitalWrite(7, LOW);
}

void loop() {
  int sensorVal = analogRead(sensorPin);

  Serial.print("Sensor value is: ");
  Serial.print(sensorVal);

  float voltage = (sensorVal/1024.0)*5.0; //convert the value to Volts

  Serial.print(", Voltage is: ");
  Serial.print(voltage);
  Serial.print(", degrees in C is: ");
  float temp = (voltage-0.5)*100.0; //convert volts to temperature
  Serial.println(temp);

  if (temp < baseTemp+5){
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    digitalWrite(7, LOW);
  }else if (temp >= baseTemp+5 && temp < baseTemp+8){
    digitalWrite(5, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    digitalWrite(7, LOW);
  }else if (temp >= baseTemp+8 && temp < baseTemp+11){
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(7, LOW);
  }else if (temp >= baseTemp+11 && temp < baseTemp+14){
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(7, LOW);
  }else if (temp >= baseTemp+14){
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(7, HIGH);
  }
  delay(1000);
}

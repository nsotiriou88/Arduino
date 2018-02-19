//A variable to hold the level of coolness
int Value1 = 1;
int Value2 = 2;
int Value3 = 3.14159;
int Value4 = 4;
int Value5 = 5;
int Value6 = 6;


void setup() {
 
  Serial.begin(115200);
 
}
 
void loop() {
 
  //Send the value of coolFactor to the the Serial port.
  //So we can see it in the serial monitor window
  //  Serial.print(coolFactor);
  Serial.print(Value1);
  Serial.print(",");
  Serial.print(Value2);
  Serial.print(",");
  Serial.print(sin(Value3));
  Serial.print(",");
  Serial.print(Value4);
  Serial.print(",");
  Serial.print(Value5);
  Serial.print(",");
 Serial.println(Value6);
}
// It only accepts one print per Serial.print.

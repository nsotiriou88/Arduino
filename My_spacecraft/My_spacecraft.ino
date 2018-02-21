int switchx;
void setup() {
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  switchx = digitalRead(2);

  if (switchx == LOW){
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
  }
  else {
    digitalWrite(5, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(3, LOW);

    delay(250);
    digitalWrite(3, HIGH);

    delay(125);
    digitalWrite(4, LOW);

    delay(250);
    digitalWrite(4, HIGH);

    delay(125);
  }
}

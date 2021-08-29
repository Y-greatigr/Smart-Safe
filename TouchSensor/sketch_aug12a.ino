int touchSensor=8;
int Buzzer=13;
int melody[] =    {100, 40};

void setup(){
  Serial.begin(9600);
  pinMode(Buzzer, OUTPUT);
  pinMode(touchSensor, INPUT);
}

void loop(){
  int touchValue=digitalRead(touchSensor);

  if(touchValue==HIGH){
    digitalWrite(Buzzer, HIGH);
    for (int j = 0; j < 7; j++) {
      for (int i = 0; i < 2; i++) {
        tone(13, melody[i], 400);
        delay(200);
        noTone(13);
    }
    Serial.println("112");
  }
  }
else{
    digitalWrite(Buzzer, LOW);
    Serial.println("999");
  }
}

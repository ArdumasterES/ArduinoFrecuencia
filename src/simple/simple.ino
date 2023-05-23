unsigned long t0;

void setup(){
  pinMode(8, OUTPUT);
  t0=millis();
}

void loop(){
  digitalWrite(8, HIGH);
  while(millis()-t0<2000);
  t0=millis();
  digitalWrite(8, LOW);
  while(millis()-t0<2000);
  t0=millis();
}
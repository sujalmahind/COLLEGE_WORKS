int EN=A0;
void setup(){
pinMode(EN,OUTPUT);
}
void loop(){
analogWrite(EN,255);
delay(10000);
analogWrite(EN,0);
delay(1000);
}

// LED blinking project 2nd year electrical enginnering 
int PINNo=5;
void setup() {
pinMode(PINNo,OUTPUT);
}
void loop() {
digitalWrite(PINNo,HIGH);
delay(2000);
digitalWrite(PINNo,LOW);
delay(2000);
}

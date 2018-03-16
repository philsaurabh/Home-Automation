/*
CREATED BY-
ALOK SINGH
SAURABH SHARMA 
VIPIN KUMAR
KRISHNA KUMAR YADAV 
HOME APPLIANCES CONTROL DEVICES(LED'S ETC),INTERNET OF THINGS,PROJECT,2016;
SUBMIITED TO- DR. VINAY SINGH
*/
int state;
int pin1=8;
int pin2=9;
int pin3=10;Page 37 of 51
int pin4=11;
int pin5=12;
int timer = 100;
void setup(){
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);
Serial.begin(9600);
}
void loop(){
if(Serial.available()>=0)
{
state = Serial.read();
if(state == '1')Page 38 of 51
{
digitalWrite(8, HIGH);
delay(1000);
state=0;
}
if(state == '2')
{
digitalWrite(9, HIGH);
delay(1000);
state=0;
}
if(state == '3')
{
digitalWrite(10, HIGH);
delay(1000);Page 39 of 51
state=0;
}
if(state == '4')
{
digitalWrite(11, HIGH);
delay(1000);
state=0;
}
if(state == '5')
{
digitalWrite(12, HIGH);
delay(1000);
state=0;
}
if(state=='13')
{Page 40 of 51
digitalWrite(13,HIGH);
delay(1000);
state=0;
}
if(state=='6')
{
int i=10;
while(i--)
{
// loop from the lowest pin to the highest:
for (int thisPin = 8; thisPin < 13; thisPin++)
{
// turn the pin on:
digitalWrite(thisPin, HIGH);
delay(timer);
// turn the pin off:Page 41 of 51
digitalWrite(thisPin, LOW);
}
// loop from the highest pin to the lowest:
for(int thisPin = 12; thisPin > 9; thisPin--)
{
// turn the pin on:
digitalWrite(thisPin, HIGH);
delay(timer);
// turn the pin off:
digitalWrite(thisPin, LOW);
} } }
if(state=='7')Page 42 of 51
{
digitalWrite(8,LOW);
}
if(state=='8')
{
digitalWrite(9,LOW);
}
if(state=='9')
{
digitalWrite(10,LOW);
}
if(state=='10')
{
digitalWrite(11,LOW);
}
if(state=='11')Page 43 of 51
{
digitalWrite(12,LOW);
} } }

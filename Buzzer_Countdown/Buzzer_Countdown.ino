/*
  Title: Buzzer Countdown
  Author: Gearóid Cremin
  Circuit Setup:
  1. HDSP-C363 7 Segment With a,b...g connected to pins 2-9 of arduino
  2. Common-cathode so connect pin 6 & 1 connected to ground through 200 Ohm Resistor
  3. VELLEMAN SVM06 Buzzer connected from arduino pin 13 to ground through a 200 ohm resistor
  
  This project will countdown from 1 to 10 and then sound the buzzer.
  This will loop infinitely.
 */
int i= 0;
int j =0;
int k = 0;
// count name a b c d e f g
int zero[] = {1,1,1,1,1,1,0};
int one[] =  {0,1,1,0,0,0,0};
int two[] =  {1,1,0,1,1,0,1};
int three[] ={1,1,1,1,0,0,1};
int four[] = {0,1,1,0,0,1,1};
int five[] = {1,0,1,1,0,1,1};
int six[] =  {1,0,1,1,1,1,1};
int seven[] ={1,1,1,0,0,0,0};
int eight[] ={1,1,1,1,1,1,1};
int nine[] = {1,1,1,1,0,1,1};
void segmentCount(int z[]) //Takes in an array that tells the programme what segments to light
{
   for(i=0;i<8;i++){
     if(z[i]==1) digitalWrite(i+2,HIGH);
     else digitalWrite(i+2,LOW);
   }
   delay(1000);
}
void buzz(int pin, int duration)//Takes in the pin the buzzer is connected to and the duration that you want it sound for
{
   digitalWrite(pin,HIGH);
   delay(duration);
   digitalWrite(pin,LOW); 
}
void setup(){
  for(k=2;k<9;k++)
   pinMode(k,OUTPUT); 
  pinMode(13,OUTPUT);
}
void loop(){
  segmentCount(nine);
  segmentCount(eight);
  segmentCount(seven);
  segmentCount(six);
  segmentCount(five);
  segmentCount(four);
  segmentCount(three);
  segmentCount(two);
  segmentCount(one);
  segmentCount(zero);
  buzz(13,500); //Sound the Buzzer!
}

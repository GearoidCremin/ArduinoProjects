/*
  Title: Buzzer Countdown
  Author: Gearóid Cremin
  Circuit Setup:
  1. HDSP-C363 7 Segment With a,b...g connected to pins 2-9 of arduino
  2. Common-cathode so connect pin 6 & 1 connected to ground through 200 Ohm Resistor
  (I did this as an alternative to putting all inputs through a resistor)
  3. VELLEMAN SVM06 Buzzer connected from arduino pin 13 to ground through a 200 ohm resistor
  (Sometimes a smaller resistor if the buzzer is quiet)
  
  This project will countdown from 1 to 10 and then sound the buzzer.
  This will loop infinitely.
 */
int i= 0;
int j =0;
int k = 0;


void segmentDisplay(int a) //Takes in an array that tells the programme what segments to light
{
  // count name a b c d e f g
  int zero[] = {1,1,1,1,1,1,0}; //array that will say what segments are highlighted for each number
  int one[] =  {0,1,1,0,0,0,0};
  int two[] =  {1,1,0,1,1,0,1};
  int three[] ={1,1,1,1,0,0,1};
  int four[] = {0,1,1,0,0,1,1};
  int five[] = {1,0,1,1,0,1,1};
  int six[] =  {1,0,1,1,1,1,1};
  int seven[] ={1,1,1,0,0,0,0};
  int eight[] ={1,1,1,1,1,1,1};
  int nine[] = {1,1,1,1,0,1,1};
  int invalid[] = {0,0,0,0,0,0,0}; //turn off all segments
  //switch case for displaying number
  switch (a){
   case 0:
   for(i=0;i<8;i++){
     if(zero[i]==1) digitalWrite(i+2,HIGH); //checks if the segmant is highlighed and sets high if it is
     else digitalWrite(i+2,LOW); //sets low for segments that are not highlighted
   }
   delay(1000);
   case 1:
   for(i=0;i<8;i++){
     if(one[i]==1) digitalWrite(i+2,HIGH);
     else digitalWrite(i+2,LOW);
   }
   delay(1000);
   case 2:
   for(i=0;i<8;i++){
     if(two[i]==1) digitalWrite(i+2,HIGH);
     else digitalWrite(i+2,LOW);
   }
   delay(1000);
   case 3:
   for(i=0;i<8;i++){
     if(three[i]==1) digitalWrite(i+2,HIGH);
     else digitalWrite(i+2,LOW);
   }
   delay(1000);
   case 4:
   for(i=0;i<8;i++){
     if(four[i]==1) digitalWrite(i+2,HIGH);
     else digitalWrite(i+2,LOW);
   }
   delay(1000);
   case 5:
   for(i=0;i<8;i++){
     if(five[i]==1) digitalWrite(i+2,HIGH);
     else digitalWrite(i+2,LOW);
   }
   delay(1000);
   case 6:
   for(i=0;i<8;i++){
     if(six[i]==1) digitalWrite(i+2,HIGH);
     else digitalWrite(i+2,LOW);
   }
   delay(1000);
   case 7: 
   for(i=0;i<8;i++){
     if(seven[i]==1) digitalWrite(i+2,HIGH);
     else digitalWrite(i+2,LOW);
   }
   delay(1000);
   case 8:
   for(i=0;i<8;i++){
     if(eight[i]==1) digitalWrite(i+2,HIGH);
     else digitalWrite(i+2,LOW);
   }
   delay(1000);
   case 9: 
   for(i=0;i<8;i++){
     if(nine[i]==1) digitalWrite(i+2,HIGH);
     else digitalWrite(i+2,LOW);
   }
   delay(1000);
   default:
   for(i=0;i<8;i++){
     if(invalid[i]==1) digitalWrite(i+2,HIGH);
     else digitalWrite(i+2,LOW);
   }
   delay(1000);
  }
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
  segmentDisplay(9);
  segmentDisplay(8);
  segmentDisplay(7);
  segmentDisplay(6);
  segmentDisplay(5);
  segmentDisplay(4);
  segmentDisplay(3);
  segmentDisplay(2);
  segmentDisplay(1);
  segmentDisplay(0);
  buzz(13,500); //Sound the Buzzer!
}


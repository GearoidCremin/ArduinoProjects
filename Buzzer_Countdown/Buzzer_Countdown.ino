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
void segmentCount(int z[])
{
   for(i=0;i<8;i++){
     if(z[i]==1) digitalWrite(i+2,HIGH);
     else digitalWrite(i+2,LOW);
   }
   delay(1000);
}
void buzz(int pin, int duration)
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
  buzz(13,500);
}

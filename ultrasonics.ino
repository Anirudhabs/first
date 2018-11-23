// Arduino code

const int trigger1 = 8; 
const int echo1 = 9; 
const int trigger2 = 7; 
const int echo2 = 6;

long time_taken;
int dist,distL,distR;

 

void setup() {
Serial.begin(9600); 
  
pinMode(trigger1, OUTPUT); 
pinMode(echo1, INPUT); 
pinMode(trigger2, OUTPUT); 
pinMode(echo2, INPUT); 
}


void calculate_distance(int trigger, int echo)
{
digitalWrite(trigger, LOW);
delayMicroseconds(2);
digitalWrite(trigger, HIGH);
delayMicroseconds(10);
digitalWrite(trigger, LOW);

time_taken = pulseIn(echo, HIGH);
dist= time_taken*0.034/2;
if (dist>50)
dist = 50;
}

void loop() { 
calculate_distance(trigger1,echo1);
distL =dist; 

calculate_distance(trigger2,echo2);
distR =dist; 


if ((distL >30 && distR>30) && (distL <50 && distR<50)) 
{Serial.println("Play/Pause");delay(1000);}

calculate_distance(trigger1,echo1);
distL =dist;

calculate_distance(trigger2,echo2);
distR =dist;

 

if (distL>=10 && distL<=15)
{ 
  calculate_distance(trigger1,echo1);
  distL =dist;
  if (distL>=10 && distL<=15)
  {
    Serial.println("Left Locked");
    while(distL<=40)
    {
      calculate_distance(trigger1,echo1);
      distL =dist;
      if (distL<15)  
      {Serial.println ("3");delay(1000);}
      if (distL>25) 
      {Serial.println ("4");delay(1000);}
    }
  }
}


if (distR>=10 && distR<=15)
{ 
  calculate_distance(trigger2,echo2);
  distR =dist;
  if (distR>=10 && distR<=15)
  {
    Serial.println("Right Locked");
    while(distR<=40)
    {
      calculate_distance(trigger2,echo2);
      distR =dist;
      if (distR<15) 
      {Serial.println ("1");delay(1000);}
      if (distR>25) 
      {Serial.println ("2");delay(1000);}
  }
}
}

delay(200);
}

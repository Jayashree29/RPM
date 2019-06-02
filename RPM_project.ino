int sp=8;
int x;
int count=0;
float RPM;
unsigned int time;
void setup()
{
  pinMode(sp,INPUT);
  Serial.begin(9600);
}
void loop()
{
  x=digitalRead(sp);
  if(x==HIGH)
  {
    count++;
   }
   while(count>0)
   {
    time=millis();
     RPM=1000/time;
     break;
   }
   Serial.println(time);
   Serial.println(RPM);
   delay(250);
   
}


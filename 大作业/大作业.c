// C++ code
//
#include <MsTimer2.h>     //��ʱ�����ͷ�ļ�
 
int tick = 0; 
 
//�жϷ������
void onTimer()
{
  Serial.print("timer ");
  Serial.println(tick++);
}
 
void setup()
{
  Serial.begin(9600); 
  
  MsTimer2::set(1000, onTimer);
  MsTimer2::start();
}
 
void loop()
{
  
}
int pinInterrupt = 2; 
void onChange()
{
   if ( digitalRead(pinInterrupt) == LOW )
      Serial.println("Key Down");
   else
      Serial.println("Key UP");
}
 
void setup()
{
   Serial.begin(9600); 
 
   pinMode( pinInterrupt, INPUT);
   

   attachInterrupt( digitalPinToInterrupt(pinInterrupt), onChange, CHANGE);
}
 
void loop()
{

  for (int i = 0; i < 100; i++)
  {
   
    delay(10); 
  }
}

#include<Servo.h>
Servo sara;

void setup()
{
  sara.attach(3);
}

void loop()
{
   for(int baslangic = 0;baslangic <= 180; baslangic= baslangic + 15)
  {
  sara.write(baslangic);
  delay(1000);  
  }

 for(int bitis = 180;bitis >= 0; bitis= bitis - 30)
  {
  sara.write(bitis);
  delay(1000);  
  } 
  
}

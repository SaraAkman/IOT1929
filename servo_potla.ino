#include<Servo.h>
Servo servo1;
Servo servo2;
#define potansiyometre1 A0
#define potansiyometre2 A1
int pot1_degeri;
int pot2_degeri;

void setup() {
 Serial.begin(9600); // buradan seri haberleşme başlatıyoruz
servo1.attach(3);
servo2.attach(5);
}

void loop() {
 pot1_degeri=analogRead(potansiyometre1);
 pot2_degeri=analogRead(potansiyometre2);
int ilk_deger=map(pot1_degeri , 0, 1023, 0, 180);
int ikinci_deger=map(pot2_degeri , 0, 1023, 0, 90);
/********************LÜTFEN******************
********************KODU*********************
*************ÇALIŞTIRDIĞINIZDA***************
**********************AÇILAR*****************
********************İÇİN*********************
*******************SERİ**********************
*******************PORT**********************
****************EKRANINDAN*******************
****************YARARLANINIZ*****************
******************HAZIRLYAN******************
*****************SARA************************
******************AKMAN*********************/

servo1.write(ilk_deger);
  Serial.print("Birinci açı  degeri = ");
  Serial.println(ilk_deger);
servo2.write(ikinci_deger);
  Serial.print("ikinci açı  degeri = ");
  Serial.println(ikinci_deger);
  delay(15);
}

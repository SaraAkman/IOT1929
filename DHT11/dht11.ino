#include <dht.h>

dht DHT;

#define DHT11_PIN 2

void setup(){
  Serial.begin(9600);
}

void loop(){
  int chk = DHT.read11(DHT11_PIN);
  Serial.print("Sicaklik = selsiyus");
  Serial.println(DHT.temperature);
  Serial.print("Nem = ");
  Serial.println(DHT.humidity);
  delay(1000);
  /********************************
   * Sara Akman
   */
  ///////////////////////////////*/
  //kelvine çevirelim
  float kelvin = DHT.temperature+273;
    Serial.print(kelvin);Serial.println("derece Kelvin");
  delay(1000);

   //Fahrenayta çevirme yapalım
  float Fahrenheit = ((DHT.temperature)*9.0/5.0)+32.0;
    Serial.print(Fahrenheit);
    Serial.println("derece Fahrenheit");
  delay(1000);
}

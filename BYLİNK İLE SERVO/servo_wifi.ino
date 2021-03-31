#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

Servo servo;
char auth[] = "LmNSakBuwgEJCoayjCRKm6lk-UT2JjUe";
char ssid[] = "SUPERONLINE_WiFi_4529";
char pass[] = "LVPEMLFN7MKM";
void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
 servo.attach(5);
}
void loop()
{
  Blynk.run();
}
BLYNK_WRITE(V0){
  servo.write(param.asInt());
  }

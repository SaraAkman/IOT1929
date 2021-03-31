const int DC = 3;
const int pot = A0;
int motor;
int led =9;
void setup()
{
 pinMode(DC, OUTPUT);
 Serial.begin(9600); 
}

void loop()
{
int oku = analogRead(A0);
float hiz = oku*5.0; 
  hiz /= 1024.0;
  motor = analogRead(pot);
motor = map(motor,0, 1023, 0, 255);
analogWrite(DC, motor);
 Serial.print(hiz);
Serial.println("m/s hizinda");
delay(1000); 
  if (hiz> 4){
    analogWrite(led,10);
  }
  else{
    analogWrite(led,0);
  }
}

int ledler[] = {3,5,6}; //bağladığımız pinleri programa bildiriyoruz

void setup() {

  for(int i=0; i<3; i++){ //listedeki elemanları 1 arttırmasını istiyoruz
    
  pinMode(ledler[i], OUTPUT);// listedeki tüm elemanların output olduğunu söylütoruz
  
  }

}
/*************************************************
************************************************
*********************SARA***********************
*********************AKMAN**********************
************************************************
************************************************/
void loop() {


    digitalWrite(3, HIGH); //kırmızı ledi yakıyoruz
    delay(10000);
    digitalWrite(5, HIGH); //sarı ledi yakıyoruz
    delay(10000);  
    digitalWrite(3, LOW); //kırmızı ledi söndürüyoruz
    digitalWrite(5, HIGH); //sarı ledi yakıyoruz
    delay(2000);    
    digitalWrite(5, LOW); //sarı ledi söndürüyoruz
  
    digitalWrite(6, HIGH); //yeşil ledi yakıyoruz
    delay(5000);
    digitalWrite(6, LOW); //yeşil ledi söndürüyoruz
  }

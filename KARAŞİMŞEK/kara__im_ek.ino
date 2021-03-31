int ledler[] = {3,4,5}; //bağladığımız pinleri programa bildiriyoruz

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

  for(int i=0; i<3; i++){
    digitalWrite(ledler[i], HIGH); //ledi yakıyoruz
    delay(500);
    digitalWrite(ledler[i], LOW); //ledi söndürüyoruz
  }

  for(int a=2; a>-1; a--){
    digitalWrite(ledler[a], HIGH); //ledi sıra olarak tersten olacak şekilde yakıyor
    delay(500);
    digitalWrite(ledler[a], LOW); //söndürüyor
  }

}

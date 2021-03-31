int RST_PIN = D3; 
 int SS_PIN = D4; 
 int Yesil = D0; 
 int Kirmizi = D1; 
#include <SPI.h>
#include <MFRC522.h>
MFRC522 rfid(SS_PIN, RST_PIN); 
byte ID[4] = {112,133,86,50}; //Kart ID'sini tanımlıyoruz. 

void setup() {
  pinMode(Yesil,OUTPUT);
  pinMode(Kirmizi,OUTPUT);
  Serial.begin(9600); 
  SPI.begin(); 
  rfid.PCD_Init();
}

void loop() {
  if (!rfid.PICC_IsNewCardPresent()) 
    return;
  if (!rfid.PICC_ReadCardSerial()) 
      return;
  if (rfid.uid.uidByte[0] == ID[0] && 
    rfid.uid.uidByte[1] == ID[1] &&
    rfid.uid.uidByte[2] == ID[2] &&
    rfid.uid.uidByte[3] == ID[3]) {
    Serial.println("Hoş Geldiniz Sara Hanım ");
    ekranaYazdir();
      digitalWrite(Yesil, 1);                           
      delay(3000);
      digitalWrite(Yesil, 0);
  }
  else {                             
    Serial.println("Yetkisiz Giriş ");
    ekranaYazdir();
    digitalWrite(Kirmizi,HIGH);
    delay(3000);
    digitalWrite(Kirmizi,LOW);
  }
  rfid.PICC_HaltA();
}

void ekranaYazdir() {
  Serial.print("Kart Numarasi: ");
  for (int sayac = 0; sayac < 4; sayac++) {
    Serial.print(rfid.uid.uidByte[sayac]);
    Serial.print(" ");
  }
  Serial.println("");
}

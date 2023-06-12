#include <LCD5110_Basic.h> //EKRANIN BASİC KÜTÜPHANESİ
LCD5110 nesne(8, 9, 10, 11, 12); //NESNE TANIMLAMA (DEĞİŞKEN TANIMLAMA GİBİ)
extern uint8_t SmallFont[]; //KÜÇÜK FONT
extern uint8_t MediumNumbers[]; //ORTA FONT
extern uint8_t BigNumbers[]; //BÜYÜK FONT
int mesafe = 0;
int sure = 0;
void setup() {
  nesne.InitLCD();
  pinMode(7, INPUT);
  pinMode(6, OUTPUT);
  nesne.setContrast(65); //LCD KONTRAST AYARINI SAĞLAR YAZILMAZSA 70 OLARAK SABİT KALIR 0-127 ARASI DEĞER ALIR
}
void loop() {
  digitalWrite(6, 0); delayMicroseconds(2);
  digitalWrite(6, 1); delayMicroseconds(10);
  digitalWrite(6, 0);
  sure = pulseIn(7, 1);
  // ÜST KISIMDA TAMAMEN MESAFE SENSÖRÜNÜN AYARINI YAPTIM
  String mesafe_2 = String(mesafe); //5110 GRAFİK EKRAN İNT TÜRÜNDE DEĞİŞKEN YAZAMADIĞI İÇİN İNT DEĞİŞKENİNİ
  //STRİNG DEĞİŞKENİNE DÖNÜŞTÜTÜYORUZ
  mesafe = (sure / 2) / 29, 154; // MESAFEYİ BULUYORUZ
  if (mesafe < 100){
  nesne.invert(true); //kullanılmayan pixeller ile kullanılmayanların yerini değiştirdiğimiz kısım true ve false değeri alır
  }
  else{
    nesne.invert(false);
  }
  if(mesafe<0){
    nesne.invert(false);
  }
  nesne.setFont(BigNumbers);//LCD NİN YAZI FONTUNU BELİRLİYORUZ

  nesne.print(mesafe_2, CENTER, 8); //MESAFE DEĞİŞKENİNİN EKRANDAKİ KONUMUNU AYARLIYORUZ 2. SATIRIN ORTASINA AYARLIYORUZ 
  delay(100);
  nesne.clrRow(8, LEFT, RIGHT); //LCD DE BELİRLENEN SATIR ARALIĞINI SİLER 8 ---> SATIR LEFT---->EN SOL RIGHT---> EN SAĞ
//EKRANI TAMAMEN SİLMEK İSTERSEK  (bu koda uyarlı hali):  nesne.clrScr();----> bütün ekranı temizler

}

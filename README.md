# Hassas Akıllı Ventilasyon Aygıtı

Bu proje, **ESP32** tabanlı bir **akıllı havalandırma sistemi**dir.  
Havadaki zararlı gazları algılar, kullanıcıya uyarı verir ve ortamı otomatik olarak havalandırır.  

## 📌 Özellikler
- **Zararlı gaz algılama** → MQ-2 sensörü ile hassas ölçüm.
- **Otomatik pencere açma** → Servo motor ile pencereyi kontrol eder.
- **Hava sirkülasyonu** → Fan motoru ile temiz hava akışı sağlar.
- **Sesli ve görsel uyarı** → Buzzer ve LED ile anında ikaz.
- **Tam otomatik çalışma** → İnsan müdahalesi olmadan çalışabilir.
- **Modüler kod yapısı** → Farklı sensör ve motorlarla kolay uyarlanabilir.

---

## 📦 Malzeme Gereksinimleri
| Parça Adı               | Adet | Açıklama |
|-------------------------|------|----------|
| MQ-2 Gaz Sensörü        | 1    | LPG, metan, duman algılar |
| Standart LED            | 1    | Görsel uyarı |
| Standart Buzzer         | 1    | Sesli uyarı |
| Tower Pro Servo         | 1    | Pencere açma mekanizması |
| L298N Motor Sürücüsü    | 1    | Fan kontrolü |
| Standart Fırçalı Motor  | 1    | Hava giriş fanı |
| ESP32 Geliştirme Kartı  | 1    | Ana kontrol kartı |

---

## 🛠 Kurulum
1. **ESP32** kartınızı bilgisayarınıza bağlayın.
2. Arduino IDE üzerinden gerekli kütüphaneleri yükleyin:
   - `Servo.h`
   - `MQ2.h`
3. Kod dosyalarını indirin ve yükleyin.
4. Devreyi şemaya göre kurun.
5. Sistemi çalıştırın ve sensörleri test edin.

---

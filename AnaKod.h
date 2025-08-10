#include <Servo.h> // Deneyap Kart Kullanıyorsanız "Deneyap_Servo.h" kullanın!

Servo pencereServo;

// Pin tanımları
const int gazSensorPin = A0;   // Gaz sensörü (MQ-2 gibi)
const int buzzerPin    = 2;    // Buzzer
const int ledPin       = 3;    // Uyarı LED'i
const int fanPin       = 4;    // Fan röle modu
const int servoPin     = 5;    // Pencere servosu

// Ayarlar
const int gazEsik = 300;       // Gaz algılama eşiği (sensöre göre ayarlayın)
bool pencereAcik = false;

void setup() {
  Serial.begin(9600);

  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(fanPin, OUTPUT);

  pencereServo.attach(servoPin);
  pencereServo.write(0); // Pencere kapalı konum

  digitalWrite(buzzerPin, LOW);
  digitalWrite(ledPin, LOW);
  digitalWrite(fanPin, LOW);

  Serial.println("Hassas Akilli Ventilasyon Aygiti baslatildi.");
}

void loop() {
  int gazDeger = analogRead(gazSensorPin);
  Serial.print("Gaz Degeri: ");
  Serial.println(gazDeger);

  if (gazDeger > gazEsik) {
    // Zararlı gaz algılandı
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(fanPin, HIGH);

    if (!pencereAcik) {
      pencereServo.write(90); // Pencere açılıyor
      pencereAcik = true;
      Serial.println("Pencere acildi, fan calisiyor.");
    }
  } 
  else {
    // Ortam güvenli
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
    digitalWrite(fanPin, LOW);

    if (pencereAcik) {
      pencereServo.write(0); // Pencere kapanıyor
      pencereAcik = false;
      Serial.println("Pencere kapandi, fan durdu.");
    }
  }

  delay(500);
}

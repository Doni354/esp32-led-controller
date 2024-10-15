#define BLYNK_PRINT Serial  
#define BLYNK_TEMPLATE_ID "TMPL6EDRi5hDT"
#define BLYNK_TEMPLATE_NAME "Lampu cuy"
#define BLYNK_AUTH_TOKEN "aUVcseOND8BuHmHlkpuN6R5Es5FPa7sk"

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Wokwi-GUEST";
char pass[] = "";

BlynkTimer timer;

#define LED1 13  // Lampu 1 pada pin GPIO 13
#define LED2 2  // Lampu 2 pada pin GPIO 2

int SW_State1 = 0;
int SW_State2 = 0;

// Fungsi untuk mengontrol lampu pertama (LED1) dari Virtual Pin V0
BLYNK_WRITE(V0)
{
  SW_State1 = param.asInt();
  if (SW_State1 == 1)
  {
    digitalWrite(LED1, HIGH);
    Serial.println("LAMPU 1 HIDUP");
    Blynk.virtualWrite(V1, HIGH);  // Tampilkan status lampu 1 di V1
  }
  else
  {
    digitalWrite(LED1, LOW);
    Serial.println("LAMPU 1 MATI");
    Blynk.virtualWrite(V1, LOW);  // Tampilkan status lampu 1 di V1
  }
}

// Fungsi untuk mengontrol lampu kedua (LED2) dari Virtual Pin V2
BLYNK_WRITE(V2)
{
  SW_State2 = param.asInt();
  if (SW_State2 == 1)
  {
    digitalWrite(LED2, HIGH);
    Serial.println("LAMPU 2 HIDUP");
    Blynk.virtualWrite(V3, HIGH);  // Tampilkan status lampu 2 di V3
  }
  else
  {
    digitalWrite(LED2, LOW);
    Serial.println("LAMPU 2 MATI");
    Blynk.virtualWrite(V3, LOW);  // Tampilkan status lampu 2 di V3
  }
}

void setup()
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
  timer.run();
}

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

#define LED 13
int SW_State=0;

BLYNK_WRITE (V0)
{
  SW_State = param.asInt();
  if (SW_State == 1)
  {
    digitalWrite(LED, HIGH);
    Serial.println("LAMPU HIDUP");
    Blynk.virtualWrite(V1, HIGH);
  }
  else
  {
    digitalWrite(LED, LOW);
    Serial.println("LAMPU MATI");
    Blynk.virtualWrite(V1, LOW);
  }
}

void setup()
{
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
  timer.run();
}
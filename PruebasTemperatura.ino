#include <DHT.h>
#include <DHT_U.h>

int sensor = 2;
int temperatura;
int humedad;

DHT dht(sensor, DHT11);

void setup() {
  Serial.begin(115200);
  dht.begin();

}

void loop() {
  temperatura = dht.readTemperature();
  humedad = dht.readHumidity();
  Serial.print("Temperaura: ");
  Serial.println(temperatura);
  Serial.print(" Humedad: ");
  Serial.println(humedad);
  delay(500);


}

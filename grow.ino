#include <dht.h>

dht DHT;

#define DHT11_PIN 7

void setup(){
  Serial.begin(9600);
}

void loop()
{
  int chk = DHT.read11(DHT11_PIN);
  //temperature variables
  int actualTemp = DHT.temperature * 1.8 + 32;
  int tempResult = actualTemp;
  //humidity variables
  int actualHumidity = DHT.humidity;
  int humidityResult = actualHumidity;
  
  Serial.write("Temperature = ");
  Serial.print(tempResult);
  Serial.println("\n");
  Serial.write("Humidity = ");
  Serial.print(humidityResult);
  Serial.println("\n");
  delay(60000);
}

  #include <DHT.h>

  #define DHTPIN 4// Datapin is connected to D2 on the ESP
  #define DHTTYPE DHT11 // Name the sensor as an object
  DHT dht(DHTPIN, DHTTYPE);
  
  
  void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("DHT TEST SUCCESSFUL!");
  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  float h= dht.readHumidity();
  float t= dht.readTemperature();
  float f= dht.readTemperature(true);
  if (isnan(h) || isnan(t) || isnan(f))
  {
    Serial.println("Something is not working as intended");
    return;
}
Serial.println("Humidity: ");
Serial.println(h);
Serial.print("%");
Serial.println("Temperature");
Serial.println(t);
Serial.print("degree celsius.");
delay(2000);

}

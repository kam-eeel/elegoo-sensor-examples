//2018.6.28
#include <dht_nonblocking.h>

#define DHT_SENSOR_TYPE DHT_TYPE_11
//#define DHT_SENSOR_TYPE DHT_TYPE_21
//#define DHT_SENSOR_TYPE DHT_TYPE_22

static const int DHT_SENSOR_PIN = 2;
DHT_nonblocking dht_sensor( DHT_SENSOR_PIN, DHT_SENSOR_TYPE ); // create dht sensor object to interface with sensor

void setup( )
{
  Serial.begin( 9600); // start serial monitor on 9600 baud
}
void loop( )
{
  float temperature;
  float humidity;

  if(dht_sensor.measure(&temperature, &humidity)){ // measure the temperature and humidity, check if value has been assigned
    // print values to serial monitor
    Serial.print( "T = " );
    Serial.print( temperature, 1 );
    Serial.print( " deg. C, H = " );
    Serial.print( humidity, 1 );
    Serial.println( "%" );
  }
}


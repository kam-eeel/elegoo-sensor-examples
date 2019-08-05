/******************************************
 *Website: www.elegoo.com
 * 
 *Time:2017.12.12
 *
 ******************************************/
int  sensorPin  =  A0;     // select the input  pin for  the potentiometer 
int  ledPin  =  13;      // select the pin for  the LED
int  sensorValue =  0;  // variable to  store  the value  coming  from  the sensor

void setup()
{
// define pins and start serial monitor
pinMode(ledPin,OUTPUT);
Serial.begin(9600);
}
void loop(){
// assign sensorValue with value from sensor
sensorValue =  analogRead(sensorPin);
// flash led
digitalWrite(ledPin,  HIGH); 
delay(sensorValue); 
digitalWrite(ledPin,  LOW);
delay(sensorValue);
// print sensor value to serial
Serial.println(sensorValue,  DEC);
}


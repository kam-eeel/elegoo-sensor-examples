/******************************************
 *Website: www.elegoo.com
 * 
 *Time:2017.12.12
 *
 ******************************************/
int  redpin =  11;          // select the pin for  the red LED 
int  yellowpin  =10;       // select the pin  for  the blueLED 
int  val;


void setup()
{
  // define output pins and start serial monitor
  pinMode(redpin, OUTPUT);
  pinMode(yellowpin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  for (val = 255;  
  val > 0;  
  val--)
  {
    // cycle through colour combinations
    analogWrite(11, val);
    analogWrite(10, 255 - val);


    delay(15);
  }
  for (val = 0; val < 255;  val++)
  {
    // reverse cycle through colour combinations
    analogWrite(11, val);
    analogWrite(10, 255 - val);
    delay(15);
  }
  Serial.println(val,  DEC);
}


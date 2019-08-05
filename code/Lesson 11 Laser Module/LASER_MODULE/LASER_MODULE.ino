/******************************************
 *Website: www.elegoo.com
 * 
 *Time:2017.12.12
 *
 ******************************************/
int pos = 0;    

void setup() {
  pinMode(9,OUTPUT); // define pin 9 as laser output 
}

void loop() {
  for (pos = 0; pos <= 255; pos += 1) 
  { 
    // turn on laser and increase intensity
    analogWrite(9,pos);              
    delay(25);                       
  }
  for (pos = 255; pos >= 0; pos -= 1) 
  { 
    // decrease laser intensity until laser is off
    analogWrite(9,pos);             
    delay(25);                      
  }
}

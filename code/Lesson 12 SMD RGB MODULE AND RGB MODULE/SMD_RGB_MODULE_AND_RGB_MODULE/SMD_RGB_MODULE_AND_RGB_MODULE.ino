/******************************************
 *Website: www.elegoo.com
 * 
 *Time:2017.12.12
 *
 ******************************************/
int redpin = 11; //select the pin for the red LED
int greenpin =10;// select the pin for the green LED
int bluepin =9; // select the pin for the  blue LED

int val;
void setup() { 
	// define output pins and start serial monitor on 9600 baud
	pinMode(redpin, OUTPUT); 
	pinMode(bluepin, OUTPUT); 
	pinMode(greenpin, OUTPUT); 
	Serial.begin(9600);
}
void loop()
{
	for(val=255; val>0; val--)
	{
		// cycle through colours on rgb spectrum from red to blue
		analogWrite(11, val); 
		analogWrite(10, 255-val);
		analogWrite(9, 128-val); 
		delay(50);
	}
	for(val=0; val<255; val++)
	{
		// cycle through colours on rgb spectrum from blue to red
		analogWrite(11, val); 
		analogWrite(10, 255-val); 
		analogWrite(9, 128-val); 
		delay(50);
	}
	Serial.println(val, DEC);
}


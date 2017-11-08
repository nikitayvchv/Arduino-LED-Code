   /* SimpleToggle_PB_LED_FIXED */

const byte LEDpin = 3;
const byte SWITCHpin = 2;

byte LEDstate = HIGH;
byte SWITCHstate;
byte lastSWITCHstate;

void setup() {
  // put your setup code here, to run once:
pinMode(LEDpin, OUTPUT);
pinMode(SWITCHpin, INPUT);
digitalWrite(SWITCHpin, HIGH);
}


void loop() {
  // put your main code here, to run repeatedly:
  
SWITCHstate = digitalRead(SWITCHpin);
if ((lastSWITCHstate == HIGH) && (SWITCHstate == LOW))
{
    LEDstate = !LEDstate;
    digitalWrite(LEDpin, LEDstate);
    delay(300);
}
lastSWITCHstate = SWITCHstate;
}

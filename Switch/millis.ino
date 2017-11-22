//millis()

   /* SimpleToggle_PB_LED */

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

unsigned long lastTime = millis();
const long interval = 100;

void loop() {
  // put your main code here, to run repeatedly:
  
SWITCHstate = digitalRead(SWITCHpin);
if ((lastSWITCHstate == HIGH) && (SWITCHstate == LOW) && (millis() - lastTime >= interval))
{
    
    LEDstate = !LEDstate;
    digitalWrite(LEDpin, LEDstate);
    //delay(millis() - lastTime);
    
    lastTime = millis();
}
  
  lastSWITCHstate = SWITCHstate;
}

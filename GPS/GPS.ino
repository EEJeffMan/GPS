/*
 * Title: Controller
 * 
 * Author: EEJeffMan
 * 
 * Description: Read GPS data from old GPSlim device. 
 * 
 *    Hardware:
 *        TBD
 *        
 *    Connections:
 *        TBD
 *        
 *    
 *  
 * 
 */

 #include <SoftwareSerial.h>

#define RXpin   7
#define TXpin   6

SoftwareSerial mySerial(RXpin, TXpin);

void setup()
{
  mySerial.begin(38400);
  Serial.begin(38400);
}

void loop()
{
  static unsigned int button_press = 0;

  while(1)
  {
    if(mySerial.available())
      Serial.write(mySerial.read());
  }
}


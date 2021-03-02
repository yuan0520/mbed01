#include "mbed.h"
#include "led.h"

DigitalOut myLED(LED1);
DigitalOut myLED2(LED3);

void Led(DigitalOut &ledpin);

int main()
{
   myLED = 0;
   myLED2 = 0;
   while (true)
   {
      for(int i=0; i<3; i++){
         Led(myLED2);
      }
      
      for(int j=0; j<2; j++){
         Led(myLED);
      }
   }
}
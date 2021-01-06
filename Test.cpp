#include "mbed.h"

DigitalOut myled(LED1);
DigitalOut redled(D2);
DigitalOut greenled(D3);
DigitalOut blueled(D4);
DigitalInOut rotarysensor(D5);

int main() {  
    
      //if(){     
        while(1) {
            printf(rotarysensor)
            myled = 1; // LED is ON
            wait(0.05); // 200 ms
            myled = 0; // LED is OFF
            wait(0.05); // 1 sec
            //red
            redled = 1; // LED is ON
            wait(0.05); // 200 ms
            redled = 0; // LED is OFF
            wait(0.05); // 1 sec
            //green
            greenled = 1; // LED is ON
            wait(0.05); // 200 ms
            greenled = 0; // LED is OFF
            wait(0.05); // 1 sec
            //blue
            blueled = 1; // LED is ON
            wait(0.05); // 200 ms
            blueled = 0; // LED is OFF
            wait(0.05); // 1 sec
        }
    //}    
}

/*
 * Sharp IR (infrared) distance measurement module for Arduino
 * Measures the distance in cm. 

 * Original library: https://github.com/guillaume-rico/SharpIR
 
 * Watch Video instrution for this code: https://youtu.be/GL8dkw1NbMc
 * 
 * Full explanation of this code and wiring diagram is available at
 * my Arduino Course at Udemy.com here: http://robojax.com/L/?id=62

 * Written by Ahmad Shamshiri on Feb 03, 2018 at 07:34
 * in Ajax, Ontario, Canada. www.robojax.com
 * 

 * Get this code and other Arduino codes from Robojax.com
Learn Arduino step by step in structured course with all material, wiring diagram and library
all in once place. Purchase My course on Udemy.com http://robojax.com/L/?id=62

If you found this tutorial helpful, please support me so I can continue creating 
content like this. You can support me on Patreon http://robojax.com/L/?id=63

or make donation using PayPal http://robojax.com/L/?id=64

 *  * This code is "AS IS" without warranty or liability. Free to be used as long as you keep this note intact.* 
 * This code has been download from Robojax.com
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

*/
  // Sharp IR code for Robojax.com
#include <SharpIR.h>

#define IR A0 // define signal pin
#define model 215 // used 1080 because model GP2Y0A21YK0F is used
// Sharp IR code for Robojax.com
// ir: the pin where your sensor is attached
/* 
model: an int that determines your sensor:
GP2Y0A02YK0F --> "20150"
/GP2Y0A21YK --> "1080"
GP2Y0A710K0F --> "100500"
GP2YA41SK0F --> "430"
GP2Y0A51SK0F --> "215"                                            
*/                                         

SharpIR SharpIR(IR, model);
void setup() {
    // Sharp IR code for Robojax.com
 Serial.begin(57600);
 Serial.println("Robojax Sharp IR  ");
}

void loop() {
    // Sharp IR code for Robojax.com
    delay(500);   

  unsigned long startTime=millis();  // takes the time before the loop on the library begins

  double dis=SharpIR.distance();  // this returns the distance to the object you're measuring

  // Sharp IR code for Robojax.com

  Serial.print("Mean distance: ");  // returns it to the serial monitor
  Serial.println(dis);
  unsigned long endTime=millis()-startTime;  // the following gives you the time taken to get the measurement
  Serial.print("Time taken (ms): ");
  Serial.println(endTime);  
  // Sharp IR code for Robojax.com
     
}
//#include <MsTimer2.h>

// Toggle LED on pin 13 each second
boolean output = HIGH;
//void flash() {
//  
//
//  digitalWrite(13, output);
//  output = !output;
////   MsTimer2::stop();
//}

void setup() {
  pinMode(13, OUTPUT);
 digitalWrite(13, output);
//  output = !output;
//  MsTimer2::set(200, flash); // 500ms period
//  MsTimer2::start();
}

void loop() {
  delay(200);
  output = !output;
  digitalWrite(13, output);
}

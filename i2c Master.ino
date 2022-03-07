#include <Wire.h>

void setup(){
    Wire.begin();
}
void loop(){
    Wire.beginTransmission(1);//Put the address of the slave.
    Wire.write("Hello World");//Write data to slave
    Wire.endTransmission();//End transmission
}

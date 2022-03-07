#include <Wire.h>

void setup()
{
    Wire.begin(1); // i2c communication can provide 1024 unique address.
    Wire.onReceive(ReceieveEvent);
    Serial.begin(9600);
}
String data = "";
void loop()
{
    Wire.beginTransmission(1); // Put the address of the slave.
    Wire.write("Hello World"); // Write data to slave
    Wire.endTransmission();
    Serial.println(data);//print received data
}
void ReceieveEvent(int howMany)
{ // the input parameter is required for the function to operate.
    while (Wire.available() /*Check if any data is available to read*/)
    {
        data += (char)Wire.read();
    }
}
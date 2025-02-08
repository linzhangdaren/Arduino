#include <Arduino.h>
// 用 for循环实现闪烁LED
void setup()
{
    pinMode(8, OUTPUT);
    for (int i = 0; i < 5; i++)
    {
        digitalWrite(8, HIGH);
        delay(500);
        digitalWrite(8, LOW);
        delay(500);
    }
}

void loop()
{
    // put your main code here, to run repeatedly:
}

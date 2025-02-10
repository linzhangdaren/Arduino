#include <Arduino.h>
int led = 2;
int button = 3;

void setup()
{
    // put your setup code here, to run once:

    pinMode(led, OUTPUT);
    pinMode(button, INPUT_PULLUP);
}

void loop()
{
    // put your main code here, to run repeatedly:
    // 当按钮按下会和GND相连读取LOW,默认是高电平,所以用LOW判断
    if (digitalRead(button) == LOW)
    {
        digitalWrite(led, HIGH);
    }
    else
    {
        digitalWrite(led, LOW);
    }
}

#include <Arduino.h>
// 流水灯
void setup()
{
    // put your setup code here, to run once:
    // 设置引脚2到4为输出
    for (int i = 2; i <= 4; i++)
    {
        pinMode(i, OUTPUT);
    }
}

void loop()
{
    // put your main code here, to run repeatedly:
    // 从引脚引脚2到4依次点亮
    for (int i = 2; i <= 4; i++)
    {
        digitalWrite(i, HIGH);
        delay(500);
        digitalWrite(i, LOW);
        delay(500);
    }
}

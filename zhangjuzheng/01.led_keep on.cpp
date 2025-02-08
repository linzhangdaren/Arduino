#include <Arduino.h>
// 灯光常亮
void setup()
{
    // put your setup code here, to run once:
    pinMode(8, OUTPUT); // 设置8号引脚为输出模式
}

void loop()
{
    // put your main code here, to run repeatedly:
    digitalWrite(8, HIGH); // 点亮8号引脚
}
 
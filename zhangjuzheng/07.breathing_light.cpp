#include <Arduino.h>
// 呼吸灯
void setup()
{
    // put your setup code here, to run once:
    pinMode(3, OUTPUT);
}

void loop()
{
    // put your main code here, to run repeatedly:
    // 模拟信号的输出范围是0~255，所以循环输出0~255的模拟信号
    for (int i = 0; i <= 255; i++) // led灯的亮度从0~255变化
    {
        analogWrite(3, i);
        delay(10);
    }
    for (int i = 255; i >= 0; i--) // led灯的亮度从255~0变化
    {
        analogWrite(3, i);
        delay(10);
    }
}

#include <Arduino.h>

int ledPin = 3; // 定义LED连接的引脚
int R = A0;     // 定义电阻连接的模拟引脚
int R_read = 0; // 用于存储从电阻读取的原始模拟值
int new_R = 0;  // 用于存储映射后的电阻值（范围缩小到0-100）
int new_R2 = 0; // 用于存储上一次的映射后的电阻值，以便比较

void setup()
{
    Serial.begin(9600);      // 初始化串口通信，波特率为9600
    pinMode(ledPin, OUTPUT); // 设置LED引脚为输出模式
}

void loop()
{
    R_read = analogRead(R);               // 读取电阻引脚的模拟值
    new_R = map(R_read, 0, 1023, 0, 100); // 将读取的模拟值映射到0-100的范围内
    if (new_R != new_R2)
    {                               // 如果当前映射值与上一次不同
        Serial.println(new_R);      // 通过串口打印当前映射值
        analogWrite(ledPin, new_R); // 根据映射值调整LED的亮度
    }
    new_R2 = new_R; // 更新上一次的映射值
    delay(50);      // 延时50毫秒，减少读取频率
}

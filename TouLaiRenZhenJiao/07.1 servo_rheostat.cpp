#include <Arduino.h>
#include <Servo.h>

// 无刷电机&可变电阻联动 可以做机器人抓取等

// 创建一个Servo对象
Servo mada;
// 定义电阻值的读数变量
int servo_read;
// 马达的角度值
int mada_read = 0;
// 交互信息serial

void setup()
{
    // 初始化串口
    Serial.begin(9600);
    // 初始化马达针脚端口
    mada.attach(3);
    // 初始化马达角度为0
    mada.write(0);
}

void loop()
{ // 读取A0口的模拟值
    servo_read = analogRead(A0);
    // 转换为角度值，并设置到马达
    mada_read = map(servo_read, 0, 1023, 0, 180);
    mada.write(mada_read);
}

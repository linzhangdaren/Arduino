#include <Arduino.h>
#include <Servo.h>

// 无刷电机 伺服电机控制servo_mechanism

// 创建一个Servo对象
Servo mada;
// 定义一个延迟变量
int myDelay = 500;

void setup()
{
    mada.attach(3); // 将3号引脚连接到伺服电机 attach系上
    // put your setup code here, to run once:
}

void loop()
{
    mada.write(0);
    delay(myDelay);
    mada.write(180);
    delay(myDelay);
    mada.write(0);
    delay(myDelay);
    mada.write(45);
    delay(myDelay);
    mada.write(90);
    delay(myDelay);
    mada.write(135);
    delay(myDelay);
    mada.write(180);
    delay(myDelay);
    mada.write(0);
    delay(1000);
    // 如果延迟太短，伺服电机可能无法转动到180度，可以适当延长
    //  put your main code here, to run repeatedly:
}

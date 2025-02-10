// 10 按一次开/再按一次关&按键消抖Key jitter
// 引入Arduino核心库，该库包含了Arduino编程所需的基本函数和定义
#include <Arduino.h>

// 定义LED连接的引脚为数字引脚2
int Led = 2;
// 定义按键连接的引脚为数字引脚3
int Button = 3;
// 定义一个布尔型变量LedState，用于记录LED的当前状态，初始状态为关闭（false）
int LedState = false;

// setup()函数在Arduino启动时只运行一次，通常用于初始化硬件设置
void setup()
{
    // 将Led引脚设置为输出模式，以便可以控制LED的亮灭
    pinMode(Led, OUTPUT);
    // 将Button引脚设置为输入上拉模式，当按键未按下时，引脚电平为高电平；按下时为低电平
    pinMode(Button, INPUT_PULLUP);
}

// loop()函数会在setup()函数执行完后不断循环执行，用于实现具体的功能逻辑
void loop()
{
    // 当按键按下时，点亮LED,当再次按下时切换LED的状态
    // digitalRead(Button)用于读取Button引脚的电平状态，LOW表示低电平，即按键被按下
    if (digitalRead(Button) == LOW)
    {
        // digitalWrite(Led, !LedState)用于控制LED的亮灭
        // !LedState是对当前LED状态取反，如果当前是亮（true）则变为灭（false），反之亦然
        digitalWrite(Led, !LedState);
        // 更新LedState变量，使其与当前LED的实际状态保持一致
        LedState = !LedState;
        // 延时400ms，这是为了消除按键抖动的影响
        // 按键按下或释放时会产生短暂的电平不稳定，通过延时可以避免程序误判
        delay(400);
    }
}
// Created by 黑马程序员.
#include "iostream"
#include "windows.h"
using namespace std;


int main()
{
    SetConsoleOutputCP(CP_UTF8);    // 设置编码

    int money = 50;
    cout << "小明余额：" << money << "元。" << endl;

    money = money - 5;
    cout << "购买冰淇淋花费5元，余额剩余：" << money << "元。" << endl;

    money = money + 10;
    cout << "转卖冰淇淋得到10元，余额剩余：" << money << "元。" << endl;

    money = money - 2;
    cout << "购买彩票花费2元，余额剩余：" << money << "元。" << endl;

    money = money * 2;
    cout << "彩票中奖余额翻倍，余额剩余：" << money << "元。" << endl;

    return 0;
}

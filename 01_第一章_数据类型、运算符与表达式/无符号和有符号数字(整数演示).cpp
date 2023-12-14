// Created by 黑马程序员.
#include "iostream"
#include "windows.h"
using namespace std;


int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // 有符号：signed（可选），  无符号：unsigned（必写）
    signed int num1 = 10;   // 都是有符号int
    int num2 = -10;         // 都是有符号int
    cout << num1 << "," << num2 << endl;

    unsigned int num3 = 30;    // 无符号的数字，必须大于等于0
    cout << num3 << endl;

    // long 无符号
    unsigned long num4 = 50;

    // 无符号的int、short、long 有快捷写法
    u_short num5 = 100; // 等同于 unsigned short
    u_int num6 = 200;   // 等同于 unsigned int
    u_long num7 = 1000; // 等同于 unsigned long

    cout << num5 << "," << num6 << "," << num7 << endl;

    return 0;
}

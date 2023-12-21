// Created by 黑马程序员.
#include "iostream"
using namespace std;


int main()
{
    // 单目（只有1个操作数）操作符：+、-
    int num1 = +10;     // + 表示正数
    int num2 = -10;     // - 表示负数
    cout << num1 << "," << num2 << endl;

    // 双目（有2个操作数）操作符：+、-、*、/、%
    int num3 = 5 + 5;   // + 相加
    int num4 = 5 - 3;   // - 相减
    int num5 = 5 * 5;   // * 相乘
    int num6 = 10 / 3;  // / 相除，如果两个操作数都是整数，是整除结果
    int num7 = 10 % 3;  // % 取余
    cout << "5 + 5 = " << num3 << endl;
    cout << "5 - 3 = " << num4 << endl;
    cout << "5 * 5 = " << num5 << endl;
    cout << "10 / 3 = " << num6 << endl;
    cout << "10 % 3 = " << num7 << endl;

    // 单目操作符：++（+1）、--（-1）
    int a = 2;
    int b = ++a;    // 前置递增（+1），在赋值语句（=）之前，先执行加1的操作
    cout << "a = " << a << ", b = " << b << endl;

    int c = 2;
    int d = c++;    // 后置递增，在赋值语句之“后”，再执行加1的操作
    cout << "c = " << c << ", d = " << d << endl;

    int e = 2;
    int f = --e;
    cout << "e = " << e << ", f = " << f << endl;

    int g = 2;
    int h = g--;
    cout << "g = " << g << ", h = " << h << endl;



    return 0;
}

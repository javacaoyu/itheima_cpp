// Created by 黑马程序员.
#include "iostream"
using namespace std;


int main()
{
    // 不带有后缀的数字的类型确定，整数的类型最小是int，小数的类型最小是double
    cout << "10的字节数是：" << sizeof(10) << endl;
    cout << "99999999999的字节数是：" << sizeof(99999999999) << endl;
    cout << "3.14的字节数是：" << sizeof(3.14) << endl;

    // 带有后缀的
    // U无符号的意思
    10U;        // 无符号整数int

    // L是long的意思
    cout << "10L的字节数是：" << sizeof(10L) << endl;

    // F float的意思
    // D double的意思
    cout << "3.14F的字节数是：" << sizeof(3.14F) << endl;
    cout << "3.14的字节数是：" << sizeof(3.14) << endl;
    cout << "3.14D的字节数是：" << sizeof(3.14D) << endl;


    return 0;
}

// Created by 黑马程序员.
#include "iostream"
#include "windows.h"
using namespace std;


int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // short、int、long、long long
    short age = 21;
    cout << age << endl;
    int num1 = 10;
    long num2 = 20;
    long long num3 = 30;
    cout << num1 << num2 << num3 << endl;

    // sizeof()函数，用法：sizeof(数据)，会告知得到数据所占用的字节
    cout << "short变量，占用字节： " << sizeof(age) << endl;
    cout << "int变量，占用字节： " << sizeof(num1) << endl;
    cout << "long变量，占用字节： " << sizeof(num2) << endl;
    cout << "long long变量，占用字节： " << sizeof(num3) << endl;

    return 0;
}

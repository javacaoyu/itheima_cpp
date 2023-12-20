// Created by 黑马程序员.
#include "iostream"
#include "windows.h"
using namespace std;


int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // cin >> 变量;
    int num;
    cout << "请输入一个整数：" << endl;
    cin >> num;

    double num2;
    cout << "请输入一个实型数字：" << endl;
    cin >> num2;

    char c;
    cout << "请输入一个字符：" << endl;
    cin >> c;

    string s;
    cout << "请输入一个字符串：" << endl;
    cin >> s;

    cout << "输入的整数值：" << num << endl;
    cout << "输入的小数值：" << num2 << endl;
    cout << "输入的字符：" << c << endl;
    cout << "输入的字符串：" << s << endl;


    return 0;
}

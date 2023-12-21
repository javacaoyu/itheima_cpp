// Created by 黑马程序员.
#include "iostream"
#include "windows.h"
using namespace std;


int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // 1. 变量的声明（定义），变量类型 变量名;
    int age;        // 整型的变量
    float height;   // 实型的变量声明
    char gender;    // 字符型变量声明
    string name;    // 字符串型变量声明

    // 2. 变量的赋值，变量名 = 变量值;
    age = 21;
    height = 180.5;
    gender = 'm';
    name = "小明";

    // 3. 变量的使用（取值），直接使用变量名称即可
//    cout << "age = " << age << endl;
    cout << name << "的年纪：" << age << endl;
    cout << name << "的性别：" << gender << endl;
    cout << name << "的身高：" << height << endl;

    return 0;
}

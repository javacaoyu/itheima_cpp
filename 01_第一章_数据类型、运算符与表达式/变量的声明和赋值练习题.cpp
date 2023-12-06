// Created by 黑马程序员.
#include "iostream"
#include "windows.h"
using namespace std;


int main()
{
    SetConsoleOutputCP(CP_UTF8);    // 中文乱码解决

    string name;        // 名字
    int age;            // 年龄
    float height;       // 身高
    int weight;         // 体重

    // 变量赋值
    name = "周杰轮";
    age = 21;
    height = 180.5;
    weight = 56;

    // 输出
    cout << "我叫" << name << "，今年" << age << "岁。" << endl;
    cout << "身高" << height << "cm，体重" << weight << "KG。" << endl;

    return 0;
}

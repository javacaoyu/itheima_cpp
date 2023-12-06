// Created by 黑马程序员.
#include "iostream"
#include "windows.h"
using namespace std;

#define NAME "周杰轮"
#define AGE 21
#define HEIGHT 180.5
#define WEIGHT 56

int main()
{
    SetConsoleOutputCP(CP_UTF8);    // 修改字符编码，解决中文乱码
    cout << "我是" << NAME << "，今年" << AGE << "岁。" << endl;
    cout << "身高" << HEIGHT << "cm，体重" << WEIGHT << "KG。" << endl;
    return 0;
}

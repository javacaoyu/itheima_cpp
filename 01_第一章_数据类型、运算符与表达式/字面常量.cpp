// Created by 黑马程序员.

#include "iostream"
using namespace std;

int main()
{
    // 整型、实型、字符、字符串
    // 整型（整数）
    21;

    // 实型（小数）
    180.5;

    // 字符，''进行包围，单个字符
    'c';   //只能提供1个字符，只能是1个，不能是0或者更多

    // 字符串，""进行包围，任意个字符
    "";         // 空字符串，里面是0个字符，是OK的
    "c";        // 标准的字符串
    "itheima";  // 标准的字符串

    // 通过cout将这些内容全部打印到控制台上
    cout << 21 << endl;
    cout << 180.5 << endl;
    cout << 'c' << endl;
    cout << "itheima" << endl;
    return 0;
}
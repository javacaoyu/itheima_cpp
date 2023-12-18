// Created by 黑马程序员.
#include "iostream"
#include "windows.h"
using namespace std;


int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // 转义字符：将普通的字符使用\作为开头，将其含义进行转换，对照得到ASCII表的控制字符的功能
    // \n 换行 \t 制表符  \\ 表示一个反斜杠本身  \' 表示单引号  \" 表示双引号
    cout << "你好呀 \n 我喜欢你" << endl;
    cout << "---------" << endl;

    // \t制表符演示， 效果等同于键盘的tab键，一个\t可以补充到8个字符位
    cout << "hello\titheima" << endl;
    cout << "a\titcast" << endl;
    cout << "---------" << endl;

    // 当你需要打印\本身 需要\\
    cout << "\\" << endl;

    // 如果要打印双引号和单引号，需要 \"  \'  来转义，是反向转义，将双引号和单引号的特殊效果消除
    cout << "\"   \'" << endl;

    return 0;
}

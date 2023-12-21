// Created by 黑马程序员.
#include "iostream"
#include "windows.h"
using namespace std;


int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // c语言风格的字符串
    char s1[] = "itheima";      // 字符数组的形式
    char *s2 = "itcast";        // 指针形式的字符串

    // c++语言风格的字符串
    string s3 = "c++ string";   // c++ string类型的字符串

//    s1 = "666";
    s2 = "777";
    s3 = "888";

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;

    return 0;
}

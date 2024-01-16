// Created by 黑马程序员.
#include "iostream"
using namespace std;


int main()
{
    cout << "欢迎来到黑马儿童游乐场，儿童免费，成人收费！\n请输入你的年龄：" << endl;
    int age;
    cin >> age;

    if (age < 18)
    {
        cout << "您未成年，免费游玩，欢迎你小朋友！" << endl;
    }

    cout << "祝您游玩愉快！！！" << endl;

    return 0;
}

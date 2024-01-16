// Created by 黑马程序员.
#include "iostream"
using namespace std;


int main()
{
    cout << "欢迎来到黑马动物园。\n请输入你的身高（cm）：" << endl;
    int height;
    cin >> height;

    if (height > 120) {
        cout << "您的身高超出120cm，游玩需要购票10元。";
    }else {
        cout << "您的身高未超出120cm，可以免费游玩。";
    }

    cout << "祝您游玩愉快。" << endl;

    return 0;
}

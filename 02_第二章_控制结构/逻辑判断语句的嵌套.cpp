// Created by 黑马程序员.
#include "iostream"
using namespace std;

/*
 * 如果小美喜欢我，我就去表白
 *      如果天气好，去踏青
 *      否则去看电影
 * 否则我去追求小新
 */

int main()
{
    int love;   // 1 表示喜欢  0 表示不喜欢
    int weather;    // 1 表示好天气 0表示不好的天气
    cout << "小美对我的态度是怎么样的？1是喜欢，0是不喜欢：" << endl;
    cin >> love;

    if (love)
    {
        // 小美喜欢我
        cout << "很高兴，小美喜欢我，我也喜欢你小美！" << endl;

        cout << "看一下天气，今天的天气怎么样？1好天气，0坏天气" << endl;
        cin >> weather;
        if (weather) {
            cout << "今天是个好天气，带小美一起踏青去。";
        } else {
            cout << "今天天气不好，去看电影吧！" << endl;
        }

    }else {
        // 小美不喜欢我
        cout << "很伤心，我去追求小新了！" << endl;
    }
    return 0;
}

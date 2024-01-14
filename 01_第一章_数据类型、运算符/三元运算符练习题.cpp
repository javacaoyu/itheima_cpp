// Created by 黑马程序员.
#include "iostream"
using namespace std;


int main()
{
    int score1, score2;
    cout << "请输入小明第一次考试的成绩（0-100）：" << endl;
    cin >> score1;
    cout << "请输入小明第二次考试的成绩（0-100）：" << endl;
    cin >> score2;

    string result = score2 > score1? "买糖" : "不买糖";
    cout << "对小明的考试成绩进行判断，结果是：" << result << endl;
    return 0;
}

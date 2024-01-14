// Created by 黑马程序员.
#include "iostream"
using namespace std;


int main()
{
    // 表达式? v1 : v2;
    int num1, num2;
    cout << "请输入num1的值" << endl;
    cin >> num1;
    cout << "请输入num2的值" << endl;
    cin >> num2;

    string value = num1 > num2? "num1是大于num2" : "num1 是小于 num2的";
    cout << value << endl;
    return 0;
}

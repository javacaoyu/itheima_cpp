// Created by 黑马程序员.
#include "iostream"
using namespace std;


int main()
{

    int age;
    double height;
    string name;

    cout << "请输入您的姓名：" << endl;
    cin >> name;

    cout << "请输入您的身高（CM）：" << endl;
    cin >> height;

    cout << "请输入您的年龄：" << endl;
    cin >> age;

    cout << "----------" << endl;
    cout << "信息输入完成，您的信息如下：\n姓名：" << name << endl;
    cout << "身高：" << height << " cm" << endl;
    cout << "年龄：" << age << endl;
    return 0;
}

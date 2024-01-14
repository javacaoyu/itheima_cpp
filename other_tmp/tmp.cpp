// Created by 黑马程序员.
#include "iostream"
using namespace std;

int main()
{
    int love;
    cout << "小美你喜欢我吗？喜欢扣1，不喜欢扣0！" << endl;
    cin >> love;

    if (love)
    {
        cout << "小美我也喜欢你！！！";
    }
    else
    {
        cout << "伤心！！！我去追求小新去，哼。";
    }
    return 0;
}

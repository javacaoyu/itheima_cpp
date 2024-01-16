// Created by 黑马程序员.
#include "iostream"
using namespace std;


int main() {
    int num = 5;
    int guess_num;
    cout << "请输入一个猜想的数字：" << endl;
    cin >> guess_num;

    if (guess_num == num) {
        cout << "你猜对了，真棒！" << endl;
    }else if (guess_num < num) {
        cout << "你猜小了！！！" << endl;
    }else {
        cout << "你猜大了！！！" << endl;
    }

    return 0;
}

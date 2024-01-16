// Created by 黑马程序员.
#include "iostream"
using namespace std;


int main()
{
    int num = 5;
    int guess_num;
    cout << "请输入第一次猜想的数字：";
    cin >> guess_num;

    if (guess_num == num) {
        cout << "第一次就猜对了，你真棒！" << endl;
    } else {
        cout << "不对，请再猜一次：";
        cin >> guess_num;
        if (guess_num == num) {
            cout << "第二次猜对了，你真棒！" << endl;
        }else {
            cout << "不对，再最后猜一次：";
            cin >> guess_num;
            if (guess_num == num) {
                cout << "第三次猜对了，你真棒！" << endl;
            } else {
                cout << "Sorry，全部猜错啦，我想的是：" << num << endl;
            }
        }
    }

    return 0;
}

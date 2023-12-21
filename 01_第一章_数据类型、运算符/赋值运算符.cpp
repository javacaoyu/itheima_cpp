// Created by 黑马程序员.
#include "iostream"
using namespace std;


int main()
{
    // +=、-=、*=、/=、%=
    // +=，将变量本身进行加法操作，将结果再次赋值变量本身
    int num = 2;
    num = num + 3;
    cout << num << endl;
    num += 3;       // 等同于 num = num + 3;
    cout << num << endl;

    // -=，将变量本身进行减法操作，将结果再次赋值变量本身
    num -= 3;       // 等同于 num = num - 3;
    cout << "num -= 3后结果是：" << num << endl;

    // *=，将变量本身进行乘法操作，将结果再次赋值变量本身
    num *= 5;       // 等同于 num = num * 5;
    cout << "num *= 5后结果是：" << num << endl;

    // /=，将变量本身进行除法操作，将结果再次赋值变量本身
    num /= 5;       // 等同于 num = num / 5;
    cout << "num /= 5后结果是：" << num << endl;

    // %=，将变量本身进行取余操作，将结果再次赋值变量本身
    num %= 3;       // 等同于 num = num % 3;
    cout << "num %= 3后结果是：" << num << endl;

    return 0;
}

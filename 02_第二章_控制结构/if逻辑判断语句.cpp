// Created by 黑马程序员.
#include "iostream"
using namespace std;


int main()
{
    /*
     *  if (判断)
     *  {
     *      code;
     *      code;
     *      ...
     *  }
     */
    cout << "今天发工资了" << endl;
    int money;
    cout << "请输入小明发的工资" << endl;
    cin >> money;

    // 开始逻辑判断了
    if (money >= 10000)
    {
        // 满足条件会执行这里面的代码
        cout << "买个新电脑去，花费了9900！" << endl;
        money -= 9900;
    }

    cout << "今天发的工资还剩下：" << money << "元！" << endl;


    return 0;
}

// Created by 黑马程序员.
#include "iostream"

using namespace std;


int main()
{
    /*
     * if (条件)
     * {}
     * else if(条件)
     * {}
     * else if(条件)
     * {}
     * ..
     * ..
     * ..
     * ..
     * else
     * {}
     */
    bool xiaomei = false;    // true 喜欢 false不喜欢
    bool xiaotian = false;
    bool xiaoqing = true;

    if (xiaomei)
    {
        cout << "小美我也喜欢你！" << endl;
    }else if(xiaotian)
    {
        cout << "小甜我也喜欢你！" << endl;
    }else if(xiaoqing){
        cout << "小青我也喜欢你！" << endl;
    }
    else {
        cout << "小新我喜欢你！" << endl;
    }
    return 0;
}

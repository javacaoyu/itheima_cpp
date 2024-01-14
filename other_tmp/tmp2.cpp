// Created by 黑马程序员.
#include "iostream"
#include "random"
#include "string_view"
using namespace std;

int get_random_num(int min, int max)
{
    // 创建一个随机数生成器
    random_device rd;
    mt19937 gen(rd());

    // 定义一个均匀分布的整数范围
    uniform_int_distribution<> dis(min, max);

    // 生成一个随机数并输出
    int random_number = dis(gen);
    return random_number;
}


int main()
{
    enum Season {
        SPRING = 3,
        SUMMER,
        AUTUMN,
        WINTER
    };
    enum Color {
        RED = 1,
        YELLOW,
        BLUE
    };

    Season v1 = SPRING;
    Season v2 = SUMMER;
    Season v3 = AUTUMN;
    Season v4 = WINTER;
    cout << v1 << endl;
    cout << v2 << endl;
    cout << v3 << endl;
    cout << v4 << endl;

    return 0;
}

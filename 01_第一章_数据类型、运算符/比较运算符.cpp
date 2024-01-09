// Created by 黑马程序员.
#include "iostream"
#include "cstring"      // C 语言的字符串库
using namespace std;


int main()
{
    // == 相等  != 不等 <小于 >大于 <=小于等于 >=大于等于
    // 0 false 假、 1 true 真
    int num1 = 3;
    int num2 = 5;
    bool r1 = num1 == num2;
    bool r2 = num1 != num2;
    cout << "num1 == num2 : " << r1 << endl;
    cout << "num1 != num2 : " << r2 << endl;

    cout << "3 < 5 :" << (3 < 5) << endl;
    cout << "3 > 5 :" << (3 > 5) << endl;
    cout << "3 <= 5 :" << (3 <= 5) << endl;
    cout << "3 >= 5 :" << (3 >= 5) << endl;

    // 字符串的比较
    // C语言风格字符串 char s[]   char *s   "hello"，strcmp()
    // C语言风格字符串 直接应用比较运算符，比较的是内存地址，而不是内容
    char s1[] = "hello";
    char *s2 = "hello";
    cout << "s1 == s2 " << (s1 == s2) << endl;

    // strcmp进行比较, 0 相等  -1 s1 < s2           1 s1 > s2
    cout << "s1 == s2 ?" << strcmp(s1, s2) << endl;
    char s3[] = "a";
    char *s4 = "b";
    cout << "s3 和s4的比较结果：" << strcmp(s3, s4) << endl;

    cout << "字符串字面量 c 是否大于 a" << strcmp("c", "a") << endl;

    // C++风格字符串， string类型的都是C++风格字符串
    // 在比较中只要有1个C++风格字符串 就可以用 比较运算符了
    string s5 = "a";    // C++风格
    char s6[] = "a";    // C语言风格
    cout << "s5 是否等于 s6 " << (s5 == s6) << endl;

    // 内容 和 地址

    return 0;
}

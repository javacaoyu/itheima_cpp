// Created by 黑马程序员.
#include "iostream"
#include "iomanip"

using namespace std;


int main() {
    long a = 100;
    long double ab = 1234567890.1234567890;
    cout.width(20);
    cout << fixed;
    cout << setprecision(100);
    cout << sizeof(ab) << endl;
    cout << ab << endl;

    return 0;
}

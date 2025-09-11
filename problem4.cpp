#include <iostream>
using namespace std;

int main() {
    int a = 189;
    char b = 'B';

    // Hisoblashlar
    float float_div = a / 3.0;         // a/3
    int decimal_b = (int)b;            // b ni ASCII qiymati
    float float_avg = (a + b) / 5.0;   // (a+b)/5
    char new_char = b + (a / 10 - 1);  // a/10 - 1 pozitsiya keyingi harf

    // Chiqish
    cout << float_div << endl;
    cout << decimal_b << endl;
    cout << float_avg << endl;
    cout << new_char << endl;

    return 0;
}
#include <iostream>
using namespace std;
int main() {
    // 1. Integer variable
    int intNumber = 25; // Example; Number of students in the lab

    //2.Float variable
    float floatNumber = 45.1234;

    //3. Double variable
    double doubleNumber = 123.45;

    //4. Boolean variable
    bool boolean = true;

    //5. Character variable
    char charname = 'A';

    //6. Printing values and sizes
    cout << "Value of integer is" << intNumber << 'Size is'<<sizeof(intNumber) <<endl;
    cout << "Value of float is" << floatNumber << 'Size is'<<sizeof(float) <<endl;
    cout << "Value of Double is" <<doubleNumber << 'Size is'<<sizeof(double) <<endl;
    cout << "Value of Boolean is"<<boolean <<endl;
    cout << "Value of charname is"<<charname<<endl;

    return 0;
}

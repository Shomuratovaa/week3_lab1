#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double v0, v1, t;
    cin >> v0 >> v1 >> t;

    double a = (v1 - v0) / t;

    cout << fixed << setprecision(2);
    cout << a << endl;

    return 0;
}
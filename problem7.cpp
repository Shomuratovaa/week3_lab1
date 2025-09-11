#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double x, y;
    cin >> x >> y;

    double t = (3 * (x * x - 3)) / (pow(y, 3) - 3);

    cout << fixed << setprecision(4);
    cout << "t=" << t << endl;

    return 0;
}

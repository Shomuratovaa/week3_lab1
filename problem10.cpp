#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double distance, mpg, price;
    cin >> distance >> mpg >> price;

    double cost = (distance / mpg) * price;

    cout << fixed << setprecision(3);
    cout << "The cost of driving is $" << cost << endl;

    return 0;
}

#include <cmath>
#include <iostream>
using namespace std;

int main() {
    double t;
    cin >> t;
    if (t <= 0.5)
        cout << "0";
    else if (t <= 2)
        cout << "10";
    else if (t <= 4)
        cout << 10 + floor((t - 2) / 0.5) * 8;
    else
        cout << 10 + 32 + floor((t - 4) / 0.5) * 10;
    return 0;
}
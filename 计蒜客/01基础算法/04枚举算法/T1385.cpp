#include <cmath>
#include <iostream>
using namespace std;

int main() {
    double x;
    cin >> x;
    if (x == 0.5) {
        cout << 3;
        return 0;
    }
    cout << ceil((x - 0.5) / 0.2) + 3;
    return 0;
}
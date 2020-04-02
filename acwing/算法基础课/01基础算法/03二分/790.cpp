#include <iostream>
using namespace std;

int main() {
    double n;
    cin >> n;
    double l = -10000, r = 10000, m;
    while (r - l >= 1e-8) {
        m = (l + r) / 2;
        if (m * m * m >= n)
            r = m;
        else
            l = m;
    }
    printf("%.6lf", l);
    return 0;
}
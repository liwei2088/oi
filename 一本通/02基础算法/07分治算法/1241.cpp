#include <cstdio>
#include <iostream>
using namespace std;

double f(double x) {
    return x * x * x * x * x - 15 * x * x * x * x + 85 * x * x * x -
           225 * x * x + 274 * x - 121;
}

int main() {
    double l = 1.5, r = 2.5;
    while (r - l >= 1e-8) {
        double m = (l + r) / 2;
        if (f(l) * f(m) <= 0)
            r = m;
        else
            l = m;
    }
    printf("%.6lf", l);
    return 0;
}
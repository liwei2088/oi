#include <cstdio>
#include <iostream>
using namespace std;
double a, b, c, d;

double f(double x) { return a * x * x * x + b * x * x + c * x + d; }

int main() {
    cin >> a >> b >> c >> d;
    int cnt = 0;
    for (double l = -100; l < 100; l++) {
        double r = l + 1;
        if (f(l) == 0) {
            printf("%.2lf ", l);
            cnt++;
            continue;
        }
        if (f(l) * f(r) > 0) continue;
        while (r - l >= 1e-4) {
            double m = (l + r) / 2;
            if (f(l) * f(m) < 0)
                r = m;
            else
                l = m;
        }
        printf("%.2lf ", l);
        cnt++;
        if (cnt == 3) break;
    }
    return 0;
}
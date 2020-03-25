#include <cstdio>
#include <iostream>
using namespace std;
int a, b, c;
bool check(double k) {
    double s = 0, t = 1 + k;
    for (int i = 1; i <= c; i++) {
        s += b / t;
        t *= (1 + k);
    }
    return s <= a;
}

int main() {
    cin >> a >> b >> c;
    double l = 0, r = 10, m;
    while (r - l >= 1e-5) {
        m = (l + r) / 2;
        if (check(m))
            r = m;
        else
            l = m;
    }
    printf("%.1lf", l * 100);
    return 0;
}
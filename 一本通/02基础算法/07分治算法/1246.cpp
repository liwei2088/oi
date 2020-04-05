#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;
double a, b, n, c;

double bsearch(double l, double r) {
    while (r - l >= 1e-12) {
        double m = (l + r) / 2;
        if (2 * b / a > m / sin(m / 2))
            l = m;
        else
            r = m;
    }
    return l;
}
/*
 一本通测试数据精度有问题
*/
int main() {
    cin >> a >> n >> c;
    b = (1 + n * c) * a;
    double d = bsearch(0, acos(-1.0));
    printf("%.3lf", b / d * (1 - cos(d / 2)));
    return 0;
}
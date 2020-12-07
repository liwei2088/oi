#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    long long x, y, x1, y1, x2, y2;  //一定要使用long long
    cin >> x >> y;
    double dis = 0;
    while (cin >> x1 >> y1 >> x2 >> y2) {
        dis += sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    }
    double t = dis * 2 / 1000 / 20;
    long long h = t;
    long long m = t * 60 - h * 60 + 0.5;
    printf("%lld:%02lld\n", h, m);
    return 0;
}
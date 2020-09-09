#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

double work(double x, double y, double u, double v) {
    return sqrt((x - u) * (x - u) + (y - v) * (y - v));
}

int main() {
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double a = work(x1, y1, x2, y2);
    double b = work(x1, y1, x3, y3);
    double c = work(x2, y2, x3, y3);
    printf("%.2lf", a + b + c);
    return 0;
}
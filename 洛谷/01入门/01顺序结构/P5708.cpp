#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double p = (a + b + c) / 2;
    printf("%.1lf", sqrt(p * (p - a) * (p - b) * (p - c)));
    return 0;
}
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    double s = a * 3.3 + b * 5.0 + c * 8.4;
    if (s - (long long)(s) < 0.5)
        s = (long long)(s);
    else
        s = (long long)(s) + 0.5;
    printf("%.1lf", s);
    return 0;
}
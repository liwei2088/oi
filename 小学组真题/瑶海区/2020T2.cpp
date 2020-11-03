#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    char ch;
    double s;
    int t;
    cin >> ch;
    cin >> s >> t;
    double ans = 0;
    if (ch == 'A') {
        if (s <= 2.5)
            ans = 8;
        else
            ans = 8 + ceil(s - 2.5) * 1.3;
        if (t > 5) ans += (t - 5) * 0.4;
    } else {
        if (s <= 2.5)
            ans = 9;
        else
            ans = 8 + ceil(s - 2.5) * 1.5;
        if (t > 5) ans += (t - 5) * 0.6;
    }
    printf("%.0lf", ans);
    return 0;
}
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int lcm(int a, int b) { return a * b / gcd(a, b); }

int n;
int main() {
    int a, b, c, d, x, y, p;
    char ch;
    cin >> n;
    scanf("%d%c%d", &a, &ch, &b);
    for (int i = 1; i < n; i++) {
        scanf("%d%c%d", &c, &ch, &d);
        y = lcm(b, d);
        x = y / b * a + y / d * c;
        p = gcd(x, y);
        x /= p;
        y /= p;
        a = x;
        b = y;
    }
    if (b == 1)
        cout << a;
    else
        cout << a << "/" << b;
    return 0;
}
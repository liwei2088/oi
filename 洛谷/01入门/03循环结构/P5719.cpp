#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int s1 = 0, s2 = 0, c1 = 0, c2 = 0;
    for (int i = 1; i <= n; i++) {
        if (i % k == 0)
            s1 += i, c1++;
        else
            s2 += i, c2++;
    }
    printf("%.1lf %.1lf", s1 * 1.0 / c1, s2 * 1.0 / c2);
    return 0;
}
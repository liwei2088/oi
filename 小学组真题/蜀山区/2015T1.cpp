#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
int n, s;
double a[105];
int main() {
    cin >> n >> s;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    double s = 0;
    for (int i = 1; i <= n - s; i++) s += a[i];
    printf("%.1lf", s);
    return 0;
}
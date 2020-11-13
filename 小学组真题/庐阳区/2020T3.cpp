#include <cmath>
#include <iostream>
using namespace std;
int n, m, k;
int main() {
    cin >> n >> m >> k;
    int y = ceil(k * 1.0/ n);
    int t;
    if (y % 2 == 0)
        t = y * n;
    else
        t = (y - 1) * n + 1;
    int x = abs(t - k) + 1;
    cout << x << " " << y;
    return 0;
}
#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    double ans = 0;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        ans += ceil(x / 70.0) * 0.1;
    }
    printf("%.1lf", ans);
    return 0;
}
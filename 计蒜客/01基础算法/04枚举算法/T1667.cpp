#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    for (int a = 0; a <= 200; a++)
        for (int b = 0; b <= 200; b++)
            for (int c = 0; c <= 200; c++) {
                if (a * a + b * b + c * c > n) break;
                int d = n - a * a - b * b - c * c;
                int x = sqrt(d);
                if (x * x == d) ans++;
            }
    cout << ans;
    return 0;
}
#include <cmath>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;
    for (int i = 100; i <= 999; i++) {
        int x = sqrt(i);
        if (x * x != i) continue;
        bool f = false;
        int a[10];
        memset(a, 0, sizeof(a));
        x = i;
        while (x != 0) {
            a[x % 10]++;
            if (a[x % 10] > 1) {
                f = true;
                break;
            }
            x /= 10;
        }
        if (f == false) continue;
        cnt++;
        if (cnt == n) cout << i;
    }
    return 0;
}
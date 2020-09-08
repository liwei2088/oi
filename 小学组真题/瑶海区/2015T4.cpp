#include <cmath>
#include <iostream>
using namespace std;
int a[45], b[45], n;

bool check() {
    int t = a[1];
    for (int i = 2; i <= n; i++)
        if (t != a[i]) return false;
    return true;
}

int main() {
    while (cin >> n && n != 0) {
        for (int i = 1; i <= n; i++) cin >> a[i];
        int ans = 0;
        while (1) {
            for (int i = 1; i <= n; i++) {
                if (a[i] % 2 == 1) a[i]++;
                a[i] = a[i] / 2;
                if (i == n)
                    b[1] = a[i];
                else
                    b[i + 1] = a[i];
            }
            for (int i = 1; i <= n; i++) a[i] += b[i];
            if (check() == true) break;
            ans++;
        }
        cout << ans << " " << a[1] << endl;
    }

    return 0;
}
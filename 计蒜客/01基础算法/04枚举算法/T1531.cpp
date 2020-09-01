#include <iostream>
using namespace std;

int main() {
    int n, m, k = 0;
    while (cin >> n >> m) {
        if (n == 0 && m == 0) break;
        int ans = 0;
        for (int a = 1; a < n; a++)
            for (int b = a + 1; b < n; b++) {
                if ((a * a + b * b + m) % (a * b) == 0) ans++;
            }
        cout << "Case " << ++k << ": " << ans << endl;
    }
    return 0;
}
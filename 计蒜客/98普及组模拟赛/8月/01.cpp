#include <iostream>
using namespace std;
int n;
int main() {
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int t = i, res = 0;
        for (int j = 1; j <= t; j++)
            if (t % j == 0) res++;
        if (res % 2 == 0) ans++;
    }
    cout << ans;
    return 0;
}
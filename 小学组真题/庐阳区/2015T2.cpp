#include <iostream>
using namespace std;
int n, a[105];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int ans = 0;
    for (int i = 1; i <= n - 2; i++)
        for (int j = i + 1; j <= n - 1; j++)
            for (int k = j + 1; k <= n; k++)
                if (i + j > k && i + k > j && k + j > i) {
                    int c = i + j + k;
                    ans = max(ans, c);
                }
    cout << ans;
    return 0;
}
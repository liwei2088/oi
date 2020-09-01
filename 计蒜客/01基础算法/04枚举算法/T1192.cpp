#include <iostream>
using namespace std;
int a[20], n;
int main() {
    int x;
    while (cin >> x && x != 0) a[++n] = x;
    int ans = 0;
    for (int i = 1; i <= n; i++)
        for (int j = i + 1; j <= n; j++)
            if (a[i] == 2 * a[j] || 2 * a[i] == a[j]) ans++;
    cout << ans;
    return 0;
}
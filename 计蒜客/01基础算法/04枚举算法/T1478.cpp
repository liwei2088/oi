#include <iostream>
using namespace std;
long long n, a[20], k;
int main() {
    k = 1;
    for (int i = 1; i <= 12; i++) k *= i;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int ans = 0;
    for (int i = 1; i <= n; i++)
        for (int j = i + 1; j <= n; j++)
            if (a[i] * a[j] == k) ans++;
    cout << ans;
    return 0;
}
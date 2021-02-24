#include <cstdio>
#include <iostream>
using namespace std;
const int N = 505;
int n, a[N];
bool st[N];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int ans = 0;
    for (int i = 1; i <= n; i++)
        for (int j = i + 1; j <= n; j++)
            if (a[i] == -a[j]) ans++;
    cout << ans;
    return 0;
}
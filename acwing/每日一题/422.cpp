#include <cstdio>
#include <iostream>
using namespace std;
int L, m;
bool f[10005];
int main() {
    cin >> L >> m;
    while (m--) {
        int a, b;
        cin >> a >> b;
        for (int i = a; i <= b; i++) f[i] = true;
    }
    int ans = 0;
    for (int i = 0; i <= L; i++)
        if (!f[i]) ans++;
    cout << ans;
    return 0;
}
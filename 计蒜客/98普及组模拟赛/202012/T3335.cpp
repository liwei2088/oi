#include <cstdio>
#include <iostream>
using namespace std;
int n;
int main() {
    long long ans = 0, s = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int t;
        cin >> t;
        s += t;
        ans += s;
    }
    cout << ans;
    return 0;
}